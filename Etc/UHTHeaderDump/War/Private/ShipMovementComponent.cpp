#include "ShipMovementComponent.h"

UShipMovementComponent::UShipMovementComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ThrustCurve = NULL;
    this->SubmergedThrustCurve = NULL;
}


