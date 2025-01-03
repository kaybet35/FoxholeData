#ifndef UE4SS_SDK_BPHalfTrackBase_HPP
#define UE4SS_SDK_BPHalfTrackBase_HPP

class ABPHalfTrackBase_C : public AHalfTrack
{
    class USeatTriggerComponent* GunnerTrigger;                                       // 0x1340 (size: 0x8)
    class USeatExitComponent* RearSeatExit;                                           // 0x1348 (size: 0x8)
    class UVehicleSeatComponent* PassengerSeat1;                                      // 0x1350 (size: 0x8)
    class UVehicleSeatComponent* DriverSeat0;                                         // 0x1358 (size: 0x8)
    class USeatExitComponent* GunnerExit;                                             // 0x1360 (size: 0x8)
    class USeatExitComponent* PassengerExit;                                          // 0x1368 (size: 0x8)
    class USeatExitComponent* DriverExit0;                                            // 0x1370 (size: 0x8)
    class USeatTriggerComponent* RearSeatTrigger;                                     // 0x1378 (size: 0x8)
    class USeatTriggerComponent* PassengerTrigger;                                    // 0x1380 (size: 0x8)
    class USeatTriggerComponent* DriverTrigger;                                       // 0x1388 (size: 0x8)
    class UParticleSystemComponent* Exhaust;                                          // 0x1390 (size: 0x8)
    class UAudioComponent* DriveIdle;                                                 // 0x1398 (size: 0x8)
    class UCameraComponent* Camera;                                                   // 0x13A0 (size: 0x8)

}; // Size: 0x13A8

#endif
