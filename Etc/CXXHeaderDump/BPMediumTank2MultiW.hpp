#ifndef UE4SS_SDK_BPMediumTank2MultiW_HPP
#define UE4SS_SDK_BPMediumTank2MultiW_HPP

class ABPMediumTank2MultiW_C : public ABPMediumTank2BaseW_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x1418 (size: 0x8)
    class USpotLightComponent* SpotLightTurret_L;                                     // 0x1420 (size: 0x8)
    class USpotLightComponent* SpotLightTurret_R;                                     // 0x1428 (size: 0x8)
    class UStaticMeshComponent* TurretLight_L;                                        // 0x1430 (size: 0x8)
    class UStaticMeshComponent* TurretLight_R;                                        // 0x1438 (size: 0x8)
    class UParticleSystemComponent* Exhaust2;                                         // 0x1440 (size: 0x8)
    class UVehicleSeatComponent* GunnerSeat2;                                         // 0x1448 (size: 0x8)

    void BPOnVehicleOn(bool IsOn);
    void ExecuteUbergraph_BPMediumTank2MultiW(int32 EntryPoint);
}; // Size: 0x1450

#endif
