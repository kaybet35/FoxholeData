#include "ShovelComponent.h"

UShovelComponent::UShovelComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ImpactEffect = NULL;
}

void UShovelComponent::MulticastPlayFX_Implementation() {
}


