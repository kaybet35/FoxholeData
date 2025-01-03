#include "ShipFlagUseComponent.h"

UShipFlagUseComponent::UShipFlagUseComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->FlagIndex = 0;
    this->bIsMovement = false;
    this->bRequiresWrench = false;
    this->WrenchingActivityState = ECharacterActivityState::ShipFlagInteraction;
}


