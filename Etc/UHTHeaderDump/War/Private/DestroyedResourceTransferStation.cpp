#include "DestroyedResourceTransferStation.h"
#include "GenericStockpileComponent.h"

ADestroyedResourceTransferStation::ADestroyedResourceTransferStation(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->GenericStockpileComponent = CreateDefaultSubobject<UGenericStockpileComponent>(TEXT("GenericStockpileComponent"));
}


