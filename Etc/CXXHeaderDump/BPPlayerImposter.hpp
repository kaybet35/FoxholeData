#ifndef UE4SS_SDK_BPPlayerImposter_HPP
#define UE4SS_SDK_BPPlayerImposter_HPP

class ABPPlayerImposter_C : public APlayerImposter
{
    class USeatExitComponent* DriverExit;                                             // 0x1130 (size: 0x8)
    class USeatTriggerComponent* DriverTrigger;                                       // 0x1138 (size: 0x8)
    class UVehicleSeatComponent* DriverSeat;                                          // 0x1140 (size: 0x8)
    class UCameraComponent* Camera;                                                   // 0x1148 (size: 0x8)

}; // Size: 0x1150

#endif
