#include "DestroyedGarrisonHouse.h"
#include "EStructureProfileType.h"

ADestroyedGarrisonHouse::ADestroyedGarrisonHouse(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ProfileType = EStructureProfileType::DestroyedRuinableStructure;
}


