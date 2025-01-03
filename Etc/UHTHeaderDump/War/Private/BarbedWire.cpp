#include "BarbedWire.h"
#include "EStructureProfileType.h"

ABarbedWire::ABarbedWire(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->NetDormancy = DORM_DormantAll;
    this->ProfileType = EStructureProfileType::FieldStructure;
    this->bCanBeDismantled = true;
}


