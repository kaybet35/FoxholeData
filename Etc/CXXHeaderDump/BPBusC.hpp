#ifndef UE4SS_SDK_BPBusC_HPP
#define UE4SS_SDK_BPBusC_HPP

class ABPBusC_C : public ARelicBus
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x1290 (size: 0x8)
    class UVehicleSeatComponent* PassengerSeat11;                                     // 0x1298 (size: 0x8)
    class UVehicleSeatComponent* PassengerSeat10;                                     // 0x12A0 (size: 0x8)
    class UVehicleSeatComponent* PassengerSeat9;                                      // 0x12A8 (size: 0x8)
    class UVehicleSeatComponent* PassengerSeat8;                                      // 0x12B0 (size: 0x8)
    class UVehicleSeatComponent* PassengerSeat7;                                      // 0x12B8 (size: 0x8)
    class UVehicleSeatComponent* PassengerSeat6;                                      // 0x12C0 (size: 0x8)
    class UVehicleSeatComponent* PassengerSeat5;                                      // 0x12C8 (size: 0x8)
    class UVehicleSeatComponent* PassengerSeat4;                                      // 0x12D0 (size: 0x8)
    class UVehicleSeatComponent* PassengerSeat3;                                      // 0x12D8 (size: 0x8)
    class UVehicleSeatComponent* PassengerSeat2;                                      // 0x12E0 (size: 0x8)
    class UVehicleSeatComponent* PassengerSeat1;                                      // 0x12E8 (size: 0x8)
    class UVehicleSeatComponent* DriverSeat0;                                         // 0x12F0 (size: 0x8)
    class USeatExitComponent* BackExit;                                               // 0x12F8 (size: 0x8)
    class USeatExitComponent* PassengerExit;                                          // 0x1300 (size: 0x8)
    class USeatExitComponent* DriverExit0;                                            // 0x1308 (size: 0x8)
    class USeatTriggerComponent* BackTrigger;                                         // 0x1310 (size: 0x8)
    class USeatTriggerComponent* PassengerTrigger;                                    // 0x1318 (size: 0x8)
    class USeatTriggerComponent* DriverTrigger;                                       // 0x1320 (size: 0x8)
    class UStaticMeshComponent* Rear_L;                                               // 0x1328 (size: 0x8)
    class UStaticMeshComponent* Rear_R;                                               // 0x1330 (size: 0x8)
    class USpotLightComponent* Headlight_R;                                           // 0x1338 (size: 0x8)
    class USpotLightComponent* Headlight_L;                                           // 0x1340 (size: 0x8)
    class UStaticMeshComponent* Light_L;                                              // 0x1348 (size: 0x8)
    class UStaticMeshComponent* Light_R;                                              // 0x1350 (size: 0x8)
    class UAudioComponent* BusIdle;                                                   // 0x1358 (size: 0x8)
    class UParticleSystemComponent* Exhaust;                                          // 0x1360 (size: 0x8)
    class UCameraComponent* Camera;                                                   // 0x1368 (size: 0x8)

    void BPOnVehicleOn(bool IsOn);
    void ExecuteUbergraph_BPBusC(int32 EntryPoint);
}; // Size: 0x1370

#endif
