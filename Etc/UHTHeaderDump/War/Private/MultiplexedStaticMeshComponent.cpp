#include "MultiplexedStaticMeshComponent.h"

UMultiplexedStaticMeshComponent::UMultiplexedStaticMeshComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->InputValue = 0;
    this->SelectedMeshIndex = 255;
    this->TransitionDownFX = NULL;
    this->TransitionUpSoundCue = NULL;
    this->Enabled = true;
}

void UMultiplexedStaticMeshComponent::SetEnabled(bool IsEnabled) {
}


