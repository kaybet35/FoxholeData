#include "Wall.h"
#include "EStructureNetRelevancySize.h"
#include "EStructureProfileType.h"

AWall::AWall(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->NetDormancy = DORM_DormantAll;
    this->ProfileType = EStructureProfileType::FieldDefenseStructure;
    this->StructureNetRelevancySize = EStructureNetRelevancySize::Large;
    this->bAllowStanding = false;
    this->UpgradeRequiresConnectedWalls = false;
}


