#include "Keep.h"
#include "EArmourType.h"
#include "EStructureProfileType.h"

AKeep::AKeep(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ProfileType = EStructureProfileType::StaticBase;
    this->ArmourType = EArmourType::Tier3Structure;
    this->bIgnoreFriendlyFire = true;
}


