#include "VehicleMovementProfileData.h"

FVehicleMovementProfileData::FVehicleMovementProfileData() {
    this->Mass = 0.00f;
    this->MaxEncumbranceMassOverride = 0.00f;
    this->BrakeForce = 0.00f;
    this->HandbrakeForce = 0.00f;
    this->AirResistance = 0.00f;
    this->RollingResistance = 0.00f;
    this->TowingResistance = 0.00f;
    this->bSupportsManualLowGear = false;
    this->LowSpeedEngineForceMultiplier = 0.00f;
    this->LowGearCutoff = 0.00f;
    this->CenterOfGravityHeight = 0.00f;
    this->FrontGripCurve = NULL;
    this->RearGripCurve = NULL;
    this->EngineForceMultiplierCurve = NULL;
    this->LowGearEngineForceMultiplierCurve = NULL;
    this->bUsesDifferentialSteering = false;
    this->bCanRotateInPlace = false;
    this->MuddynessPerDistanceCurve = NULL;
    this->MuddynessDecayPerDistance = 0.00f;
    this->MuddynessDecayPerDistanceInWater = 0.00f;
    this->EncumbrancePerMuddyness = 0.00f;
    this->MassPerMuddyness = 0.00f;
    this->ExtinguishingDamageMultiplier = 0.00f;
    this->DamageToMuddyness = 0.00f;
}

