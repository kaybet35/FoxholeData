#include "AssemblyStation.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoxComponent -FallbackName=BoxComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
#include "AssemblyStationBuildSite.h"
#include "BuildSocketComponent.h"
#include "EFortTier.h"
#include "FacilityLightComponent.h"
#include "GenericStockpileComponent.h"
#include "ModificationSlotComponent.h"
#include "Net/UnrealNetwork.h"

AAssemblyStation::AAssemblyStation(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->KillVolume = CreateDefaultSubobject<UBoxComponent>(TEXT("KillVolume"));
    this->bIgnoreFriendlyFire = true;
    this->Tier = EFortTier::T1;
    this->bIsBuiltOnFoundation = true;
    this->BuildSiteClass = AAssemblyStationBuildSite::StaticClass();
    this->bUsesImpactsMaterial = true;
    this->bCanBeFlaggedForDisruptivePlacement = true;
    this->GenericStockpileComponent = CreateDefaultSubobject<UGenericStockpileComponent>(TEXT("GenericStockpileComponent"));
    this->UpgradeSlotComponent = CreateDefaultSubobject<UModificationSlotComponent>(TEXT("UpgradeSlotComponent"));
    this->PowerSocket = CreateDefaultSubobject<UBuildSocketComponent>(TEXT("PowerSocket"));
    this->LightComponent = CreateDefaultSubobject<UFacilityLightComponent>(TEXT("LightComponent"));
    this->GarageFootprintComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("GarageFootprint"));
    this->TransferLocation = CreateDefaultSubobject<USceneComponent>(TEXT("TransferLocation"));
    this->TransferLocation2 = CreateDefaultSubobject<USceneComponent>(TEXT("TransferLocation2"));
    this->AssemblyAreaComponent = NULL;
    this->AssemblyAreaState = EAssemblyAreaState::Closed;
    this->bAllowsTierUpgrades = false;
    this->bSupportsExtraLargeShippables = false;
    this->bIsDockyard = false;
    this->bVehiclesMustBePositionedForRepairs = false;
    this->UpgradeCostMultiplier = 1.00f;
    this->GarageFootprintKillLocationZ = 0.00f;
    this->LadderLocation1 = CreateDefaultSubobject<USceneComponent>(TEXT("LadderLocation1"));
    this->LadderLocation2 = CreateDefaultSubobject<USceneComponent>(TEXT("LadderLocation2"));
    this->LadderLocation3 = CreateDefaultSubobject<USceneComponent>(TEXT("LadderLocation3"));
    this->LadderType = NULL;
    this->KillVolume->SetupAttachment(RootComponent);
    this->UpgradeSlotComponent->SetupAttachment(RootComponent);
    this->PowerSocket->SetupAttachment(RootComponent);
    this->GarageFootprintComponent->SetupAttachment(RootComponent);
    this->TransferLocation->SetupAttachment(RootComponent);
    this->TransferLocation2->SetupAttachment(RootComponent);
    this->LadderLocation1->SetupAttachment(RootComponent);
    this->LadderLocation2->SetupAttachment(RootComponent);
    this->LadderLocation3->SetupAttachment(RootComponent);
}

void AAssemblyStation::OnRep_PowerGridInfo() {
}

void AAssemblyStation::OnRep_BuildActor() {
}

void AAssemblyStation::OnRep_AssemblyAreaState() {
}

void AAssemblyStation::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AAssemblyStation, PowerGridInfo);
    DOREPLIFETIME(AAssemblyStation, BuildActor);
    DOREPLIFETIME(AAssemblyStation, AssemblyAreaState);
}


