#ifndef UE4SS_SDK_BPBicycle_HPP
#define UE4SS_SDK_BPBicycle_HPP

class ABPBicycle_C : public ABicycle
{
    class UParticleSystemComponent* BikeDirt;                                         // 0x1110 (size: 0x8)
    class USeatExitComponent* DriverExit;                                             // 0x1118 (size: 0x8)
    class USeatTriggerComponent* DriverTrigger;                                       // 0x1120 (size: 0x8)
    class UVehicleSeatComponent* DriverSeat;                                          // 0x1128 (size: 0x8)
    class UCameraComponent* Camera;                                                   // 0x1130 (size: 0x8)

}; // Size: 0x1138

#endif
