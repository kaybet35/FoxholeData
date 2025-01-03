#include "WoundCausingDamageType.h"
#include "EDamageType.h"

UWoundCausingDamageType::UWoundCausingDamageType() {
    this->Type = EDamageType::LightKinetic;
    this->bCanWoundCharacter = true;
}


