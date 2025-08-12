#ifndef UE4SS_SDK_BPBattleTankBaseW_HPP
#define UE4SS_SDK_BPBattleTankBaseW_HPP

class ABPBattleTankBaseW_C : public ABattleTankBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x1428 (size: 0x8)
    class USkeletalMeshComponent* mainBody;                                           // 0x1430 (size: 0x8)
    class UParticleSystemComponent* ExhaustRight;                                     // 0x1438 (size: 0x8)
    class UParticleSystemComponent* ExhaustLeft;                                      // 0x1440 (size: 0x8)

    void BPOnVehicleOn(bool IsOn);
    void ExecuteUbergraph_BPBattleTankBaseW(int32 EntryPoint);
}; // Size: 0x1448

#endif
