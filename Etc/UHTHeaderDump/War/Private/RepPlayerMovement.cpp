#include "RepPlayerMovement.h"

FRepPlayerMovement::FRepPlayerMovement() {
    this->MovementBase = NULL;
    this->bServerHasBaseComponent = false;
    this->MovementMode = 0;
    this->LocationQuantizationLevel = EVectorQuantization::RoundWholeNumber;
    this->VelocityQuantizationLevel = EVectorQuantization::RoundWholeNumber;
    this->RotationQuantizationLevel = ERotatorQuantization::ByteComponents;
}

