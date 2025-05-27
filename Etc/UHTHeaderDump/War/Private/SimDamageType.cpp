#include "SimDamageType.h"

USimDamageType::USimDamageType() {
    this->Type = EDamageType::None;
    this->bAppliesBurning = false;
    this->bCanRuinStructures = false;
    this->bApplyDamageFalloff = false;
    this->bAlwaysAppliesBleeding = false;
    this->bNeverAppliesBleeding = false;
    this->bBypassesSpawnInvulnerability = false;
    this->bDisableVehicleCollisionsIfKilledBy = false;
    this->bCanCauseLeaks = true;
    this->bCanPenetrateArmour = true;
    this->bCanDisableSubsystems = true;
    this->bSuppressionAffectsVehicles = false;
    this->LeakChanceMultiplier = 0.00f;
    this->LeakSizeMultiplier = 1.00f;
    this->bCausesLargeLeaks = false;
    this->TankArmourPenetrationFactor = 1.00f;
    this->TankArmourEffectType = ETankArmourEffectType::None;
    this->VehicleSubsystemOverride = EVehicleSubsystem::None;
    this->VehicleSubsystemDisableMultipliers[0] = 1.00f;
    this->VehicleSubsystemDisableMultipliers[1] = 1.00f;
    this->VehicleSubsystemDisableMultipliers[2] = 1.00f;
    this->VehicleSubsystemDisableMultipliers[3] = 1.00f;
    this->VehicleSubsystemDisableMultipliers[4] = 1.00f;
    this->VehicleSubsystemDisableMultipliers[5] = 1.00f;
    this->VehicleSubsystemDisableMultipliers[6] = 1.00f;
    this->bCanWoundCharacter = false;
    this->bApplyTankArmourMechanics = false;
    this->bApplyTankArmourAngleRangeBonuses = true;
    this->bExposeInUI = false;
    this->bBreachesBunkers = false;
    this->bAffectedByShelterBonus = false;
    this->bIgnoreBreachesBunkersThreshold = false;
}


