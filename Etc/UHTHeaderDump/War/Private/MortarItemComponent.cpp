#include "MortarItemComponent.h"
#include "EEquippedWeaponGripType.h"

UMortarItemComponent::UMortarItemComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoActivate = true;
    this->EquippedGripType = EEquippedWeaponGripType::Mortar;
    this->SkeletalMesh = NULL;
    this->MuzzleFlashPS = NULL;
    this->TelegraphDelay = 0.80f;
    this->MortarFlightTime = 5.00f;
    this->MinDistance = 1500.00f;
    this->MaxDistance = 5000.00f;
}

void UMortarItemComponent::ServerFire_Implementation(float Distance, FActivityStateChange ActivityStateChange) {
}
bool UMortarItemComponent::ServerFire_Validate(float Distance, FActivityStateChange ActivityStateChange) {
    return true;
}

void UMortarItemComponent::MulticastPlayFiringFX_Implementation(const AExplosiveAmmoPickup* AmmoPickup) {
}

void UMortarItemComponent::ClientDrawDamageDebug_Implementation(FVector HitLocation, float Radius) {
}


