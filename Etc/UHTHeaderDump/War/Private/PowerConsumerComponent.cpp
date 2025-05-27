#include "PowerConsumerComponent.h"

UPowerConsumerComponent::UPowerConsumerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->TickRate = 60.00f;
    this->PowerConsumed = 1.00f;
    this->bAutoStart = true;
    this->bConsumeWhenVisibilityLimited = false;
}


