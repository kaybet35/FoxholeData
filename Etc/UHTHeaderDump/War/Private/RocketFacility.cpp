#include "RocketFacility.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoxComponent -FallbackName=BoxComponent
#include "EArmourType.h"
#include "Net/UnrealNetwork.h"
#include "RocketFacilityBuildSite.h"

ARocketFacility::ARocketFacility(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ArmourType = EArmourType::Tier3Structure;
    this->bIsBuildSiteMapIconVisible = true;
    this->bIgnoreFriendlyFire = true;
    this->BuildSiteClass = ARocketFacilityBuildSite::StaticClass();
    this->BuildLocation = CreateDefaultSubobject<UBoxComponent>(TEXT("Build Location"));
    this->Sequence = ERocketLaunchSequence::Idle;
    this->RequiredSquadMembers = 10;
    this->StartLaunchEntries = 0;
    this->CancelLaunchEntries = 0;
    this->TargetRegion = EWorldConquestMapId::Invalid;
    this->TimeToLaunch = -1.00f;
    this->LastFailure = ERocketLaunchResponse::Success;
    this->BuildLocation->SetupAttachment(RootComponent);
}

void ARocketFacility::OnRep_TimeToLaunch() {
}

void ARocketFacility::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ARocketFacility, Sequence);
    DOREPLIFETIME(ARocketFacility, RequiredSquadMembers);
    DOREPLIFETIME(ARocketFacility, StartLaunchEntries);
    DOREPLIFETIME(ARocketFacility, CancelLaunchEntries);
    DOREPLIFETIME(ARocketFacility, TargetRegion);
    DOREPLIFETIME(ARocketFacility, Coordinate);
    DOREPLIFETIME(ARocketFacility, FuelTank);
    DOREPLIFETIME(ARocketFacility, TimeToLaunch);
    DOREPLIFETIME(ARocketFacility, LastFailure);
    DOREPLIFETIME(ARocketFacility, LastFailureTime);
}


