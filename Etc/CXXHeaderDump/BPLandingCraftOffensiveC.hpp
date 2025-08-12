#ifndef UE4SS_SDK_BPLandingCraftOffensiveC_HPP
#define UE4SS_SDK_BPLandingCraftOffensiveC_HPP

class ABPLandingCraftOffensiveC_C : public ABPLandingCraftBaseC_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x1390 (size: 0x8)
    class UVehicleSeatComponent* GunnerSeat2;                                         // 0x1398 (size: 0x8)
    class USeatExitComponent* GunnerExit;                                             // 0x13A0 (size: 0x8)
    class USeatTriggerComponent* GunnerTrigger;                                       // 0x13A8 (size: 0x8)
    class USkeletalMeshComponent* GunnerMounting;                                     // 0x13B0 (size: 0x8)

    void BPOnVehicleOn(bool IsOn);
    void ExecuteUbergraph_BPLandingCraftOffensiveC(int32 EntryPoint);
}; // Size: 0x13B8

#endif
