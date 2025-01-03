#ifndef UE4SS_SDK_BPScoutTankOffensiveW_HPP
#define UE4SS_SDK_BPScoutTankOffensiveW_HPP

class ABPScoutTankOffensiveW_C : public AScoutTankWBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x13B0 (size: 0x8)
    class USkeletalMeshComponent* chassis;                                            // 0x13B8 (size: 0x8)

    void BPOnVehicleOn(bool IsOn);
    void ExecuteUbergraph_BPScoutTankOffensiveW(int32 EntryPoint);
}; // Size: 0x13C0

#endif
