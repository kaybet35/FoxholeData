#include "EncumbranceModifiers.h"

FEncumbranceModifiers::FEncumbranceModifiers() {
    this->BaselineEnc = 0;
    this->MaxEnc = 0;
    this->ZeroEncTurnRateMod = 0.00f;
    this->ZeroEncMoveSpeedMod = 0.00f;
    this->MaxEncTurnRateMod = 0.00f;
    this->MaxEncWalkingSpeedMod = 0.00f;
    this->MaxEncSprintingStaminaDrainMod = 0.00f;
    this->MaxEncStaminaRestoreMod = 0.00f;
    this->MaxEncEngineForceModifier = 0.00f;
    this->OverEncWalkingSpeedMod = 0.00f;
    this->OverEncTurnRateMod = 0.00f;
    this->OverEncSprintingStaminaDrainMod = 0.00f;
    this->OverEncStaminaRestoreMod = 0.00f;
    this->CurrentMaxSpeedMod = 0.00f;
    this->CurrentMaxSprintSpeedMod = 0.00f;
    this->CurrentTurnMod = 0.00f;
    this->CurrentSprintingStaminaDrainMod = 0.00f;
    this->CurrentStaminaRestoreMod = 0.00f;
    this->CurrentMassAlpha = 0.00f;
    this->CurrentEngineForceModifier = 0.00f;
}

