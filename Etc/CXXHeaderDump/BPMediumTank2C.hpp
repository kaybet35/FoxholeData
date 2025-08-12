#ifndef UE4SS_SDK_BPMediumTank2C_HPP
#define UE4SS_SDK_BPMediumTank2C_HPP

class ABPMediumTank2C_C : public ABPMediumTank2BaseC_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x1410 (size: 0x8)
    class USpotLightComponent* SpotLightBodyTurret;                                   // 0x1418 (size: 0x8)
    class UStaticMeshComponent* LightBodyTurret;                                      // 0x1420 (size: 0x8)
    class USpotLightComponent* SpotLightBodyLeft;                                     // 0x1428 (size: 0x8)
    class UStaticMeshComponent* LightBodyLeft;                                        // 0x1430 (size: 0x8)
    class UVehicleSeatComponent* GunnerSeat2;                                         // 0x1438 (size: 0x8)

    void BPOnVehicleOn(bool IsOn);
    void ExecuteUbergraph_BPMediumTank2C(int32 EntryPoint);
}; // Size: 0x1440

#endif
