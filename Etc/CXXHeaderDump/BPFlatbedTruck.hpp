#ifndef UE4SS_SDK_BPFlatbedTruck_HPP
#define UE4SS_SDK_BPFlatbedTruck_HPP

class ABPFlatbedTruck_C : public AFlatbedTruck
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x13B0 (size: 0x8)
    class UVehicleSeatComponent* PassengerSeat1;                                      // 0x13B8 (size: 0x8)
    class UVehicleSeatComponent* DriverSeat0;                                         // 0x13C0 (size: 0x8)
    class USeatExitComponent* PassengerExit;                                          // 0x13C8 (size: 0x8)
    class USeatExitComponent* DriverExit0;                                            // 0x13D0 (size: 0x8)
    class USeatTriggerComponent* PassengerTrigger;                                    // 0x13D8 (size: 0x8)
    class USeatTriggerComponent* DriverTrigger;                                       // 0x13E0 (size: 0x8)
    class USpotLightComponent* SpotLight_L;                                           // 0x13E8 (size: 0x8)
    class USpotLightComponent* SpotLight_R;                                           // 0x13F0 (size: 0x8)
    class UStaticMeshComponent* Light_L;                                              // 0x13F8 (size: 0x8)
    class UStaticMeshComponent* Light_R;                                              // 0x1400 (size: 0x8)
    class UParticleSystemComponent* Exhaust;                                          // 0x1408 (size: 0x8)
    class UAudioComponent* TruckIdle;                                                 // 0x1410 (size: 0x8)
    class UCameraComponent* Camera;                                                   // 0x1418 (size: 0x8)

    void BPOnVehicleOn(bool IsOn);
    void ExecuteUbergraph_BPFlatbedTruck(int32 EntryPoint);
}; // Size: 0x1420

#endif
