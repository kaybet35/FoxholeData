#ifndef UE4SS_SDK_BPMediumTankSiegeW_HPP
#define UE4SS_SDK_BPMediumTankSiegeW_HPP

class ABPMediumTankSiegeW_C : public AMediumTankBaseW_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x1430 (size: 0x8)
    class UStaticMeshComponent* LightTurretTop;                                       // 0x1438 (size: 0x8)
    class USpotLightComponent* SpotLightTurretTop;                                    // 0x1440 (size: 0x8)
    class UVehicleSeatComponent* CommanderSeat3;                                      // 0x1448 (size: 0x8)
    class USkeletalMeshComponent* chassis_0;                                          // 0x1450 (size: 0x8)

    void BPOnVehicleOn(bool IsOn);
    void ExecuteUbergraph_BPMediumTankSiegeW(int32 EntryPoint);
}; // Size: 0x1458

#endif
