#ifndef UE4SS_SDK_ArchVisCharacter_HPP
#define UE4SS_SDK_ArchVisCharacter_HPP

class AArchVisCharacter : public ACharacter
{
    FString LookUpAxisName;                                                           // 0x0638 (size: 0x10)
    FString LookUpAtRateAxisName;                                                     // 0x0648 (size: 0x10)
    FString TurnAxisName;                                                             // 0x0658 (size: 0x10)
    FString TurnAtRateAxisName;                                                       // 0x0668 (size: 0x10)
    FString MoveForwardAxisName;                                                      // 0x0678 (size: 0x10)
    FString MoveRightAxisName;                                                        // 0x0688 (size: 0x10)
    float MouseSensitivityScale_Pitch;                                                // 0x0698 (size: 0x4)
    float MouseSensitivityScale_Yaw;                                                  // 0x069C (size: 0x4)

}; // Size: 0x6A0

class UArchVisCharMovementComponent : public UCharacterMovementComponent
{
    FRotator RotationalAcceleration;                                                  // 0x06D0 (size: 0xC)
    FRotator RotationalDeceleration;                                                  // 0x06DC (size: 0xC)
    FRotator MaxRotationalVelocity;                                                   // 0x06E8 (size: 0xC)
    float MinPitch;                                                                   // 0x06F4 (size: 0x4)
    float MaxPitch;                                                                   // 0x06F8 (size: 0x4)
    float WalkingFriction;                                                            // 0x06FC (size: 0x4)
    float WalkingSpeed;                                                               // 0x0700 (size: 0x4)
    float WalkingAcceleration;                                                        // 0x0704 (size: 0x4)

}; // Size: 0x720

#endif
