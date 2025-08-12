#ifndef UE4SS_SDK_BPRelicMediumTank_HPP
#define UE4SS_SDK_BPRelicMediumTank_HPP

class ABPRelicMediumTank_C : public ABPMediumTankBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x13F8 (size: 0x8)
    class UVehicleSeatComponent* GunnerSeat1;                                         // 0x1400 (size: 0x8)
    class UVehicleSeatComponent* DriverSeat0;                                         // 0x1408 (size: 0x8)
    class UVehicleSeatComponent* PassengerSeat6;                                      // 0x1410 (size: 0x8)
    class UVehicleSeatComponent* PassengerSeat5;                                      // 0x1418 (size: 0x8)
    class USeatExitComponent* Passenger6Exit;                                         // 0x1420 (size: 0x8)
    class USeatTriggerComponent* Passenger6Trigger;                                   // 0x1428 (size: 0x8)
    class USeatTriggerComponent* Passenger5Trigger;                                   // 0x1430 (size: 0x8)
    class USeatExitComponent* Passenger5Exit;                                         // 0x1438 (size: 0x8)
    class USeatTriggerComponent* Passenger4Trigger;                                   // 0x1440 (size: 0x8)
    class USeatExitComponent* Passenger4Exit;                                         // 0x1448 (size: 0x8)
    class UVehicleSeatComponent* PassengerSeat4;                                      // 0x1450 (size: 0x8)
    class USpotLightComponent* SpotLightBody2;                                        // 0x1458 (size: 0x8)
    class UStaticMeshComponent* LightTurret1;                                         // 0x1460 (size: 0x8)
    class UVehicleSeatComponent* CommanderSeat3;                                      // 0x1468 (size: 0x8)
    class USeatTriggerComponent* Gunner2Trigger;                                      // 0x1470 (size: 0x8)
    class USeatExitComponent* Gunner2Exit;                                            // 0x1478 (size: 0x8)
    class UVehicleSeatComponent* GunnerSeat2;                                         // 0x1480 (size: 0x8)
    class UStaticMeshComponent* LightTurret4;                                         // 0x1488 (size: 0x8)
    class UStaticMeshComponent* LightTurret3;                                         // 0x1490 (size: 0x8)
    class UStaticMeshComponent* LightTurret2;                                         // 0x1498 (size: 0x8)

    void BPOnVehicleOn(bool IsOn);
    void ExecuteUbergraph_BPRelicMediumTank(int32 EntryPoint);
}; // Size: 0x14A0

#endif
