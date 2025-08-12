#ifndef UE4SS_SDK_BPScoutVehicleUtilityW_HPP
#define UE4SS_SDK_BPScoutVehicleUtilityW_HPP

class ABPScoutVehicleUtilityW_C : public AAmphibiousVehicle
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x12E0 (size: 0x8)
    class UParticleSystemComponent* Exhaust;                                          // 0x12E8 (size: 0x8)
    class UBPWaterStencilComponent_C* BPWaterStencilComponent;                        // 0x12F0 (size: 0x8)
    class UCameraComponent* Camera;                                                   // 0x12F8 (size: 0x8)
    class UVehicleSeatComponent* PassengerSeat3;                                      // 0x1300 (size: 0x8)
    class UVehicleSeatComponent* PassengerSeat2;                                      // 0x1308 (size: 0x8)
    class USeatExitComponent* PassengerExit3;                                         // 0x1310 (size: 0x8)
    class USeatTriggerComponent* PassengerTrigger3;                                   // 0x1318 (size: 0x8)
    class USeatTriggerComponent* PassengerTrigger2;                                   // 0x1320 (size: 0x8)
    class USeatExitComponent* PassengerExit2;                                         // 0x1328 (size: 0x8)
    class USeatExitComponent* DriverExit;                                             // 0x1330 (size: 0x8)
    class USeatTriggerComponent* PassengerTrigger1;                                   // 0x1338 (size: 0x8)
    class USeatTriggerComponent* DriverTrigger;                                       // 0x1340 (size: 0x8)
    class USeatExitComponent* PassengerExit1;                                         // 0x1348 (size: 0x8)
    class UVehicleSeatComponent* PassengerSeat1;                                      // 0x1350 (size: 0x8)
    class UVehicleSeatComponent* DriverSeat0;                                         // 0x1358 (size: 0x8)
    class USpotLightComponent* SpotLight_R;                                           // 0x1360 (size: 0x8)
    class UStaticMeshComponent* Light_R;                                              // 0x1368 (size: 0x8)

    void BPOnVehicleOn(bool IsOn);
    void ExecuteUbergraph_BPScoutVehicleUtilityW(int32 EntryPoint);
}; // Size: 0x1370

#endif
