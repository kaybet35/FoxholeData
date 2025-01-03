#ifndef UE4SS_SDK_BPLightTankOffensiveC_HPP
#define UE4SS_SDK_BPLightTankOffensiveC_HPP

class ABPLightTankOffensiveC_C : public ABPLightTankBaseC_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x13D8 (size: 0x8)
    class UVehicleSeatComponent* PassengerSeat2;                                      // 0x13E0 (size: 0x8)
    class USkeletalMeshComponent* SkeletalMesh;                                       // 0x13E8 (size: 0x8)

    void BPOnVehicleOn(bool IsOn);
    void ExecuteUbergraph_BPLightTankOffensiveC(int32 EntryPoint);
}; // Size: 0x13F0

#endif
