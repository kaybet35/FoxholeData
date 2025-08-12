#ifndef UE4SS_SDK_BPMotorcycleBase_HPP
#define UE4SS_SDK_BPMotorcycleBase_HPP

class ABPMotorcycleBase_C : public AMotorcycle
{
    class USeatExitComponent* PassengerExit;                                          // 0x12D0 (size: 0x8)
    class USeatExitComponent* DriverExit;                                             // 0x12D8 (size: 0x8)
    class USeatTriggerComponent* PassengerTrigger;                                    // 0x12E0 (size: 0x8)
    class USeatTriggerComponent* DriverTrigger;                                       // 0x12E8 (size: 0x8)
    class UAudioComponent* Idle;                                                      // 0x12F0 (size: 0x8)
    class UCameraComponent* Camera;                                                   // 0x12F8 (size: 0x8)

}; // Size: 0x1300

#endif
