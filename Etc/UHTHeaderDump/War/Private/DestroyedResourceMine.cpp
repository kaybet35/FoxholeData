#include "DestroyedResourceMine.h"
#include "GenericItemStockpileComponent.h"

ADestroyedResourceMine::ADestroyedResourceMine(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->GenericStockpileComponent = CreateDefaultSubobject<UGenericItemStockpileComponent>(TEXT("GenericStockpileComponent"));
}


