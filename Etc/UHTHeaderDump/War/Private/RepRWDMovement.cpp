#include "RepRWDMovement.h"

FRepRWDMovement::FRepRWDMovement() {
    this->LastUpdateClientTimeStamp = 0.00f;
    this->ForwardInput = 0.00f;
    this->SteeringInput = 0.00f;
    this->bHandbrakeActivated = false;
    this->bBoostActivated = false;
    this->bIsInManualLowGear = false;
    this->SteeringAngle = 0.00f;
    this->bHasTractor = false;
    this->bHasTrailer = false;
    this->bIsForcedUpdate = false;
}

