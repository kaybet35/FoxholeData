#ifndef UE4SS_SDK_BPLargeFieldGunBaseC_HPP
#define UE4SS_SDK_BPLargeFieldGunBaseC_HPP

class ABPLargeFieldGunBaseC_C : public AFieldMachineGun
{
    class UTowHitchUseComponent* TowHitchUse;                                         // 0x12E0 (size: 0x8)
    class UVehicleSeatComponent* GunnerSeat1;                                         // 0x12E8 (size: 0x8)
    class UCameraComponent* Camera;                                                   // 0x12F0 (size: 0x8)
    class USeatExitComponent* GunnerExit;                                             // 0x12F8 (size: 0x8)
    class USeatTriggerComponent* GunnerTrigger;                                       // 0x1300 (size: 0x8)
    class USeatExitComponent* DriverExit;                                             // 0x1308 (size: 0x8)
    class USeatTriggerComponent* DriverTrigger;                                       // 0x1310 (size: 0x8)
    class UVehicleSeatComponent* DriverSeat0;                                         // 0x1318 (size: 0x8)
    class USkeletalMeshComponent* chassis;                                            // 0x1320 (size: 0x8)

}; // Size: 0x1328

#endif
