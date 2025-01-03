#ifndef UE4SS_SDK_BPBattleTankATC_HPP
#define UE4SS_SDK_BPBattleTankATC_HPP

class ABPBattleTankATC_C : public ABattleTankATCBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x1428 (size: 0x8)

    void BPOnVehicleOn(bool IsOn);
    void ExecuteUbergraph_BPBattleTankATC(int32 EntryPoint);
}; // Size: 0x1430

#endif
