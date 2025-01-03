#ifndef UE4SS_SDK_BPMediumTankW_HPP
#define UE4SS_SDK_BPMediumTankW_HPP

class ABPMediumTankW_C : public AMediumTankBaseW_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x1410 (size: 0x8)
    class UVehicleSeatComponent* CommanderSeat3;                                      // 0x1418 (size: 0x8)
    class USpotLightComponent* SpotLightTurret;                                       // 0x1420 (size: 0x8)
    class UStaticMeshComponent* LightTurret;                                          // 0x1428 (size: 0x8)
    class USkeletalMeshComponent* chassis_0;                                          // 0x1430 (size: 0x8)

    void BPOnVehicleOn(bool IsOn);
    void ExecuteUbergraph_BPMediumTankW(int32 EntryPoint);
}; // Size: 0x1438

#endif
