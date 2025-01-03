#include "TownBase.h"
#include "EArmourType.h"

ATownBase::ATownBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bNetLoadOnClient = false;
    this->ArmourType = EArmourType::Tier3Structure;
}


