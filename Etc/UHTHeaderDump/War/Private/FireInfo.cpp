#include "FireInfo.h"

AFireInfo::AFireInfo(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MaxPreMitigationFireDamagePerTick = 0.00f;
    this->TickPeriodSeconds = 0.00f;
    this->WeatherIntensityEffectMultiplier = 0.00f;
    this->CharacterOnFireDamage = 0.00f;
    this->BurningSpreadWindScale = 1.00f;
    this->BurningBuildingHeatRange = 0.00f;
    this->FlameActor = NULL;
    this->BuildingsDamagingPlayersDamageType = NULL;
    this->BuildingsFireSpreadDamageType = NULL;
    this->BurningSelfDamageType = NULL;
    this->WaterFireLoopSFX = NULL;
    this->WaterFireTailSFX = NULL;
    this->WaterFireVFX = NULL;
}


