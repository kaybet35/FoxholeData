#ifndef UE4SS_SDK_BPLightTankMobilityC_HPP
#define UE4SS_SDK_BPLightTankMobilityC_HPP

class ABPLightTankMobilityC_C : public ABPLightTankBaseC_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x13D8 (size: 0x8)
    class USkeletalMeshComponent* mainBody;                                           // 0x13E0 (size: 0x8)

    void BPOnVehicleOn(bool IsOn);
    void ExecuteUbergraph_BPLightTankMobilityC(int32 EntryPoint);
}; // Size: 0x13E8

#endif
