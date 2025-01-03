#ifndef UE4SS_SDK_BPAmbulanceFlameW_HPP
#define UE4SS_SDK_BPAmbulanceFlameW_HPP

class ABPAmbulanceFlameW_C : public AScoutVehicle
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x12B0 (size: 0x8)
    class UCameraComponent* Camera;                                                   // 0x12B8 (size: 0x8)
    class UVehicleSeatComponent* GunnerSeat2;                                         // 0x12C0 (size: 0x8)
    class USeatTriggerComponent* PassengerTrigger;                                    // 0x12C8 (size: 0x8)
    class USeatTriggerComponent* DriverTrigger;                                       // 0x12D0 (size: 0x8)
    class USeatExitComponent* PassengerExit;                                          // 0x12D8 (size: 0x8)
    class USeatExitComponent* DriverExit0;                                            // 0x12E0 (size: 0x8)
    class USeatTriggerComponent* BackTrigger;                                         // 0x12E8 (size: 0x8)
    class UVehicleSeatComponent* PassengerSeat1;                                      // 0x12F0 (size: 0x8)
    class UVehicleSeatComponent* DriverSeat0;                                         // 0x12F8 (size: 0x8)
    class USpotLightComponent* SpotLight_L;                                           // 0x1300 (size: 0x8)
    class UPointLightComponent* LightRear_R;                                          // 0x1308 (size: 0x8)
    class UStaticMeshComponent* RearLight_R;                                          // 0x1310 (size: 0x8)
    class UStaticMeshComponent* Light_L;                                              // 0x1318 (size: 0x8)
    class UParticleSystemComponent* Exhaust;                                          // 0x1320 (size: 0x8)
    class USeatExitComponent* BackExit;                                               // 0x1328 (size: 0x8)
    class USkeletalMeshComponent* chassis;                                            // 0x1330 (size: 0x8)

    void BPOnVehicleOn(bool IsOn);
    void ExecuteUbergraph_BPAmbulanceFlameW(int32 EntryPoint);
}; // Size: 0x1338

#endif
