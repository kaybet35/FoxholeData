#ifndef UE4SS_SDK_BPScoutVehicleBase_HPP
#define UE4SS_SDK_BPScoutVehicleBase_HPP

class ABPScoutVehicleBase_C : public AScoutVehicle
{
    class UParticleSystemComponent* Exhaust;                                          // 0x12B0 (size: 0x8)
    class USeatExitComponent* PassengerExit;                                          // 0x12B8 (size: 0x8)
    class USeatExitComponent* DriverExit;                                             // 0x12C0 (size: 0x8)
    class USeatTriggerComponent* PassengerTrigger;                                    // 0x12C8 (size: 0x8)
    class USeatTriggerComponent* DriverTrigger;                                       // 0x12D0 (size: 0x8)
    class UVehicleSeatComponent* PassengerSeat3;                                      // 0x12D8 (size: 0x8)
    class UVehicleSeatComponent* PassengerSeat2;                                      // 0x12E0 (size: 0x8)
    class UVehicleSeatComponent* PassengerSeat1;                                      // 0x12E8 (size: 0x8)
    class UVehicleSeatComponent* DriverSeat0;                                         // 0x12F0 (size: 0x8)
    class UCameraComponent* Camera;                                                   // 0x12F8 (size: 0x8)

}; // Size: 0x1300

#endif
