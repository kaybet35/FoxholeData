#include "DockComponent.h"

UDockComponent::UDockComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bRequiresDynamicHeightCheck = false;
    this->MaximumAngle = 8.11f;
    this->SurfaceOffset = 0.00f;
    this->bUseComponentForwardVector = false;
}


