#ifndef UE4SS_SDK_BPLightTankOffensiveC_HPP
#define UE4SS_SDK_BPLightTankOffensiveC_HPP

class ABPLightTankOffensiveC_C : public ABPLightTankBaseC_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x13F8 (size: 0x8)
    class UVehicleSeatComponent* PassengerSeat2;                                      // 0x1400 (size: 0x8)
    class USkeletalMeshComponent* SkeletalMesh;                                       // 0x1408 (size: 0x8)

    void BPOnVehicleOn(bool IsOn);
    void ExecuteUbergraph_BPLightTankOffensiveC(int32 EntryPoint);
}; // Size: 0x1410

#endif
