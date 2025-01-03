#include "ResourceMine.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
#include "EArmourType.h"
#include "EStructureProfileType.h"
#include "GenericItemStockpileComponent.h"
#include "Net/UnrealNetwork.h"

AResourceMine::AResourceMine(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ProfileType = EStructureProfileType::ResourceMine;
    this->ArmourType = EArmourType::Tier3Structure;
    this->bIsBuildSiteMapIconVisible = true;
    this->GenericStockpileComponent = CreateDefaultSubobject<UGenericItemStockpileComponent>(TEXT("GenericStockpileComponent"));
    this->ProducedItem = TEXT("Cloth");
    this->ProducedItemCount = 1;
    this->ChanceToProduceRareItem = 0.00f;
    this->ProductionCycleTime = 2.00f;
    this->PetrolEfficiencyMultiplier = 3.00f;
    this->DieselConsumptionRate = 1.00f;
    this->PetrolConsumptionRate = 1.00f;
    this->bIsProducing = false;
    this->ItemsInProduction = 0.00f;
    this->TransferLocation = CreateDefaultSubobject<USceneComponent>(TEXT("TransferLocation"));
    this->TransferLocation->SetupAttachment(RootComponent);
}

bool AResourceMine::IsProducing() const {
    return false;
}

void AResourceMine::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AResourceMine, FuelTankDiesel);
    DOREPLIFETIME(AResourceMine, FuelTankPetrol);
    DOREPLIFETIME(AResourceMine, bIsProducing);
}


