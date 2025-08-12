#ifndef UE4SS_SDK_BPPlayerImposter_HPP
#define UE4SS_SDK_BPPlayerImposter_HPP

class ABPPlayerImposter_C : public APlayerImposter
{
    class USeatExitComponent* DriverExit;                                             // 0x1160 (size: 0x8)
    class USeatTriggerComponent* DriverTrigger;                                       // 0x1168 (size: 0x8)
    class UVehicleSeatComponent* DriverSeat;                                          // 0x1170 (size: 0x8)
    class UCameraComponent* Camera;                                                   // 0x1178 (size: 0x8)

}; // Size: 0x1180

#endif
