#include "DamageAttributes.h"

FDamageAttributes::FDamageAttributes() {
    this->WeaponFireFXClass = NULL;
    this->ImpactEffect = NULL;
    this->ExplosionEffect = NULL;
    this->DamageType = NULL;
    this->ShotSoundCue = NULL;
    this->MuzzleFlashPS = NULL;
    this->WeaponDamage = 0.00f;
    this->BestJitterConeHalfAngle = 0.00f;
    this->WorstJitterConeHalfAngle = 0.00f;
    this->FiringPeriod = 0.00f;
    this->TimeToFullFireRateAndAccuracy = 0.00f;
    this->EnemyPursueDuration = 0.00f;
    this->ArmourDamageModifier = 0.00f;
    this->TargetStabilityReductionPerShot = 0.00f;
}

