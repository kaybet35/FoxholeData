#ifndef UE4SS_SDK_BPLandingShipW_HPP
#define UE4SS_SDK_BPLandingShipW_HPP

class ABPLandingShipW_C : public ABPLandingShipBaseW_C
{
    class USpawnPointComponent* SpawnPoint;                                           // 0x1590 (size: 0x8)
    class UBPWaterStencilComponent_C* BPWaterStencilComponent;                        // 0x1598 (size: 0x8)
    class UVehicleSeatComponent* Passenger1;                                          // 0x15A0 (size: 0x8)
    class USeatTriggerComponent* Passenger1Trigger;                                   // 0x15A8 (size: 0x8)
    class USeatExitComponent* Passenger1Exit;                                         // 0x15B0 (size: 0x8)

}; // Size: 0x15B8

#endif
