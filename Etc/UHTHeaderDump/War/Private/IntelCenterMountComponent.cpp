#include "IntelCenterMountComponent.h"

UIntelCenterMountComponent::UIntelCenterMountComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DisplayName = FText::FromString(TEXT("Intel Center"));
}

void UIntelCenterMountComponent::ServerSetDesiredPitch_Implementation(const float Pitch) {
}
bool UIntelCenterMountComponent::ServerSetDesiredPitch_Validate(const float Pitch) {
    return true;
}

void UIntelCenterMountComponent::ServerFireListeningArea_Implementation() {
}
bool UIntelCenterMountComponent::ServerFireListeningArea_Validate() {
    return true;
}


