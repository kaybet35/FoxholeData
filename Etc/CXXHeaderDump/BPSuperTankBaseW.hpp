#ifndef UE4SS_SDK_BPSuperTankBaseW_HPP
#define UE4SS_SDK_BPSuperTankBaseW_HPP

class ABPSuperTankBaseW_C : public ABPSuperTankBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x13F8 (size: 0x8)
    class USkeletalMeshComponent* chassis;                                            // 0x1400 (size: 0x8)
    class UParticleSystemComponent* ExhaustR;                                         // 0x1408 (size: 0x8)
    class USeatExitComponent* Gunner2Exit;                                            // 0x1410 (size: 0x8)
    class USeatTriggerComponent* Gunner2Trigger;                                      // 0x1418 (size: 0x8)
    class UVehicleSeatComponent* GunnerSeat2;                                         // 0x1420 (size: 0x8)

    void BPOnVehicleOn(bool IsOn);
    void ExecuteUbergraph_BPSuperTankBaseW(int32 EntryPoint);
}; // Size: 0x1428

#endif
