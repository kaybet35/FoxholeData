#ifndef UE4SS_SDK_BPHeavyTruckBase_HPP
#define UE4SS_SDK_BPHeavyTruckBase_HPP

class ABPHeavyTruckBase_C : public ATransportTruck
{
    class UTowHitchUseComponent* TowHitchUse;                                         // 0x1310 (size: 0x8)
    class UStaticMeshComponent* TrailerMesh;                                          // 0x1318 (size: 0x8)
    class UStaticMeshComponent* CabinMesh;                                            // 0x1320 (size: 0x8)
    class USeatExitComponent* BackExit;                                               // 0x1328 (size: 0x8)
    class USeatExitComponent* PassengerExit;                                          // 0x1330 (size: 0x8)
    class USeatExitComponent* DriverExit0;                                            // 0x1338 (size: 0x8)
    class USeatTriggerComponent* BackTrigger;                                         // 0x1340 (size: 0x8)
    class USeatTriggerComponent* PassengerTrigger;                                    // 0x1348 (size: 0x8)
    class USeatTriggerComponent* DriverTrigger;                                       // 0x1350 (size: 0x8)
    class UVehicleSeatComponent* PassengerSeat5;                                      // 0x1358 (size: 0x8)
    class UVehicleSeatComponent* PassengerSeat4;                                      // 0x1360 (size: 0x8)
    class UVehicleSeatComponent* PassengerSeat3;                                      // 0x1368 (size: 0x8)
    class UVehicleSeatComponent* PassengerSeat2;                                      // 0x1370 (size: 0x8)
    class UVehicleSeatComponent* PassengerSeat1;                                      // 0x1378 (size: 0x8)
    class UVehicleSeatComponent* DriverSeat0;                                         // 0x1380 (size: 0x8)
    class UParticleSystemComponent* Exhaust;                                          // 0x1388 (size: 0x8)
    class UParticleSystemComponent* ParticleSystem;                                   // 0x1390 (size: 0x8)
    class UCameraComponent* Camera;                                                   // 0x1398 (size: 0x8)

}; // Size: 0x13A0

#endif
