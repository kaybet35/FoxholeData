#include "FortTurret.h"
#include "EStructureNetRelevancySize.h"
#include "EStructureProfileType.h"
#include "ModularMountsComponent.h"

AFortTurret::AFortTurret(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ProfileType = EStructureProfileType::FortUpgrade;
    this->ModularMountsComponent = CreateDefaultSubobject<UModularMountsComponent>(TEXT("ModularMountsComponent"));
    this->StructureNetRelevancySize = EStructureNetRelevancySize::Medium;
    this->bProvidesBasedShelter = true;
    this->bHasMeshVisibilityComponent = true;
    this->bCanBlockAIUpgrade = true;
}


