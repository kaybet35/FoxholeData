#ifndef UE4SS_SDK_BPFieldMortarBase_HPP
#define UE4SS_SDK_BPFieldMortarBase_HPP

class ABPFieldMortarBase_C : public AArtillery
{
    class UTowHitchUseComponent* TowHitchUse;                                         // 0x1320 (size: 0x8)
    class USeatExitComponent* PassengerExit;                                          // 0x1328 (size: 0x8)
    class USeatExitComponent* DriverExit;                                             // 0x1330 (size: 0x8)
    class USeatTriggerComponent* PassengerTrigger;                                    // 0x1338 (size: 0x8)
    class USeatTriggerComponent* DriverTrigger;                                       // 0x1340 (size: 0x8)
    class UVehicleSeatComponent* PassengerSeat1;                                      // 0x1348 (size: 0x8)
    class UVehicleSeatComponent* DriverSeat0;                                         // 0x1350 (size: 0x8)
    class UCameraComponent* Camera;                                                   // 0x1358 (size: 0x8)

}; // Size: 0x1360

#endif
