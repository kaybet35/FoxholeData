#include "PayloadParticleSystemComponent.h"

UPayloadParticleSystemComponent::UPayloadParticleSystemComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoActivate = false;
    this->SlotCount = 1;
    this->GroupIndex = 0;
}


