#include "TorpedoMovementComponent.h"

UTorpedoMovementComponent::UTorpedoMovementComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MaxHorizontalAccelerationCurve = NULL;
    this->PIDCurve = NULL;
}


