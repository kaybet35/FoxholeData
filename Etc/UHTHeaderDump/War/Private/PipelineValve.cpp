#include "PipelineValve.h"
#include "BuildSocketComponent.h"
#include "EStructureProfileType.h"
#include "ModificationSlotComponent.h"
#include "Net/UnrealNetwork.h"

APipelineValve::APipelineValve(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ProfileType = EStructureProfileType::FieldStructure;
    this->bIgnoreFriendlyFire = true;
    this->bUsesImpactsMaterial = true;
    this->bCanBeFlaggedForDisruptivePlacement = true;
    this->UpgradeSlotComponent = CreateDefaultSubobject<UModificationSlotComponent>(TEXT("UpgradeSlotComponent"));
    this->BackSocket = CreateDefaultSubobject<UBuildSocketComponent>(TEXT("BackSocket"));
    this->FrontSocket = CreateDefaultSubobject<UBuildSocketComponent>(TEXT("FrontSocket"));
    this->ThroughputNormalized = 0.00f;
    this->BackSocket->SetupAttachment(RootComponent);
    this->FrontSocket->SetupAttachment(RootComponent);
    this->UpgradeSlotComponent->SetupAttachment(RootComponent);
}

void APipelineValve::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(APipelineValve, ThroughputNormalized);
}


