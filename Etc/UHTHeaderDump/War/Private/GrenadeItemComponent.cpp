#include "GrenadeItemComponent.h"
#include "EEquippedWeaponGripType.h"
#include "Net/UnrealNetwork.h"

UGrenadeItemComponent::UGrenadeItemComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    this->bAutoActivate = true;
    this->EquippedGripType = EEquippedWeaponGripType::Pistol;
    this->PostTossDelay = 1.00f;
    this->AimLineThickness = 0.25f;
    this->bCanCook = true;
    this->PinPullSound = NULL;
    this->bIsEquipped = false;
}

void UGrenadeItemComponent::ServerThrowGrenade_Implementation(const FCharacterInvokeInfo WeaponInvokeInfo, float SecondsOnFuse, FActivityStateChange ActivityStateChange, const FVector& Target) {
}

void UGrenadeItemComponent::ServerPullPin_Implementation(FActivityStateChange ActivityStateChange) {
}

void UGrenadeItemComponent::ServerOnFuseExpired_Implementation(const FCharacterInvokeInfo WeaponInvokeInfo, const FVector& Target) {
}

void UGrenadeItemComponent::OnRep_IsEquipped() {
}

void UGrenadeItemComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UGrenadeItemComponent, bIsEquipped);
}


