#include "MagicLeapImageTrackerComponent.h"

UMagicLeapImageTrackerComponent::UMagicLeapImageTrackerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoActivate = true;
    this->TargetImageTexture = NULL;
    this->LongerDimension = 0.00f;
    this->bIsStationary = false;
    this->bUseUnreliablePose = false;
}

bool UMagicLeapImageTrackerComponent::SetTargetAsync(UTexture2D* ImageTarget) {
    return false;
}

bool UMagicLeapImageTrackerComponent::RemoveTargetAsync() {
    return false;
}


