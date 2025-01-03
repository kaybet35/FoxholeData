#include "RWDVehicleMovementComponent.h"

URWDVehicleMovementComponent::URWDVehicleMovementComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysCheckFloor = false;
    this->CenterOfGravityHeight = 0.50f;
    this->EngineForce = 0.00f;
    this->BrakeForce = 0.00f;
    this->HandbrakeForce = 0.00f;
    this->AirResistance = 20.00f;
    this->RollingResistance = 220.00f;
    this->TowingResistance = 0.00f;
    this->MaxEncumbranceMass = 0.00f;
    this->MassPerMuddynessOverride = 0.00f;
    this->bUseLegacyLateralCalc = true;
    this->TractorTowingResistanceModifier = 1.00f;
    this->TowingEngineForceMultiplier = 1.00f;
    this->Tractor = NULL;
    this->Trailer = NULL;
}


