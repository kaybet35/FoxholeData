#include "RepShipMovement.h"

FRepShipMovement::FRepShipMovement() {
    this->LastUpdateClientTimeStamp = 0.00f;
    this->ForwardInput = 0.00f;
    this->RudderInput = 0.00f;
    this->RudderAngle = 0.00f;
    this->DivePlaneAngle = 0.00f;
    this->bStabilizerActivated = false;
    this->bIsForcedUpdate = false;
}

