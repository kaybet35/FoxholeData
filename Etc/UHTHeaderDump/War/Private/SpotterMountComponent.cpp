#include "SpotterMountComponent.h"

USpotterMountComponent::USpotterMountComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DisplayName = FText::FromString(TEXT("Spotter"));
    this->CameraArmLengthOverride = 0.00f;
    this->CameraArmLengthCurve = NULL;
}


