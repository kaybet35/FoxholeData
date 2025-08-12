#ifndef UE4SS_SDK_BPBattleTankC_HPP
#define UE4SS_SDK_BPBattleTankC_HPP

class ABPBattleTankC_C : public ABPBattleTankBaseC_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x1478 (size: 0x8)

    void BPOnVehicleOn(bool IsOn);
    void ExecuteUbergraph_BPBattleTankC(int32 EntryPoint);
}; // Size: 0x1480

#endif
