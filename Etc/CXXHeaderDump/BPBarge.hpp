#ifndef UE4SS_SDK_BPBarge_HPP
#define UE4SS_SDK_BPBarge_HPP

class ABPBarge_C : public ABarge
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x13C0 (size: 0x8)
    class UBPEnterVehicleUseComponent_C* BPEnterVehicleUseComponent;                  // 0x13C8 (size: 0x8)
    class UBPShippableUseComponent_C* BPShippableUseComponent;                        // 0x13D0 (size: 0x8)
    class USeatExitComponent* DriverExit0;                                            // 0x13D8 (size: 0x8)
    class USeatTriggerComponent* DriverTrigger;                                       // 0x13E0 (size: 0x8)
    class UVehicleSeatComponent* DriverSeat0;                                         // 0x13E8 (size: 0x8)
    class USpotLightComponent* SpotLight2;                                            // 0x13F0 (size: 0x8)
    class UStaticMeshComponent* Light3;                                               // 0x13F8 (size: 0x8)
    class UStaticMeshComponent* Light2;                                               // 0x1400 (size: 0x8)
    class USpotLightComponent* SpotLight1;                                            // 0x1408 (size: 0x8)
    class USpotLightComponent* SpotLight;                                             // 0x1410 (size: 0x8)
    class UStaticMeshComponent* Light1;                                               // 0x1418 (size: 0x8)
    class USceneComponent* Ramp End (Editor Only);                                    // 0x1420 (size: 0x8)
    class USceneComponent* Ramp Start (Editor Only);                                  // 0x1428 (size: 0x8)
    class UAudioComponent* Idle;                                                      // 0x1430 (size: 0x8)
    class UCameraComponent* Camera;                                                   // 0x1438 (size: 0x8)

    void BPOnVehicleOn(bool IsOn);
    void ExecuteUbergraph_BPBarge(int32 EntryPoint);
}; // Size: 0x1440

#endif
