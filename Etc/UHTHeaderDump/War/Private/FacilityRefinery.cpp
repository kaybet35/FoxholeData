#include "FacilityRefinery.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
#include "BuildSocketComponent.h"
#include "CraneSpawnLocationComponent.h"
#include "EFortTier.h"
#include "FacilityLightComponent.h"
#include "FacilityRefineryBuildSite.h"
#include "GenericStockpileComponent.h"
#include "ModificationSlotComponent.h"
#include "Net/UnrealNetwork.h"

AFacilityRefinery::AFacilityRefinery(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bIgnoreFriendlyFire = true;
    this->Tier = EFortTier::T1;
    this->bIsBuiltOnFoundation = true;
    this->BuildSiteClass = AFacilityRefineryBuildSite::StaticClass();
    this->bUsesImpactsMaterial = true;
    this->bCanBeFlaggedForDisruptivePlacement = true;
    this->GenericStockpileComponent = CreateDefaultSubobject<UGenericStockpileComponent>(TEXT("GenericStockpileComponent"));
    this->CrateGenericStockpileComponent = CreateDefaultSubobject<UGenericStockpileComponent>(TEXT("CrateGenericStockpileComponent"));
    this->UpgradeSlotComponent = CreateDefaultSubobject<UModificationSlotComponent>(TEXT("UpgradeSlotComponent"));
    this->CraneSpawnLocationComponent = CreateDefaultSubobject<UCraneSpawnLocationComponent>(TEXT("CraneSpawnLocationComponent"));
    this->PowerSocket = CreateDefaultSubobject<UBuildSocketComponent>(TEXT("PowerSocket"));
    this->LightComponent = CreateDefaultSubobject<UFacilityLightComponent>(TEXT("LightComponent"));
    this->TransferLocation = CreateDefaultSubobject<USceneComponent>(TEXT("TransferLocation"));
    this->ReplicatedIndex = -1;
    this->bReplicatedIsActive = false;
    this->MaxOrders = 5;
    this->ItemInputBuffer = 0;
    this->UpgradeSlotComponent->SetupAttachment(RootComponent);
    this->CraneSpawnLocationComponent->SetupAttachment(RootComponent);
    this->PowerSocket->SetupAttachment(RootComponent);
    this->TransferLocation->SetupAttachment(RootComponent);
}

void AFacilityRefinery::OnRep_ReplicatedIsActive() {
}

void AFacilityRefinery::OnRep_ReplicatedIndex() {
}

void AFacilityRefinery::OnRep_PowerGridInfo() {
}

void AFacilityRefinery::MulticastSetMaxOrderCount_Implementation(const uint8 MaxOrderCount) {
}



void AFacilityRefinery::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFacilityRefinery, FuelTanks);
    DOREPLIFETIME(AFacilityRefinery, PowerGridInfo);
    DOREPLIFETIME(AFacilityRefinery, ReplicatedIndex);
    DOREPLIFETIME(AFacilityRefinery, bReplicatedIsActive);
}


