#include "AnchorComponent.h"

UAnchorComponent::UAnchorComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RaisingSoundCue = NULL;
    this->DroppingSoundCue = NULL;
    this->RaisedAnchorMeshComponent = NULL;
    this->DroppedAnchorMeshComponent = NULL;
    this->SoundComponent = NULL;
}


