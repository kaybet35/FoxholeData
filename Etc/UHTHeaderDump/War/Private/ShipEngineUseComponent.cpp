#include "ShipEngineUseComponent.h"

UShipEngineUseComponent::UShipEngineUseComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bIsMovement = true;
    this->bRequiresWrench = true;
}


