#include "KeepBuildSite.h"
#include "GenericItemStockpileComponent.h"

AKeepBuildSite::AKeepBuildSite(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bIsBuildSiteMapIconVisible = true;
    this->GenericStockpileComponent = CreateDefaultSubobject<UGenericItemStockpileComponent>(TEXT("GenericStockpileComponent"));
}


