#include "MountComponent.h"
#include "Net/UnrealNetwork.h"

UMountComponent::UMountComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AmmoSlotFilterAmount = 0;
    this->ReloadSoundCue = NULL;
    this->Icon = NULL;
    this->EquippedGripType = EEquippedWeaponGripType::None;
    this->bUseSingleItemSlotFilter = false;
    this->bMustBeStoppedToInvoke = false;
    this->bUseCharacterRotationForAim = false;
    this->bIsStationary = false;
    this->bUpdateCharacterRotation = true;
    this->LinkedVehicleSubsystem = EVehicleSubsystem::None;
    this->CachedAmmoPickupCDO = NULL;
    this->bIsMultiWeapon = false;
    this->bIsDeployedGunner = false;
    this->bTriggerDriverFiringState = false;
    this->CameraLerpModifierOverride = 1.00f;
    this->MountIndex = -1;
    this->bIsEquipped = true;
}

void UMountComponent::OnRep_MountIndex() {
}

void UMountComponent::OnRep_IsEquipped() {
}

void UMountComponent::ClientSyncAmmo_Implementation(int32 CurrentAmmo) {
}

void UMountComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UMountComponent, MountIndex);
    DOREPLIFETIME(UMountComponent, bIsEquipped);
}


