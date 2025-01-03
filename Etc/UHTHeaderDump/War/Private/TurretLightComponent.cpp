#include "TurretLightComponent.h"

UTurretLightComponent::UTurretLightComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RotatedSceneComponent = NULL;
    this->LightComponent = NULL;
}


