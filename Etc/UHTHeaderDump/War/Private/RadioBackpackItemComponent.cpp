#include "RadioBackpackItemComponent.h"

URadioBackpackItemComponent::URadioBackpackItemComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DetectionCooldown = 10.00f;
    this->DetectionRadius = 2000.00f;
}


