#include "BuildArmAnimInstance.h"

UBuildArmAnimInstance::UBuildArmAnimInstance() {
    this->BuildSoundCue = NULL;
    this->Type = EBuildArmType::Default;
    this->HorizontalArmSpeed = 200.00f;
    this->RotationZSpeed = 10.00f;
    this->SideDistanceSpeed = 100.00f;
    this->PulleySpeed = 400.00f;
    this->MinHorizontalDistance = 500.00f;
    this->MaxHorizontalDistance = 855.00f;
    this->MaxSideDistanceOffset = 0.00f;
    this->MaxYawOffset = 30.00f;
    this->WaitTime = 1.50f;
    this->HorizontalDistanceToTarget = 0.00f;
    this->PulleyLength = 0.00f;
    this->Yaw = 0.00f;
    this->SideDistance = 0.00f;
}


