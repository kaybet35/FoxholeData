#include "SimVehicleGunnerSupportAnimInstance.h"

USimVehicleGunnerSupportAnimInstance::USimVehicleGunnerSupportAnimInstance() {
    this->GunnerYaw = 0.00f;
    this->GunnerPitch = 0.00f;
    this->bIsFiring = false;
    this->bIsGunnerFiring = false;
    this->bIsGunnerReloading = false;
    this->bIsGunnerWorking = false;
    this->AltGunnerYaw = 0.00f;
    this->AltGunnerPitch = 0.00f;
    this->bIsAltFiring = false;
    this->bIsAltGunnerFiring = false;
    this->bIsAltGunnerReloading = false;
    this->bIsAltGunnerWorking = false;
    this->AltGunner02Yaw = 0.00f;
    this->AltGunner02Pitch = 0.00f;
    this->bIsAlt02Firing = false;
    this->bIsAltGunner02Firing = false;
    this->bIsAltGunner02Reloading = false;
    this->bIsAltGunner02Working = false;
    this->AltGunner03Yaw = 0.00f;
    this->AltGunner03Pitch = 0.00f;
    this->bIsAlt03Firing = false;
    this->bIsAltGunner03Firing = false;
    this->bIsAltGunner03Reloading = false;
    this->bIsAltGunner03Working = false;
    this->AltGunner04Yaw = 0.00f;
    this->AltGunner04Pitch = 0.00f;
    this->bIsAlt04Firing = false;
    this->bIsAltGunner04Firing = false;
    this->bIsAltGunner04Reloading = false;
    this->bIsAltGunner04Working = false;
}

void USimVehicleGunnerSupportAnimInstance::AnimNotify_OnFiringOver(const UAnimNotify* Notify) {
}

void USimVehicleGunnerSupportAnimInstance::AnimNotify_OnAltFiringOver(const UAnimNotify* Notify) {
}

void USimVehicleGunnerSupportAnimInstance::AnimNotify_OnAlt04FiringOver(const UAnimNotify* Notify) {
}

void USimVehicleGunnerSupportAnimInstance::AnimNotify_OnAlt03FiringOver(const UAnimNotify* Notify) {
}

void USimVehicleGunnerSupportAnimInstance::AnimNotify_OnAlt02FiringOver(const UAnimNotify* Notify) {
}


