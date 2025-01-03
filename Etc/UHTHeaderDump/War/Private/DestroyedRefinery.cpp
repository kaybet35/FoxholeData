#include "DestroyedRefinery.h"
#include "CraneSpawnLocationComponent.h"
#include "GenericItemStockpileComponent.h"

ADestroyedRefinery::ADestroyedRefinery(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->GenericStockpileComponent = CreateDefaultSubobject<UGenericItemStockpileComponent>(TEXT("GenericStockpileComponent"));
    this->CraneSpawnLocationComponent = CreateDefaultSubobject<UCraneSpawnLocationComponent>(TEXT("CraneSpawnLocationComponent"));
    this->CraneSpawnLocationComponent->SetupAttachment(RootComponent);
}


