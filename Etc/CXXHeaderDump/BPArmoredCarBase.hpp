#ifndef UE4SS_SDK_BPArmoredCarBase_HPP
#define UE4SS_SDK_BPArmoredCarBase_HPP

class ABPArmoredCarBase_C : public AArmoredCar
{
    class USeatExitComponent* GunnerExit;                                             // 0x1340 (size: 0x8)
    class USeatExitComponent* DriverExit;                                             // 0x1348 (size: 0x8)
    class USeatTriggerComponent* GunnerTrigger;                                       // 0x1350 (size: 0x8)
    class USeatTriggerComponent* DriverTrigger;                                       // 0x1358 (size: 0x8)
    class UAudioComponent* VehicleIdle;                                               // 0x1360 (size: 0x8)
    class UCameraComponent* Camera;                                                   // 0x1368 (size: 0x8)

}; // Size: 0x1370

#endif
