#include "EmplacedWeaponAnimInstance.h"

UEmplacedWeaponAnimInstance::UEmplacedWeaponAnimInstance() {
    this->Yaw = 0.00f;
    this->Pitch = 0.00f;
    this->bIsCranking = false;
    this->bIsShooting = false;
}

void UEmplacedWeaponAnimInstance::OnFiringComplete() {
}

void UEmplacedWeaponAnimInstance::AnimNotify_OnFiringComplete(const UAnimNotify* Notify) {
}


