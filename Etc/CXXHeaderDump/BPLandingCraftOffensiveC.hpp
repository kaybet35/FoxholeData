#ifndef UE4SS_SDK_BPLandingCraftOffensiveC_HPP
#define UE4SS_SDK_BPLandingCraftOffensiveC_HPP

class ABPLandingCraftOffensiveC_C : public ABPLandingCraftBaseC_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x1360 (size: 0x8)
    class UVehicleSeatComponent* GunnerSeat2;                                         // 0x1368 (size: 0x8)
    class USeatExitComponent* GunnerExit;                                             // 0x1370 (size: 0x8)
    class USeatTriggerComponent* GunnerTrigger;                                       // 0x1378 (size: 0x8)
    class USkeletalMeshComponent* GunnerMounting;                                     // 0x1380 (size: 0x8)

    void BPOnVehicleOn(bool IsOn);
    void ExecuteUbergraph_BPLandingCraftOffensiveC(int32 EntryPoint);
}; // Size: 0x1388

#endif
