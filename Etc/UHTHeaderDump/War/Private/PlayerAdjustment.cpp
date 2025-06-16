#include "PlayerAdjustment.h"

FPlayerAdjustment::FPlayerAdjustment() {
    this->NewBase = NULL;
    this->bHasBase = false;
    this->bBaseRelativePosition = false;
    this->bBaseRelativeVelocity = false;
    this->ServerMovementMode = 0;
    this->QuantizedStagger = 0;
}

