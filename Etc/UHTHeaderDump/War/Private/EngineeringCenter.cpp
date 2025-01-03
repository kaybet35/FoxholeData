#include "EngineeringCenter.h"
#include "EArmourType.h"
#include "EStructureProfileType.h"

AEngineeringCenter::AEngineeringCenter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ProfileType = EStructureProfileType::LogiStructureWithValuableStorage;
    this->ArmourType = EArmourType::Tier3Structure;
    this->bIsBuildSiteMapIconVisible = true;
    this->bIgnoreFriendlyFire = true;
}


