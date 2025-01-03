#include "Refinery.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
#include "CraneSpawnLocationComponent.h"
#include "EArmourType.h"
#include "EStructureNetRelevancySize.h"
#include "EStructureProfileType.h"
#include "GenericItemStockpileComponent.h"
#include "Net/UnrealNetwork.h"

ARefinery::ARefinery(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ProfileType = EStructureProfileType::LogiStructureWithValuableStorage;
    this->ArmourType = EArmourType::Tier3Structure;
    this->bIsBuildSiteMapIconVisible = true;
    this->bIgnoreFriendlyFire = true;
    this->StructureNetRelevancySize = EStructureNetRelevancySize::Large;
    this->GenericStockpileComponent = CreateDefaultSubobject<UGenericItemStockpileComponent>(TEXT("GenericStockpileComponent"));
    this->CraneSpawnLocationComponent = CreateDefaultSubobject<UCraneSpawnLocationComponent>(TEXT("CraneSpawnLocationComponent"));
    this->TransferLocation = CreateDefaultSubobject<USceneComponent>(TEXT("TransferLocation"));
    this->bIsRefining = false;
    this->CraneSpawnLocationComponent->SetupAttachment(RootComponent);
    this->TransferLocation->SetupAttachment(RootComponent);
}

bool ARefinery::IsRefining() const {
    return false;
}

void ARefinery::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ARefinery, bIsRefining);
}


