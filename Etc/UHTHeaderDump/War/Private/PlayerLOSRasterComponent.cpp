#include "PlayerLOSRasterComponent.h"

UPlayerLOSRasterComponent::UPlayerLOSRasterComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CharacterOutlineMaterial = NULL;
    this->VisibilityIndicatorMaterial = NULL;
    this->VisibilityIndicatorMaterialDynamic = NULL;
}


