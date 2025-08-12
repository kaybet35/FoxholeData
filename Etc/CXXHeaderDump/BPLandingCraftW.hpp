#ifndef UE4SS_SDK_BPLandingCraftW_HPP
#define UE4SS_SDK_BPLandingCraftW_HPP

class ABPLandingCraftW_C : public ABPLandingCraftBaseW_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x1380 (size: 0x8)

    void BPOnVehicleOn(bool IsOn);
    void ExecuteUbergraph_BPLandingCraftW(int32 EntryPoint);
}; // Size: 0x1388

#endif
