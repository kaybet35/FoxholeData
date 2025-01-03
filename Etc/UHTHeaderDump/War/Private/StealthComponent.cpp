#include "StealthComponent.h"

UStealthComponent::UStealthComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MinimumViewableDistanceOverride = 0.00f;
    this->bSkipIncomingLoSCheck = false;
    this->bUseViewerLocationAsViewLocation = false;
}


