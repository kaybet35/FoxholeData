#include "ResourceTransferStationBuildSite.h"
#include "GenericStockpileComponent.h"

AResourceTransferStationBuildSite::AResourceTransferStationBuildSite(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->GenericStockpileComponent = CreateDefaultSubobject<UGenericStockpileComponent>(TEXT("GenericStockpileComponent"));
}


