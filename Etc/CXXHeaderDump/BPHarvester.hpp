#ifndef UE4SS_SDK_BPHarvester_HPP
#define UE4SS_SDK_BPHarvester_HPP

class ABPHarvester_C : public AHarvester
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x1340 (size: 0x8)
    class UStaticMeshComponent* Node10;                                               // 0x1348 (size: 0x8)
    class UStaticMeshComponent* Node09;                                               // 0x1350 (size: 0x8)
    class UStaticMeshComponent* Node08;                                               // 0x1358 (size: 0x8)
    class UStaticMeshComponent* Node07;                                               // 0x1360 (size: 0x8)
    class UStaticMeshComponent* Node06;                                               // 0x1368 (size: 0x8)
    class UStaticMeshComponent* Node05;                                               // 0x1370 (size: 0x8)
    class UStaticMeshComponent* Node04;                                               // 0x1378 (size: 0x8)
    class UStaticMeshComponent* Node03;                                               // 0x1380 (size: 0x8)
    class UStaticMeshComponent* Node02;                                               // 0x1388 (size: 0x8)
    class UStaticMeshComponent* Node01;                                               // 0x1390 (size: 0x8)
    class UStaticMeshComponent* Node00;                                               // 0x1398 (size: 0x8)
    class UBPResourceGroupRenderComponent_C* BPResourceGroupRenderComponent;          // 0x13A0 (size: 0x8)
    class UVehicleSeatComponent* PassengerSeat1;                                      // 0x13A8 (size: 0x8)
    class UVehicleSeatComponent* DriverSeat0;                                         // 0x13B0 (size: 0x8)
    class USeatExitComponent* PassengerExit;                                          // 0x13B8 (size: 0x8)
    class USeatExitComponent* DriverExit0;                                            // 0x13C0 (size: 0x8)
    class USeatTriggerComponent* PassengerTrigger;                                    // 0x13C8 (size: 0x8)
    class USeatTriggerComponent* DriverTrigger;                                       // 0x13D0 (size: 0x8)
    class USpotLightComponent* SpotLight_R;                                           // 0x13D8 (size: 0x8)
    class USpotLightComponent* SpotLight_L;                                           // 0x13E0 (size: 0x8)
    class UStaticMeshComponent* Light_R;                                              // 0x13E8 (size: 0x8)
    class UStaticMeshComponent* Light_L;                                              // 0x13F0 (size: 0x8)
    class UParticleSystemComponent* Exhaust;                                          // 0x13F8 (size: 0x8)
    class UAudioComponent* VehicleIdle;                                               // 0x1400 (size: 0x8)
    class UCameraComponent* Camera;                                                   // 0x1408 (size: 0x8)

    void BPOnVehicleOn(bool IsOn);
    void ExecuteUbergraph_BPHarvester(int32 EntryPoint);
}; // Size: 0x1410

#endif
