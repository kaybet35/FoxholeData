#include "ResourceMineBuildSite.h"
#include "GenericItemStockpileComponent.h"

AResourceMineBuildSite::AResourceMineBuildSite(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bIsBuildSiteMapIconVisible = true;
    this->GenericStockpileComponent = CreateDefaultSubobject<UGenericItemStockpileComponent>(TEXT("GenericStockpileComponent"));
}


