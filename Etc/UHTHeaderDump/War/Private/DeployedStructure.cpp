#include "DeployedStructure.h"
#include "EArmourType.h"
#include "EStructureProfileType.h"

ADeployedStructure::ADeployedStructure(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ProfileType = EStructureProfileType::DeployableWeapon;
    this->ArmourType = EArmourType::Tier1Structure;
    this->bIsDeployed = true;
    this->TeamId = 255;
    this->bEnableFriendlyFireTrackingOverride = true;
}


