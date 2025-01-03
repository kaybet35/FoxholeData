#include "DestroyedHospital.h"
#include "GenericStockpileComponent.h"

ADestroyedHospital::ADestroyedHospital(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->LastSpawnPointID = 0;
    this->GenericStockpileComponent = CreateDefaultSubobject<UGenericStockpileComponent>(TEXT("GenericStockpileComponent"));
}


