#ifndef UE4SS_SDK_BPSuperTankW_HPP
#define UE4SS_SDK_BPSuperTankW_HPP

class ABPSuperTankW_C : public ABPSuperTankBaseW_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x1408 (size: 0x8)
    class USpotLightComponent* SpotLightBodyR;                                        // 0x1410 (size: 0x8)
    class USpotLightComponent* SpotLightTurret;                                       // 0x1418 (size: 0x8)
    class UStaticMeshComponent* LightBodyR;                                           // 0x1420 (size: 0x8)
    class UStaticMeshComponent* LightTurret;                                          // 0x1428 (size: 0x8)
    class USeatExitComponent* EngineerExit;                                           // 0x1430 (size: 0x8)
    class USeatTriggerComponent* EngineerTrigger4;                                    // 0x1438 (size: 0x8)
    class USeatExitComponent* Gunner3Exit;                                            // 0x1440 (size: 0x8)
    class USeatTriggerComponent* Gunner3Trigger;                                      // 0x1448 (size: 0x8)
    class UVehicleSeatComponent* EngineerSeat4;                                       // 0x1450 (size: 0x8)
    class UVehicleSeatComponent* GunnerSeat3;                                         // 0x1458 (size: 0x8)
    class UVehicleSeatComponent* CommanderSeat5;                                      // 0x1460 (size: 0x8)

    void BPOnVehicleOn(bool IsOn);
    void ExecuteUbergraph_BPSuperTankW(int32 EntryPoint);
}; // Size: 0x1468

#endif
