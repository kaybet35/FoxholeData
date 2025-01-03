#include "AIArtilleryGunTurretComponent.h"

UAIArtilleryGunTurretComponent::UAIArtilleryGunTurretComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bUseWarningShots = true;
    this->WarningShotMinRange = 16000.00f;
    this->WarningShotRadius = 1500.00f;
    this->bUseArtilleryTrace = false;
    this->AccuracyRadius = 0.00f;
}


