#ifndef UE4SS_SDK_BPMortarTankBase_HPP
#define UE4SS_SDK_BPMortarTankBase_HPP

class ABPMortarTankBase_C : public ABattleTank
{
    class USpotLightComponent* SpotLight_L;                                           // 0x13A0 (size: 0x8)
    class UStaticMeshComponent* Light_L;                                              // 0x13A8 (size: 0x8)
    class UStaticMeshComponent* Light_R;                                              // 0x13B0 (size: 0x8)
    class USpotLightComponent* SpotLight_R;                                           // 0x13B8 (size: 0x8)
    class USeatExitComponent* CommanderExit;                                          // 0x13C0 (size: 0x8)
    class USeatExitComponent* GunnerExit;                                             // 0x13C8 (size: 0x8)
    class USeatExitComponent* DriverExit;                                             // 0x13D0 (size: 0x8)
    class USeatTriggerComponent* CommanderTrigger;                                    // 0x13D8 (size: 0x8)
    class USeatTriggerComponent* GunnerTrigger;                                       // 0x13E0 (size: 0x8)
    class USeatTriggerComponent* DriverTrigger;                                       // 0x13E8 (size: 0x8)
    class UVehicleSeatComponent* GunnerSeat1;                                         // 0x13F0 (size: 0x8)
    class UVehicleSeatComponent* DriverSeat0;                                         // 0x13F8 (size: 0x8)

}; // Size: 0x1400

#endif
