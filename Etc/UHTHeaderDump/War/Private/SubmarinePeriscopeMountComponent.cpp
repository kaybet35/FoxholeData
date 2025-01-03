#include "SubmarinePeriscopeMountComponent.h"

USubmarinePeriscopeMountComponent::USubmarinePeriscopeMountComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MaxDepthForVisuals = 300.00f;
    this->CameraArmLengthCurve = NULL;
}


