#include "ExplosiveItemComponent.h"
#include "EEquippedWeaponGripType.h"
#include "Net/UnrealNetwork.h"

UExplosiveItemComponent::UExplosiveItemComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    this->bAutoActivate = true;
    this->EquippedGripType = EEquippedWeaponGripType::Pistol;
    this->DeployDuration = 0.00f;
    this->ExplosiveClass = NULL;
    this->DeploySound = NULL;
    this->ShouldShowDetonationMessage = true;
    this->bPreventBorderPlacement = false;
    this->ShouldDoLandscapeCheck = false;
    this->bIsEquipped = false;
}

void UExplosiveItemComponent::ServerStartInvoke_Implementation(FActivityStateChange ActivityStateChange) {
}
bool UExplosiveItemComponent::ServerStartInvoke_Validate(FActivityStateChange ActivityStateChange) {
    return true;
}

void UExplosiveItemComponent::OnRep_IsEquipped() {
}

void UExplosiveItemComponent::MulticastPlayDeploySFX_Implementation() {
}

void UExplosiveItemComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UExplosiveItemComponent, bIsEquipped);
}


