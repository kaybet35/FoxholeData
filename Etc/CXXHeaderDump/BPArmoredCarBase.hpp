#ifndef UE4SS_SDK_BPArmoredCarBase_HPP
#define UE4SS_SDK_BPArmoredCarBase_HPP

class ABPArmoredCarBase_C : public AArmoredCar
{
    class USeatExitComponent* GunnerExit;                                             // 0x1310 (size: 0x8)
    class USeatExitComponent* DriverExit;                                             // 0x1318 (size: 0x8)
    class USeatTriggerComponent* GunnerTrigger;                                       // 0x1320 (size: 0x8)
    class USeatTriggerComponent* DriverTrigger;                                       // 0x1328 (size: 0x8)
    class UAudioComponent* VehicleIdle;                                               // 0x1330 (size: 0x8)
    class UCameraComponent* Camera;                                                   // 0x1338 (size: 0x8)

}; // Size: 0x1340

#endif
