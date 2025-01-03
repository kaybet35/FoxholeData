#include "AFKTimeoutComponent.h"

UAFKTimeoutComponent::UAFKTimeoutComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->TimeUntilTimeoutHours = 72.00f;
}


