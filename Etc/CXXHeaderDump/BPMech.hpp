#ifndef UE4SS_SDK_BPMech_HPP
#define UE4SS_SDK_BPMech_HPP

class ABPMech_C : public AMech
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x1300 (size: 0x8)
    class UVehicleSeatComponent* CommanderSeat4;                                      // 0x1308 (size: 0x8)
    class UVehicleSeatComponent* RightGunnerSeat3;                                    // 0x1310 (size: 0x8)
    class UVehicleSeatComponent* LeftGunnerSeat2;                                     // 0x1318 (size: 0x8)
    class UVehicleSeatComponent* GunnerSeat1;                                         // 0x1320 (size: 0x8)
    class UVehicleSeatComponent* DriverSeat0;                                         // 0x1328 (size: 0x8)
    class USeatExitComponent* BackExit;                                               // 0x1330 (size: 0x8)
    class USeatExitComponent* DriverExit;                                             // 0x1338 (size: 0x8)
    class USeatTriggerComponent* CommanderTrigger;                                    // 0x1340 (size: 0x8)
    class USeatTriggerComponent* RightGunnerTrigger;                                  // 0x1348 (size: 0x8)
    class USeatTriggerComponent* LeftGunnerTrigger;                                   // 0x1350 (size: 0x8)
    class USeatTriggerComponent* GunnerTrigger;                                       // 0x1358 (size: 0x8)
    class USeatTriggerComponent* DriverTrigger;                                       // 0x1360 (size: 0x8)
    class UStaticMeshComponent* RightFire;                                            // 0x1368 (size: 0x8)
    class UStaticMeshComponent* LeftFire;                                             // 0x1370 (size: 0x8)
    class USpotLightComponent* FrontLightLeft;                                        // 0x1378 (size: 0x8)
    class USpotLightComponent* FrontLightRight;                                       // 0x1380 (size: 0x8)
    class UAudioComponent* DriveIdle;                                                 // 0x1388 (size: 0x8)
    class UParticleSystemComponent* ExhaustRight;                                     // 0x1390 (size: 0x8)
    class UParticleSystemComponent* ExhaustLeft;                                      // 0x1398 (size: 0x8)
    class UStaticMeshComponent* FrontLightLeftHeadlight;                              // 0x13A0 (size: 0x8)
    class UStaticMeshComponent* FrontLightRightHeadlight;                             // 0x13A8 (size: 0x8)
    class UCameraComponent* Camera;                                                   // 0x13B0 (size: 0x8)

    void BPOnVehicleOn(bool IsOn);
    void ExecuteUbergraph_BPMech(int32 EntryPoint);
}; // Size: 0x13B8

#endif
