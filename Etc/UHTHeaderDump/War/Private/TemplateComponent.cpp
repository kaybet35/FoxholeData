#include "TemplateComponent.h"

UTemplateComponent::UTemplateComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->TemplateActor = NULL;
    this->bOnlyCollisions = false;
    this->bUnidirectionalSockets = false;
    this->OnlyIncludeOn = NULL;
}


