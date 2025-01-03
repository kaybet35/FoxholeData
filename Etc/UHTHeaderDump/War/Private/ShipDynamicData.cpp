#include "ShipDynamicData.h"

FShipDynamicData::FShipDynamicData() {
    this->SecondsToMaxRPM = 0.00f;
    this->MaxPropellerRPM = 0.00f;
    this->MaxRudderAngle = 0.00f;
    this->RudderTurnRate = 0.00f;
    this->Fp = 0.00f;
    this->Fs = 0.00f;
    this->DragReferenceSpeed = 0.00f;
    this->Cpd1 = 0.00f;
    this->Cpd2 = 0.00f;
    this->Csd1 = 0.00f;
    this->Csd2 = 0.00f;
    this->SlammingPower = 0.00f;
    this->GammaMax = 0.00f;
    this->Cad = 0.00f;
    this->RudderLength = 0.00f;
    this->RudderDepth = 0.00f;
    this->ThrustVectoringPercent = 0.00f;
    this->MaxDivePlaneAngle = 0.00f;
    this->DivePlaneTurnRate = 0.00f;
    this->VerticalThrustVectoringPercent = 0.00f;
    this->BallastFloodRate = 0.00f;
    this->BallastBlowRate = 0.00f;
    this->FullyFloodedEngineForceMultiplier = 0.00f;
    this->BeachedEngineForceMultiplier = 0.00f;
}

