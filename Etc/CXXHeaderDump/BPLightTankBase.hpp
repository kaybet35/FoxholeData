#ifndef UE4SS_SDK_BPLightTankBase_HPP
#define UE4SS_SDK_BPLightTankBase_HPP

class ABPLightTankBase_C : public ALightTank
{
    class UVehicleSeatComponent* CommanderSeat2;                                      // 0x1340 (size: 0x8)
    class UVehicleSeatComponent* DriverSeat0;                                         // 0x1348 (size: 0x8)
    class USeatExitComponent* CommanderExit;                                          // 0x1350 (size: 0x8)
    class USeatExitComponent* GunnerExit;                                             // 0x1358 (size: 0x8)
    class USeatExitComponent* DriverExit0;                                            // 0x1360 (size: 0x8)
    class USeatTriggerComponent* CommanderTrigger;                                    // 0x1368 (size: 0x8)
    class USeatTriggerComponent* GunnerTrigger;                                       // 0x1370 (size: 0x8)
    class USeatTriggerComponent* DriverTrigger;                                       // 0x1378 (size: 0x8)
    class UAudioComponent* DriveIdle;                                                 // 0x1380 (size: 0x8)
    class UCameraComponent* Camera;                                                   // 0x1388 (size: 0x8)

}; // Size: 0x1390

#endif
