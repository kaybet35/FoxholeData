#include "QuadrilateralCoverComponent.h"

UQuadrilateralCoverComponent::UQuadrilateralCoverComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->EndOffset = 0.00f;
    this->SideOffset = 0.00f;
    this->bUseMaxZ = true;
}


