#include "MeleeWeaponComponent.h"
#include "Net/UnrealNetwork.h"

UMeleeWeaponComponent::UMeleeWeaponComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    this->bAutoActivate = true;
    this->ChargeUpTime = 0.75f;
    this->QuickClickTime = 0.35f;
    this->bIsBlocking = false;
    this->bIsSustainingCharge = false;
    this->bIsEquipped = false;
    this->QuickAttackSound = NULL;
    this->LongAttackSound = NULL;
    this->ChargedSound = NULL;
    this->DefaultImpactEffectClass = NULL;
    this->ChargedImpactEffectClass = NULL;
    this->BlockedImpactEffectClass = NULL;
}

void UMeleeWeaponComponent::ServerStopInvoke_Implementation() {
}
bool UMeleeWeaponComponent::ServerStopInvoke_Validate() {
    return true;
}

void UMeleeWeaponComponent::ServerStopCharging_Implementation() {
}
bool UMeleeWeaponComponent::ServerStopCharging_Validate() {
    return true;
}

void UMeleeWeaponComponent::ServerStartInvoke_Implementation() {
}
bool UMeleeWeaponComponent::ServerStartInvoke_Validate() {
    return true;
}

void UMeleeWeaponComponent::ServerStartCharging_Implementation(FActivityStateChange ActivityStateChange) {
}
bool UMeleeWeaponComponent::ServerStartCharging_Validate(FActivityStateChange ActivityStateChange) {
    return true;
}

void UMeleeWeaponComponent::ServerSimulateQuickAttack_Implementation(FActivityStateChange ActivityStateChange) {
}
bool UMeleeWeaponComponent::ServerSimulateQuickAttack_Validate(FActivityStateChange ActivityStateChange) {
    return true;
}

void UMeleeWeaponComponent::ServerSimulateLongAttack_Implementation(FActivityStateChange ActivityStateChange) {
}
bool UMeleeWeaponComponent::ServerSimulateLongAttack_Validate(FActivityStateChange ActivityStateChange) {
    return true;
}

void UMeleeWeaponComponent::ServerSetIsBlocking_Implementation(const bool bInIsblocking) {
}
bool UMeleeWeaponComponent::ServerSetIsBlocking_Validate(const bool bInIsblocking) {
    return true;
}

void UMeleeWeaponComponent::OnRep_IsEquipped() {
}

void UMeleeWeaponComponent::MulticastSpawnImpactEffects_Implementation(FHitNotify SimulatedHitNotify, const bool bWasBlocked, const bool bWasCharged) {
}

void UMeleeWeaponComponent::ClientSetIsBlocking_Implementation(const bool bInIsblocking) {
}

void UMeleeWeaponComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UMeleeWeaponComponent, bIsBlocking);
    DOREPLIFETIME(UMeleeWeaponComponent, bIsSustainingCharge);
    DOREPLIFETIME(UMeleeWeaponComponent, bIsEquipped);
}


