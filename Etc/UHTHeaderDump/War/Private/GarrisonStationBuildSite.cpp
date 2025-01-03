#include "GarrisonStationBuildSite.h"
#include "GenericItemStockpileComponent.h"
#include "TechTreeComponent.h"

AGarrisonStationBuildSite::AGarrisonStationBuildSite(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bIsBuildSiteMapIconVisible = true;
    this->GenericStockpileComponent = CreateDefaultSubobject<UGenericItemStockpileComponent>(TEXT("GenericStockpileComponent"));
    this->TechTreeComponent = CreateDefaultSubobject<UTechTreeComponent>(TEXT("TechTreeComponent"));
}


