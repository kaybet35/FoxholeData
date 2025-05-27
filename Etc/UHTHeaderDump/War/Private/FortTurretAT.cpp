#include "FortTurretAT.h"
#include "EStructureProfileType.h"
#include "InfrastructureComponent.h"
#include "ModularMountsComponent.h"

AFortTurretAT::AFortTurretAT(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ProfileType = EStructureProfileType::FortRotatableUpgrade;
    this->ModularMountsComponent = CreateDefaultSubobject<UModularMountsComponent>(TEXT("ModularMountsComponent"));
    this->InfrastructureComponent = CreateDefaultSubobject<UInfrastructureComponent>(TEXT("InfrastructureComponent"));
    this->bProvidesBasedShelter = true;
    this->bHasMeshVisibilityComponent = true;
    this->bCanBlockAIUpgrade = true;
    this->bDisallowForwardUpgradeInIsland = true;
}


