#ifndef UE4SS_SDK_BPFlatbedTruck_HPP
#define UE4SS_SDK_BPFlatbedTruck_HPP

class ABPFlatbedTruck_C : public AFlatbedTruck
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x1400 (size: 0x8)
    class UVehicleSeatComponent* PassengerSeat1;                                      // 0x1408 (size: 0x8)
    class UVehicleSeatComponent* DriverSeat0;                                         // 0x1410 (size: 0x8)
    class USeatExitComponent* PassengerExit;                                          // 0x1418 (size: 0x8)
    class USeatExitComponent* DriverExit0;                                            // 0x1420 (size: 0x8)
    class USeatTriggerComponent* PassengerTrigger;                                    // 0x1428 (size: 0x8)
    class USeatTriggerComponent* DriverTrigger;                                       // 0x1430 (size: 0x8)
    class USpotLightComponent* SpotLight_L;                                           // 0x1438 (size: 0x8)
    class USpotLightComponent* SpotLight_R;                                           // 0x1440 (size: 0x8)
    class UStaticMeshComponent* Light_L;                                              // 0x1448 (size: 0x8)
    class UStaticMeshComponent* Light_R;                                              // 0x1450 (size: 0x8)
    class UParticleSystemComponent* Exhaust;                                          // 0x1458 (size: 0x8)
    class UAudioComponent* TruckIdle;                                                 // 0x1460 (size: 0x8)
    class UCameraComponent* Camera;                                                   // 0x1468 (size: 0x8)

    void BPOnVehicleOn(bool IsOn);
    void ExecuteUbergraph_BPFlatbedTruck(int32 EntryPoint);
}; // Size: 0x1470

#endif
