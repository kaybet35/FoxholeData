#include "ExplodeOnDeathComponent.h"

UExplodeOnDeathComponent::UExplodeOnDeathComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ExplosionTemplate = NULL;
    this->ExplosionOffsetZ = 0.00f;
}


