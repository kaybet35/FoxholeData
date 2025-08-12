#ifndef UE4SS_SDK_BPMechW_HPP
#define UE4SS_SDK_BPMechW_HPP

class ABPMechW_C : public ASpiderMech
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x12F0 (size: 0x8)
    class UStaticMeshComponent* FireL;                                                // 0x12F8 (size: 0x8)
    class UStaticMeshComponent* FireR;                                                // 0x1300 (size: 0x8)
    class UAudioComponent* VehicleIdle;                                               // 0x1308 (size: 0x8)
    class UParticleSystemComponent* Exhaust_L;                                        // 0x1310 (size: 0x8)
    class UParticleSystemComponent* Exhaust_R;                                        // 0x1318 (size: 0x8)
    class USpotLightComponent* SpotLight_Headlight;                                   // 0x1320 (size: 0x8)
    class USpotLightComponent* SpotLight_Turret;                                      // 0x1328 (size: 0x8)
    class UStaticMeshComponent* Light_Turret;                                         // 0x1330 (size: 0x8)
    class UStaticMeshComponent* Light_Front;                                          // 0x1338 (size: 0x8)
    class USeatExitComponent* FrontLeftExit;                                          // 0x1340 (size: 0x8)
    class USeatExitComponent* BackExit;                                               // 0x1348 (size: 0x8)
    class UVehicleSeatComponent* CommanderSeat3;                                      // 0x1350 (size: 0x8)
    class UVehicleSeatComponent* MachineGunnerSeat2;                                  // 0x1358 (size: 0x8)
    class UVehicleSeatComponent* GunnerSeat1;                                         // 0x1360 (size: 0x8)
    class UVehicleSeatComponent* DriverSeat0;                                         // 0x1368 (size: 0x8)
    class USeatExitComponent* RightExit;                                              // 0x1370 (size: 0x8)
    class USeatExitComponent* BackLeftExit;                                           // 0x1378 (size: 0x8)
    class USeatTriggerComponent* CommanderTrigger;                                    // 0x1380 (size: 0x8)
    class USeatTriggerComponent* MachineGunnerTrigger;                                // 0x1388 (size: 0x8)
    class USeatTriggerComponent* GunnerTrigger;                                       // 0x1390 (size: 0x8)
    class USeatTriggerComponent* DriverTrigger;                                       // 0x1398 (size: 0x8)
    class UAudioComponent* DriveIdle;                                                 // 0x13A0 (size: 0x8)
    class UCameraComponent* Camera;                                                   // 0x13A8 (size: 0x8)

    void BPOnVehicleOn(bool IsOn);
    void ExecuteUbergraph_BPMechW(int32 EntryPoint);
}; // Size: 0x13B0

#endif
