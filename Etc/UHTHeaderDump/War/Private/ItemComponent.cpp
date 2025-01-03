#include "ItemComponent.h"

UItemComponent::UItemComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->EquippedGripType = EEquippedWeaponGripType::None;
    this->ReloadSoundCue = NULL;
    this->AnimClass = NULL;
    this->MuzzleSocketName = TEXT("S_Muzzle");
    this->SafeItem = false;
    this->AttachedItemMesh = NULL;
    this->GroundItemMesh = NULL;
    this->GroundItemActivityState = ECharacterActivityState::Idle;
    this->bRequiresCoverOrLowStanceToInvoke = false;
    this->bAllowsMovementDuringReload = true;
}

void UItemComponent::ClientSyncAmmo_Implementation(int32 CurrentAmmo) {
}


