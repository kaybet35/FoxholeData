#include "LongRangeArtilleryMountComponent.h"
#include "Net/UnrealNetwork.h"

ULongRangeArtilleryMountComponent::ULongRangeArtilleryMountComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DisplayName = FText::FromString(TEXT("Artillery"));
    this->ExtendedMaxDistance = 0.00f;
    this->Ammo = 0;
    this->bCanDeploySelf = false;
}

void ULongRangeArtilleryMountComponent::ServerSetDesiredPitch_Implementation(const float Pitch) {
}
bool ULongRangeArtilleryMountComponent::ServerSetDesiredPitch_Validate(const float Pitch) {
    return true;
}

void ULongRangeArtilleryMountComponent::ServerFireShell_Implementation(FActivityStateChange ActivityStateChange) {
}
bool ULongRangeArtilleryMountComponent::ServerFireShell_Validate(FActivityStateChange ActivityStateChange) {
    return true;
}

void ULongRangeArtilleryMountComponent::ServerDeploySelf_Implementation() {
}
bool ULongRangeArtilleryMountComponent::ServerDeploySelf_Validate() {
    return true;
}

void ULongRangeArtilleryMountComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ULongRangeArtilleryMountComponent, Ammo);
}


