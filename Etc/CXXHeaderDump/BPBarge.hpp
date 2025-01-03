#ifndef UE4SS_SDK_BPBarge_HPP
#define UE4SS_SDK_BPBarge_HPP

class ABPBarge_C : public ABarge
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x1360 (size: 0x8)
    class UBPEnterVehicleUseComponent_C* BPEnterVehicleUseComponent;                  // 0x1368 (size: 0x8)
    class UBPShippableUseComponent_C* BPShippableUseComponent;                        // 0x1370 (size: 0x8)
    class USeatExitComponent* DriverExit0;                                            // 0x1378 (size: 0x8)
    class USeatTriggerComponent* DriverTrigger;                                       // 0x1380 (size: 0x8)
    class UVehicleSeatComponent* DriverSeat0;                                         // 0x1388 (size: 0x8)
    class USpotLightComponent* SpotLight2;                                            // 0x1390 (size: 0x8)
    class UStaticMeshComponent* Light3;                                               // 0x1398 (size: 0x8)
    class UStaticMeshComponent* Light2;                                               // 0x13A0 (size: 0x8)
    class USpotLightComponent* SpotLight1;                                            // 0x13A8 (size: 0x8)
    class USpotLightComponent* SpotLight;                                             // 0x13B0 (size: 0x8)
    class UStaticMeshComponent* Light1;                                               // 0x13B8 (size: 0x8)
    class USceneComponent* Ramp End (Editor Only);                                    // 0x13C0 (size: 0x8)
    class USceneComponent* Ramp Start (Editor Only);                                  // 0x13C8 (size: 0x8)
    class UAudioComponent* Idle;                                                      // 0x13D0 (size: 0x8)
    class UCameraComponent* Camera;                                                   // 0x13D8 (size: 0x8)

    void BPOnVehicleOn(bool IsOn);
    void ExecuteUbergraph_BPBarge(int32 EntryPoint);
}; // Size: 0x13E0

#endif
