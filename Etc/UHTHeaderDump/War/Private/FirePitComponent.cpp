#include "FirePitComponent.h"

UFirePitComponent::UFirePitComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->TemperatureModifierSphereComponent = NULL;
    this->TemperatureModifierBoxComponent = NULL;
    this->FireMesh = NULL;
    this->Fire1ParticleSystem = NULL;
    this->Fire2ParticleSystem = NULL;
    this->Fire3ParticleSystem = NULL;
    this->FireSFXLoop = NULL;
    this->DieselConsumptionRate = 0.00f;
}


