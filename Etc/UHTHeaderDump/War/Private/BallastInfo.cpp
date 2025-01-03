#include "BallastInfo.h"

FBallastInfo::FBallastInfo() {
    this->Type = EBallastType::Main;
    this->FloodRate = 0.00f;
    this->BlowRate = 0.00f;
    this->BlowRateNoElectricity = 0.00f;
    this->BlowElectricityCost = 0.00f;
    this->FloodedMass = 0.00f;
    this->TargetFloodPercent = 0.00f;
    this->FloodPercent = 0.00f;
}

