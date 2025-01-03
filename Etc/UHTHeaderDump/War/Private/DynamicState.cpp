#include "DynamicState.h"

FDynamicState::FDynamicState() {
    this->OpenAnimationDuration = 0.00f;
    this->ClosedAnimationDuration = 0.00f;
    this->State = EDynamicState::Closed;
}

