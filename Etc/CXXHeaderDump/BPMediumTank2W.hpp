#ifndef UE4SS_SDK_BPMediumTank2W_HPP
#define UE4SS_SDK_BPMediumTank2W_HPP

class ABPMediumTank2W_C : public ABPMediumTank2BaseW_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x1418 (size: 0x8)
    class UVehicleSeatComponent* GunnerSeat2;                                         // 0x1420 (size: 0x8)
    class USpotLightComponent* SpotLightTurret;                                       // 0x1428 (size: 0x8)
    class UStaticMeshComponent* LightTurret;                                          // 0x1430 (size: 0x8)
    class UParticleSystemComponent* Exhaust2;                                         // 0x1438 (size: 0x8)

    void BPOnVehicleOn(bool IsOn);
    void ExecuteUbergraph_BPMediumTank2W(int32 EntryPoint);
}; // Size: 0x1440

#endif
