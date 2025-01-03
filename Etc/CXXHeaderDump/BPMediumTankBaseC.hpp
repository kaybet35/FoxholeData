#ifndef UE4SS_SDK_BPMediumTankBaseC_HPP
#define UE4SS_SDK_BPMediumTankBaseC_HPP

class ABPMediumTankBaseC_C : public ABPMediumTankBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x13D8 (size: 0x8)
    class UVehicleSeatComponent* GunnerSeat1;                                         // 0x13E0 (size: 0x8)
    class UVehicleSeatComponent* DriverSeat0;                                         // 0x13E8 (size: 0x8)
    class USpotLightComponent* SpotlightTurretL;                                      // 0x13F0 (size: 0x8)
    class UStaticMeshComponent* LightTurretL;                                         // 0x13F8 (size: 0x8)
    class UParticleSystemComponent* ExhaustR;                                         // 0x1400 (size: 0x8)
    class UStaticMeshComponent* LightBodyR;                                           // 0x1408 (size: 0x8)
    class USpotLightComponent* SpotLightBodyR;                                        // 0x1410 (size: 0x8)
    class UVehicleSeatComponent* CommanderSeat2;                                      // 0x1418 (size: 0x8)
    class USeatExitComponent* Gunner2Exit;                                            // 0x1420 (size: 0x8)
    class USeatTriggerComponent* Gunner2Trigger;                                      // 0x1428 (size: 0x8)

    void BPOnVehicleOn(bool IsOn);
    void ExecuteUbergraph_BPMediumTankBaseC(int32 EntryPoint);
}; // Size: 0x1430

#endif
