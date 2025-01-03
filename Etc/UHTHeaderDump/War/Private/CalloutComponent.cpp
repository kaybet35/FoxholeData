#include "CalloutComponent.h"

UCalloutComponent::UCalloutComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Cooldown = 10.00f;
    this->CalloutMarkerGhostClass = NULL;
    this->CalloutMarkerClass = NULL;
}


