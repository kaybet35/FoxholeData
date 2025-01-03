#include "AssemblyStationBuildSite.h"
#include "GenericStockpileComponent.h"

AAssemblyStationBuildSite::AAssemblyStationBuildSite(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->GenericStockpileComponent = CreateDefaultSubobject<UGenericStockpileComponent>(TEXT("GenericStockpileComponent"));
}


