#include "ShipRammingDamageType.h"
#include "EDamageType.h"

UShipRammingDamageType::UShipRammingDamageType() {
    this->Type = EDamageType::Environment;
    this->bDisableVehicleCollisionsIfKilledBy = true;
}


