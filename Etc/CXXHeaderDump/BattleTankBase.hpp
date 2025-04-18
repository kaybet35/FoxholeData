#ifndef UE4SS_SDK_BattleTankBase_HPP
#define UE4SS_SDK_BattleTankBase_HPP

class ABattleTankBase_C : public ABattleTank
{
    class UVehicleSeatComponent* EngineerSeat4;                                       // 0x1380 (size: 0x8)
    class UVehicleSeatComponent* CommanderSeat3;                                      // 0x1388 (size: 0x8)
    class UVehicleSeatComponent* MachineGunnerSeat2;                                  // 0x1390 (size: 0x8)
    class UVehicleSeatComponent* GunnerSeat1;                                         // 0x1398 (size: 0x8)
    class UVehicleSeatComponent* DriverSeat0;                                         // 0x13A0 (size: 0x8)
    class USeatExitComponent* EngineerExit;                                           // 0x13A8 (size: 0x8)
    class USeatExitComponent* CommanderExit;                                          // 0x13B0 (size: 0x8)
    class USeatExitComponent* MachineGunnerExit;                                      // 0x13B8 (size: 0x8)
    class USeatExitComponent* GunnerExit;                                             // 0x13C0 (size: 0x8)
    class USeatExitComponent* DriverExit0;                                            // 0x13C8 (size: 0x8)
    class USeatTriggerComponent* EngineerTrigger0;                                    // 0x13D0 (size: 0x8)
    class USeatTriggerComponent* CommanderTrigger0;                                   // 0x13D8 (size: 0x8)
    class USeatTriggerComponent* MachineGunnerTrigger0;                               // 0x13E0 (size: 0x8)
    class USeatTriggerComponent* GunnerTrigger;                                       // 0x13E8 (size: 0x8)
    class USeatTriggerComponent* DriverTrigger;                                       // 0x13F0 (size: 0x8)
    class UAudioComponent* DriveIdle;                                                 // 0x13F8 (size: 0x8)
    class UCameraComponent* Camera;                                                   // 0x1400 (size: 0x8)

}; // Size: 0x1408

#endif
