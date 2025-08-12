#ifndef UE4SS_SDK_BPFreighter_HPP
#define UE4SS_SDK_BPFreighter_HPP

class ABPFreighter_C : public AFreighter
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x12F0 (size: 0x8)
    class USpotLightComponent* SpotLight_L;                                           // 0x12F8 (size: 0x8)
    class UStaticMeshComponent* Headlight_R;                                          // 0x1300 (size: 0x8)
    class USpotLightComponent* SpotLight_R;                                           // 0x1308 (size: 0x8)
    class UStaticMeshComponent* Headlight_L;                                          // 0x1310 (size: 0x8)
    class UParticleSystemComponent* Exhaust3;                                         // 0x1318 (size: 0x8)
    class UParticleSystemComponent* Exhaust2;                                         // 0x1320 (size: 0x8)
    class UParticleSystemComponent* Exhaust1;                                         // 0x1328 (size: 0x8)
    class UParticleSystemComponent* Exhaust;                                          // 0x1330 (size: 0x8)
    class USeatExitComponent* Passenger2Exit;                                         // 0x1338 (size: 0x8)
    class USeatTriggerComponent* Passenger2Trigger;                                   // 0x1340 (size: 0x8)
    class UVehicleSeatComponent* PassengerSeat2;                                      // 0x1348 (size: 0x8)
    class UBoxComponent* NoWalkArea;                                                  // 0x1350 (size: 0x8)
    class UParticleSystemComponent* SideLeft;                                         // 0x1358 (size: 0x8)
    class UParticleSystemComponent* SideRight;                                        // 0x1360 (size: 0x8)
    class UParticleSystemComponent* WakeFore;                                         // 0x1368 (size: 0x8)
    class UBPWaterStencilComponent_C* BPWaterStencilComponent;                        // 0x1370 (size: 0x8)
    class UVehicleSeatComponent* PassengerSeat1;                                      // 0x1378 (size: 0x8)
    class UVehicleSeatComponent* DriverSeat0;                                         // 0x1380 (size: 0x8)
    class USeatExitComponent* PassengerExit;                                          // 0x1388 (size: 0x8)
    class USeatExitComponent* DriverExit0;                                            // 0x1390 (size: 0x8)
    class USeatTriggerComponent* PassengerTrigger;                                    // 0x1398 (size: 0x8)
    class USeatTriggerComponent* DriverTrigger;                                       // 0x13A0 (size: 0x8)
    class UAudioComponent* IdleSFXLoop;                                               // 0x13A8 (size: 0x8)
    class UBoxComponent* WorkVolume;                                                  // 0x13B0 (size: 0x8)
    class UCameraComponent* Camera;                                                   // 0x13B8 (size: 0x8)

    void BPOnVehicleOn(bool IsOn);
    void ExecuteUbergraph_BPFreighter(int32 EntryPoint);
}; // Size: 0x13C0

#endif
