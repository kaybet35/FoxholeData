#include "PlayerCameraRigComponent.h"

UPlayerCameraRigComponent::UPlayerCameraRigComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoActivate = true;
    this->bAbsoluteRotation = true;
    this->TargetArmLength = 2000.00f;
    this->bEnableCameraLag = false;
    this->MaxDistanceForCameraLerp = 0.00f;
}


