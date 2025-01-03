#ifndef UE4SS_SDK_BPLandingShipW_HPP
#define UE4SS_SDK_BPLandingShipW_HPP

class ABPLandingShipW_C : public ABPLandingShipBaseW_C
{
    class USpawnPointComponent* SpawnPoint;                                           // 0x1520 (size: 0x8)
    class UBPWaterStencilComponent_C* BPWaterStencilComponent;                        // 0x1528 (size: 0x8)
    class UVehicleSeatComponent* Passenger1;                                          // 0x1530 (size: 0x8)
    class USeatTriggerComponent* Passenger1Trigger;                                   // 0x1538 (size: 0x8)
    class USeatExitComponent* Passenger1Exit;                                         // 0x1540 (size: 0x8)

}; // Size: 0x1548

#endif
