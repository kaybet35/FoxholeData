#ifndef UE4SS_SDK_BPMediumTank2BaseW_HPP
#define UE4SS_SDK_BPMediumTank2BaseW_HPP

class ABPMediumTank2BaseW_C : public ABPMediumTankBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x13D8 (size: 0x8)
    class UVehicleSeatComponent* GunnerSeat1;                                         // 0x13E0 (size: 0x8)
    class UVehicleSeatComponent* DriverSeat0;                                         // 0x13E8 (size: 0x8)
    class USkeletalMeshComponent* chassis;                                            // 0x13F0 (size: 0x8)

    void BPOnVehicleOn(bool IsOn);
    void ExecuteUbergraph_BPMediumTank2BaseW(int32 EntryPoint);
}; // Size: 0x13F8

#endif
