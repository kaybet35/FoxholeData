#include "UnexplodedOrdnanceDamageType.h"
#include "EDamageType.h"
#include "ETankArmourEffectType.h"

UUnexplodedOrdnanceDamageType::UUnexplodedOrdnanceDamageType() {
    this->Type = EDamageType::Explosive;
    this->TankArmourEffectType = ETankArmourEffectType::Large;
}


