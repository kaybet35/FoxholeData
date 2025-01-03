#include "GroundZeroDamageType.h"
#include "EDamageType.h"
#include "ETankArmourEffectType.h"

UGroundZeroDamageType::UGroundZeroDamageType() {
    this->Type = EDamageType::GroundZero;
    this->bCanRuinStructures = true;
    this->bBypassesSpawnInvulnerability = true;
    this->TankArmourEffectType = ETankArmourEffectType::Large;
}


