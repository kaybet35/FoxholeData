#include "LadderComponent.h"

ULadderComponent::ULadderComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->UpwardsExitZ = 0.00f;
    this->DownwardsExitZ = 0.00f;
    this->bIgnoreOwnerDuringMovement = false;
    this->bGenerateBlockingVolume = false;
    this->BlockingVolume = NULL;
}


