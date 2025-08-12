#ifndef UE4SS_SDK_BPRelicTruck_HPP
#define UE4SS_SDK_BPRelicTruck_HPP

class ABPRelicTruck_C : public ATransportTruck
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x1340 (size: 0x8)
    class UVehicleSeatComponent* PassengerSeat5;                                      // 0x1348 (size: 0x8)
    class UVehicleSeatComponent* PassengerSeat4;                                      // 0x1350 (size: 0x8)
    class UVehicleSeatComponent* PassengerSeat3;                                      // 0x1358 (size: 0x8)
    class UVehicleSeatComponent* PassengerSeat2;                                      // 0x1360 (size: 0x8)
    class UVehicleSeatComponent* PassengerSeat1;                                      // 0x1368 (size: 0x8)
    class UVehicleSeatComponent* DriverSeat0;                                         // 0x1370 (size: 0x8)
    class USeatExitComponent* BackExit;                                               // 0x1378 (size: 0x8)
    class USeatExitComponent* PassengerExit;                                          // 0x1380 (size: 0x8)
    class USeatExitComponent* DriverExit0;                                            // 0x1388 (size: 0x8)
    class USeatTriggerComponent* BackTrigger;                                         // 0x1390 (size: 0x8)
    class USeatTriggerComponent* PassengerTrigger;                                    // 0x1398 (size: 0x8)
    class USeatTriggerComponent* DriverTrigger;                                       // 0x13A0 (size: 0x8)
    class UStaticMeshComponent* Light_L;                                              // 0x13A8 (size: 0x8)
    class UStaticMeshComponent* Light_R;                                              // 0x13B0 (size: 0x8)
    class USpotLightComponent* SpotLight2;                                            // 0x13B8 (size: 0x8)
    class USpotLightComponent* SpotLight;                                             // 0x13C0 (size: 0x8)
    class UAudioComponent* TruckIdle;                                                 // 0x13C8 (size: 0x8)
    class UParticleSystemComponent* Exhaust;                                          // 0x13D0 (size: 0x8)
    class UParticleSystemComponent* destroyedps;                                      // 0x13D8 (size: 0x8)
    class UCameraComponent* Camera;                                                   // 0x13E0 (size: 0x8)

    void BPOnVehicleOn(bool IsOn);
    void ExecuteUbergraph_BPRelicTruck(int32 EntryPoint);
}; // Size: 0x13E8

#endif
