#ifndef UE4SS_SDK_BPRelicArmouredCar_HPP
#define UE4SS_SDK_BPRelicArmouredCar_HPP

class ABPRelicArmouredCar_C : public AArmoredCar
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x1310 (size: 0x8)
    class UTowHitchUseComponent* TowHitchUse;                                         // 0x1318 (size: 0x8)
    class UVehicleSeatComponent* GunnerSeat1;                                         // 0x1320 (size: 0x8)
    class UVehicleSeatComponent* DriverSeat0;                                         // 0x1328 (size: 0x8)
    class USeatExitComponent* GunnerExit;                                             // 0x1330 (size: 0x8)
    class USeatExitComponent* DriverExit0;                                            // 0x1338 (size: 0x8)
    class USeatTriggerComponent* GunnerTrigger;                                       // 0x1340 (size: 0x8)
    class USeatTriggerComponent* DriverTrigger;                                       // 0x1348 (size: 0x8)
    class UStaticMeshComponent* Light_Turret;                                         // 0x1350 (size: 0x8)
    class USpotLightComponent* SpotLight_Turret;                                      // 0x1358 (size: 0x8)
    class USpotLightComponent* SpotLight_R;                                           // 0x1360 (size: 0x8)
    class UStaticMeshComponent* Light_R;                                              // 0x1368 (size: 0x8)
    class USpotLightComponent* SpotLight_L;                                           // 0x1370 (size: 0x8)
    class UStaticMeshComponent* Light_L;                                              // 0x1378 (size: 0x8)
    class UParticleSystemComponent* Exhaust;                                          // 0x1380 (size: 0x8)
    class UAudioComponent* VehicleIdle;                                               // 0x1388 (size: 0x8)
    class UCameraComponent* Camera;                                                   // 0x1390 (size: 0x8)

    void BPOnVehicleOn(bool IsOn);
    void ExecuteUbergraph_BPRelicArmouredCar(int32 EntryPoint);
}; // Size: 0x1398

#endif
