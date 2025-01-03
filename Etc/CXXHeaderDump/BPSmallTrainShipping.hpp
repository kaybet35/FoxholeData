#ifndef UE4SS_SDK_BPSmallTrainShipping_HPP
#define UE4SS_SDK_BPSmallTrainShipping_HPP

class ABPSmallTrainShipping_C : public ARailVehicle
{
    class UCameraComponent* Camera;                                                   // 0x1200 (size: 0x8)
    class UVehicleSeatComponent* PassengerSeat0;                                      // 0x1208 (size: 0x8)
    class USeatExitComponent* DriverExit;                                             // 0x1210 (size: 0x8)
    class USeatTriggerComponent* DriverTrigger;                                       // 0x1218 (size: 0x8)

}; // Size: 0x1220

#endif
