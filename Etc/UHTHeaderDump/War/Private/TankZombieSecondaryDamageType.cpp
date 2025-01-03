#include "TankZombieSecondaryDamageType.h"
#include "EDamageType.h"
#include "EVehicleSubsystem.h"

UTankZombieSecondaryDamageType::UTankZombieSecondaryDamageType() {
    this->Type = EDamageType::TankZombie;
    this->VehicleSubsystemOverride = EVehicleSubsystem::Track;
}


