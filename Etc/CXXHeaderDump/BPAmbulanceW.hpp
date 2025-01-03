#ifndef UE4SS_SDK_BPAmbulanceW_HPP
#define UE4SS_SDK_BPAmbulanceW_HPP

class ABPAmbulanceW_C : public AAmbulance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x1290 (size: 0x8)
    class USkeletalMeshComponent* SK_AmbulanceWBody;                                  // 0x1298 (size: 0x8)
    class USeatExitComponent* PassengerExit;                                          // 0x12A0 (size: 0x8)
    class USeatExitComponent* DriverExit0;                                            // 0x12A8 (size: 0x8)
    class USeatTriggerComponent* BackTrigger;                                         // 0x12B0 (size: 0x8)
    class USeatTriggerComponent* PassengerTrigger;                                    // 0x12B8 (size: 0x8)
    class USeatTriggerComponent* DriverTrigger;                                       // 0x12C0 (size: 0x8)
    class UVehicleSeatComponent* PassengerSeat1;                                      // 0x12C8 (size: 0x8)
    class UVehicleSeatComponent* DriverSeat0;                                         // 0x12D0 (size: 0x8)
    class USpotLightComponent* SpotLight_L;                                           // 0x12D8 (size: 0x8)
    class UPointLightComponent* LightRear_R;                                          // 0x12E0 (size: 0x8)
    class UStaticMeshComponent* RearLight_R;                                          // 0x12E8 (size: 0x8)
    class UStaticMeshComponent* Light_L;                                              // 0x12F0 (size: 0x8)
    class UAudioComponent* TruckIdle;                                                 // 0x12F8 (size: 0x8)
    class UParticleSystemComponent* Exhaust;                                          // 0x1300 (size: 0x8)
    class UCameraComponent* Camera;                                                   // 0x1308 (size: 0x8)

    void BPOnVehicleOn(bool IsOn);
    void ExecuteUbergraph_BPAmbulanceW(int32 EntryPoint);
}; // Size: 0x1310

#endif
