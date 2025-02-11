#include "SubmarineAnimInstance.h"

USubmarineAnimInstance::USubmarineAnimInstance() {
    this->HatchState = EDynamicState::Closed;
    this->LeftTorpedoTubeState = EDynamicState::Closed;
    this->RightTorpedoTubeState = EDynamicState::Closed;
    this->DivePlaneAngle = 0.00f;
    this->MainBallastPlayRate = 0.00f;
    this->NegativeBallastPlayRate = 0.00f;
    this->SafteyBallastPlayRate = 0.00f;
}


