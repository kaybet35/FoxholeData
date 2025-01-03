#include "RailVehicleResourcePlatform.h"
#include "ReplicatedGenericStockpileComponent.h"

ARailVehicleResourcePlatform::ARailVehicleResourcePlatform(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->GenericStockpileComponent = CreateDefaultSubobject<UReplicatedGenericStockpileComponent>(TEXT("GenericStockpileComponent"));
}


