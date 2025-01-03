#include "GarrisonHouseBuildSite.h"
#include "EStructureNetRelevancySize.h"

AGarrisonHouseBuildSite::AGarrisonHouseBuildSite(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->StructureNetRelevancySize = EStructureNetRelevancySize::Large;
}


