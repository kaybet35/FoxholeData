#include "HatchComponent.h"

UHatchComponent::UHatchComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bIsExternal = false;
    this->bIsEntrance = true;
    this->bIsExit = true;
    this->bUserCantBeBasedOnOwner = false;
    this->bIsPseudoLadder = false;
    this->bTeleportToClosestPoint = false;
}


