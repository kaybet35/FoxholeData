#include "StructureProfileData.h"

FStructureProfileData::FStructureProfileData() {
    this->bHasDynamicStartingCondition = false;
    this->bIsRepairable = false;
    this->bIsUpgradeRotationAllowed = false;
    this->bIsUsableFromVehicle = false;
    this->bAllowUpgradeWhenDamaged = false;
    this->bCanOverlapNonBlockingFoliage = false;
    this->bDisallowAdjacentUpgradesInIsland = false;
    this->bIncludeInStructureIslands = false;
    this->bCanDecayBePrevented = false;
    this->VerticalEjectionDistance = 0.00f;
    this->bEnableStealth = false;
    this->bIsRuinable = false;
    this->bBypassesRapidDecayForNearbyStructures = false;
    this->bUsesImpactsMaterial = false;
    this->bIsBurnable = false;
}

