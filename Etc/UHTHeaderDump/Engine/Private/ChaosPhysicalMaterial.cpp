#include "ChaosPhysicalMaterial.h"

UChaosPhysicalMaterial::UChaosPhysicalMaterial() {
    this->Friction = 0.50f;
    this->Restitution = 0.10f;
    this->SleepingLinearVelocityThreshold = 1.00f;
    this->SleepingAngularVelocityThreshold = 1.00f;
}


