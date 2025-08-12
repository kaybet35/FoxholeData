#ifndef UE4SS_SDK_BPScoutTankW_HPP
#define UE4SS_SDK_BPScoutTankW_HPP

class ABPScoutTankW_C : public AScoutTankWBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x13D0 (size: 0x8)
    class USkeletalMeshComponent* chassis;                                            // 0x13D8 (size: 0x8)

    void BPOnVehicleOn(bool IsOn);
    void ExecuteUbergraph_BPScoutTankW(int32 EntryPoint);
}; // Size: 0x13E0

#endif
