#ifndef UE4SS_SDK_BPLightTankDefensiveW_HPP
#define UE4SS_SDK_BPLightTankDefensiveW_HPP

class ABPLightTankDefensiveW_C : public ABPLightTankBaseW_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x13C0 (size: 0x8)
    class UVehicleSeatComponent* GunnerSeat1;                                         // 0x13C8 (size: 0x8)
    class USkeletalMeshComponent* mainBody;                                           // 0x13D0 (size: 0x8)

    void BPOnVehicleOn(bool IsOn);
    void ExecuteUbergraph_BPLightTankDefensiveW(int32 EntryPoint);
}; // Size: 0x13D8

#endif
