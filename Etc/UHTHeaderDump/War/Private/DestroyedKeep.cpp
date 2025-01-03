#include "DestroyedKeep.h"
#include "GenericItemStockpileComponent.h"

ADestroyedKeep::ADestroyedKeep(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->GenericStockpileComponent = CreateDefaultSubobject<UGenericItemStockpileComponent>(TEXT("GenericStockpileComponent"));
}


