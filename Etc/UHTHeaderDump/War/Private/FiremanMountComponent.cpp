#include "FiremanMountComponent.h"

UFiremanMountComponent::UFiremanMountComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DisplayName = FText::FromString(TEXT("Fireman"));
    this->CoalPerBoost = 3;
}

void UFiremanMountComponent::ServerBoost_Implementation(FActivityStateChange ActivityStateChange) {
}
bool UFiremanMountComponent::ServerBoost_Validate(FActivityStateChange ActivityStateChange) {
    return true;
}

void UFiremanMountComponent::MulticastBoostFX_Implementation() {
}


