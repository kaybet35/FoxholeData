#include "WarOpsVehicle.h"

FWarOpsVehicle::FWarOpsVehicle() {
    this->FactionVariant = EFactionId::Colonials;
    this->TechID = ETechID::None;
    this->bCanBePrototyped = false;
}

