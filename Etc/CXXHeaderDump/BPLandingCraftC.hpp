#ifndef UE4SS_SDK_BPLandingCraftC_HPP
#define UE4SS_SDK_BPLandingCraftC_HPP

class ABPLandingCraftC_C : public ABPLandingCraftBaseC_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x1360 (size: 0x8)

    void BPOnVehicleOn(bool IsOn);
    void ExecuteUbergraph_BPLandingCraftC(int32 EntryPoint);
}; // Size: 0x1368

#endif
