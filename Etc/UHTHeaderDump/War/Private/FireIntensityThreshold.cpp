#include "FireIntensityThreshold.h"

FFireIntensityThreshold::FFireIntensityThreshold() {
    this->Intensity = EFireIntensity::None;
    this->DamageThreshold = 0.00f;
    this->FlamesPerSquareMeter = 0.00f;
    this->CharacterBurn = 0.00f;
    this->FireDamageBaseGainRate = 0.00f;
    this->FireDamageBaseDecayRate = 0.00f;
}

