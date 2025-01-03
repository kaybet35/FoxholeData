#include "TowHitchUseComponent.h"

UTowHitchUseComponent::UTowHitchUseComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bIsTractor = false;
    this->CollisionBuffer = 0.00f;
    this->HitchCue = NULL;
    this->UnhitchCue = NULL;
}


