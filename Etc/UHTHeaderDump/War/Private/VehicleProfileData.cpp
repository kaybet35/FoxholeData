#include "VehicleProfileData.h"

FVehicleProfileData::FVehicleProfileData() {
    this->bUsesRollTrace = false;
    this->bCanTriggerMine = false;
    this->bCanTriggerInfantryMine = false;
    this->RamDamageDealtFlags = 0;
    this->bUsesGas = false;
    this->DrivingSpeedThreshold = 0.00f;
    this->MaxVehicleAngle = 0.00f;
    this->bEnableStealth = false;
    this->DamageDrivingOverStructures = 0.00f;
    this->DamageDrivingOverIce = 0.00f;
    this->bIsAllowedToLoadMultiple = false;
}

