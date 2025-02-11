#include "MultiFloorVisibilityToggleComponent.h"

UMultiFloorVisibilityToggleComponent::UMultiFloorVisibilityToggleComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->FloorVisibilityBitmask = 0;
}


