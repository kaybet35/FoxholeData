#include "CabooseRailVehicle.h"
#include "GenericStockpileComponent.h"

ACabooseRailVehicle::ACabooseRailVehicle(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->GenericStockpileComponent = CreateDefaultSubobject<UGenericStockpileComponent>(TEXT("GenericStockpileComponent"));
}


