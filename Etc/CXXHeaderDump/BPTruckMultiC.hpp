#ifndef UE4SS_SDK_BPTruckMultiC_HPP
#define UE4SS_SDK_BPTruckMultiC_HPP

class ABPTruckMultiC_C : public ATransportTruck
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x1340 (size: 0x8)
    class UAudioComponent* TruckIdle;                                                 // 0x1348 (size: 0x8)
    class UParticleSystemComponent* Exhaust;                                          // 0x1350 (size: 0x8)
    class UStaticMeshComponent* Light_L;                                              // 0x1358 (size: 0x8)
    class UStaticMeshComponent* Light_R;                                              // 0x1360 (size: 0x8)
    class USpotLightComponent* SpotLight_L;                                           // 0x1368 (size: 0x8)
    class USpotLightComponent* SpotLight_R;                                           // 0x1370 (size: 0x8)
    class UPointLightComponent* LightRear_L;                                          // 0x1378 (size: 0x8)
    class UPointLightComponent* LightRear_R;                                          // 0x1380 (size: 0x8)
    class UStaticMeshComponent* RearLight_L;                                          // 0x1388 (size: 0x8)
    class UStaticMeshComponent* RearLight_R;                                          // 0x1390 (size: 0x8)
    class UPayloadInstancedStaticMeshComponent* PayloadInstancedStaticMesh;           // 0x1398 (size: 0x8)
    class UCameraComponent* Camera;                                                   // 0x13A0 (size: 0x8)
    class USeatTriggerComponent* PassengerTrigger;                                    // 0x13A8 (size: 0x8)
    class USeatExitComponent* PassengerExit;                                          // 0x13B0 (size: 0x8)
    class USeatTriggerComponent* DriverTrigger;                                       // 0x13B8 (size: 0x8)
    class USeatExitComponent* DriverExit0;                                            // 0x13C0 (size: 0x8)
    class UVehicleSeatComponent* DriverSeat0;                                         // 0x13C8 (size: 0x8)
    class UVehicleSeatComponent* PassengerSeat1;                                      // 0x13D0 (size: 0x8)

    void BPOnVehicleOn(bool IsOn);
    void ExecuteUbergraph_BPTruckMultiC(int32 EntryPoint);
}; // Size: 0x13D8

#endif
