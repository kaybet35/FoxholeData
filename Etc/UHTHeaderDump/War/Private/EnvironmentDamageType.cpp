#include "EnvironmentDamageType.h"
#include "EDamageType.h"

UEnvironmentDamageType::UEnvironmentDamageType() {
    this->Type = EDamageType::Environment;
    this->bBypassesSpawnInvulnerability = true;
}


