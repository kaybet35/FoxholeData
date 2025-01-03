#include "TrailerVehicleStockpile.h"
#include "ReplicatedGenericStockpileComponent.h"

ATrailerVehicleStockpile::ATrailerVehicleStockpile(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->GenericStockpileComponent = CreateDefaultSubobject<UReplicatedGenericStockpileComponent>(TEXT("GenericStockpileComponent"));
}


