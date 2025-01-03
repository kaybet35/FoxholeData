#include "DestroyedFacilityRefinery.h"
#include "CraneSpawnLocationComponent.h"
#include "GenericStockpileComponent.h"

ADestroyedFacilityRefinery::ADestroyedFacilityRefinery(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->GenericStockpileComponent = CreateDefaultSubobject<UGenericStockpileComponent>(TEXT("GenericStockpileComponent"));
    this->CrateGenericStockpileComponent = CreateDefaultSubobject<UGenericStockpileComponent>(TEXT("CrateGenericStockpileComponent"));
    this->CraneSpawnLocationComponent = CreateDefaultSubobject<UCraneSpawnLocationComponent>(TEXT("CraneSpawnLocationComponent"));
    this->ItemInputBuffer = 0;
    this->ModificationMask = 0;
    this->CraneSpawnLocationComponent->SetupAttachment(RootComponent);
}


