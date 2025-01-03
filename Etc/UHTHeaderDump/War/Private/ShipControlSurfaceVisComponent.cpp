#include "ShipControlSurfaceVisComponent.h"

UShipControlSurfaceVisComponent::UShipControlSurfaceVisComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bIsEditorOnly = true;
    this->bHiddenInGame = true;
    this->bVisibleInReflectionCaptures = false;
    this->bVisibleInRayTracing = false;
    this->AlwaysLoadOnClient = false;
}


