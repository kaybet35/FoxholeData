#include "WaterDamageType.h"
#include "EDamageType.h"

UWaterDamageType::UWaterDamageType() {
    this->bCausedByWorld = true;
    this->Type = EDamageType::Environment;
}


