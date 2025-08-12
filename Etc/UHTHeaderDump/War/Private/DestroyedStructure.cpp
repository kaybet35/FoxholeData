#include "DestroyedStructure.h"
#include "EStructureProfileType.h"

ADestroyedStructure::ADestroyedStructure(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->NetDormancy = DORM_DormantAll;
    this->ProfileType = EStructureProfileType::DestroyedStructure;
    this->bIsScorchable = true;
}


