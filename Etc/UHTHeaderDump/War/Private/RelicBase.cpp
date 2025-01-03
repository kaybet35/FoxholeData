#include "RelicBase.h"
#include "EArmourType.h"

ARelicBase::ARelicBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ArmourType = EArmourType::Tier3Structure;
}


