#ifndef UE4SS_SDK_BPCrane_HPP
#define UE4SS_SDK_BPCrane_HPP

class ABPCrane_C : public ACrane
{
    class UVehicleSeatComponent* PassengerSeat1;                                      // 0x12F0 (size: 0x8)
    class UVehicleSeatComponent* DriverSeat0;                                         // 0x12F8 (size: 0x8)
    class USeatExitComponent* PassengerExit;                                          // 0x1300 (size: 0x8)
    class USeatExitComponent* DriverExit0;                                            // 0x1308 (size: 0x8)
    class USeatTriggerComponent* PassengerTrigger;                                    // 0x1310 (size: 0x8)
    class USeatTriggerComponent* DriverTrigger;                                       // 0x1318 (size: 0x8)
    class UCameraComponent* Camera;                                                   // 0x1320 (size: 0x8)

}; // Size: 0x1328

#endif
