#include "LargeShipAnimInstance.h"

ULargeShipAnimInstance::ULargeShipAnimInstance() {
    this->AnchorState = EAnchorState::Raised;
    this->DockedState = EDockedState::Undocked;
    this->RampExtension = 1.00f;
    this->RampAngle = 0.00f;
    this->bIsRampOpen = false;
    this->AltGunner05Yaw = 0.00f;
    this->AltGunner05Pitch = 0.00f;
    this->AltGunner06Yaw = 0.00f;
    this->AltGunner06Pitch = 0.00f;
    this->AltGunner07Yaw = 0.00f;
    this->AltGunner07Pitch = 0.00f;
    this->AltGunner08Yaw = 0.00f;
    this->AltGunner08Pitch = 0.00f;
    this->AltGunner09Yaw = 0.00f;
    this->AltGunner09Pitch = 0.00f;
    this->AltGunner10Yaw = 0.00f;
    this->AltGunner10Pitch = 0.00f;
    this->AltGunner11Yaw = 0.00f;
    this->AltGunner11Pitch = 0.00f;
    this->AltGunner12Yaw = 0.00f;
    this->AltGunner12Pitch = 0.00f;
    this->bIsAlt05Firing = false;
    this->bIsAlt06Firing = false;
    this->bIsAlt07Firing = false;
    this->bIsAlt08Firing = false;
    this->bIsAlt09Firing = false;
    this->bIsAlt10Firing = false;
    this->bIsAlt11Firing = false;
    this->bIsAlt12Firing = false;
    this->bIsAltGunner05Reloading = false;
    this->bIsAltGunner06Reloading = false;
    this->bIsAltGunner07Reloading = false;
    this->bIsAltGunner08Reloading = false;
    this->bIsAltGunner09Reloading = false;
    this->bIsAltGunner10Reloading = false;
    this->bIsAltGunner11Reloading = false;
    this->bIsAltGunner12Reloading = false;
    this->bIsAltGunner05Working = false;
    this->bIsAltGunner06Working = false;
    this->bIsAltGunner07Working = false;
    this->bIsAltGunner08Working = false;
    this->bIsAltGunner09Working = false;
    this->bIsAltGunner10Working = false;
    this->bIsAltGunner11Working = false;
    this->bIsAltGunner12Working = false;
    this->NormalizedRPM0 = 0.00f;
    this->NormalizedRPM1 = 0.00f;
    this->bIsThrustReversed0 = false;
    this->bIsThrustReversed1 = false;
}

void ULargeShipAnimInstance::AnimNotify_OnAlt12FiringOver(const UAnimNotify* Notify) {
}

void ULargeShipAnimInstance::AnimNotify_OnAlt11FiringOver(const UAnimNotify* Notify) {
}

void ULargeShipAnimInstance::AnimNotify_OnAlt10FiringOver(const UAnimNotify* Notify) {
}

void ULargeShipAnimInstance::AnimNotify_OnAlt09FiringOver(const UAnimNotify* Notify) {
}

void ULargeShipAnimInstance::AnimNotify_OnAlt08FiringOver(const UAnimNotify* Notify) {
}

void ULargeShipAnimInstance::AnimNotify_OnAlt07FiringOver(const UAnimNotify* Notify) {
}

void ULargeShipAnimInstance::AnimNotify_OnAlt06FiringOver(const UAnimNotify* Notify) {
}

void ULargeShipAnimInstance::AnimNotify_OnAlt05FiringOver(const UAnimNotify* Notify) {
}


