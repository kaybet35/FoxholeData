#include "RotatorMountComponent.h"

URotatorMountComponent::URotatorMountComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PlayersRequiredToRotate = 1;
}

void URotatorMountComponent::ServerOnMoveRight_Implementation(float Val) {
}
bool URotatorMountComponent::ServerOnMoveRight_Validate(float Val) {
    return true;
}


