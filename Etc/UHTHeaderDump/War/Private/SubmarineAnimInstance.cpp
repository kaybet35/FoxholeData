#include "SubmarineAnimInstance.h"

USubmarineAnimInstance::USubmarineAnimInstance() {
    this->HatchState = EDynamicState::Closed;
    this->LeftTorpedoTubeState = EDynamicState::Closed;
    this->RightTorpedoTubeState = EDynamicState::Closed;
    this->DivePlaneAngle = 0.00f;
}


