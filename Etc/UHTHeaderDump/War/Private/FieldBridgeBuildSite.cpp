#include "FieldBridgeBuildSite.h"
#include "EStructureNetRelevancySize.h"

AFieldBridgeBuildSite::AFieldBridgeBuildSite(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->StructureNetRelevancySize = EStructureNetRelevancySize::Custom;
    this->bAllowStanding = false;
}


