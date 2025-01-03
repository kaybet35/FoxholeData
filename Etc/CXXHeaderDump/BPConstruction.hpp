#ifndef UE4SS_SDK_BPConstruction_HPP
#define UE4SS_SDK_BPConstruction_HPP

class ABPConstruction_C : public AConstructionVehicle
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x12E0 (size: 0x8)
    class USpotLightComponent* SpotLight;                                             // 0x12E8 (size: 0x8)
    class UStaticMeshComponent* FrontLight;                                           // 0x12F0 (size: 0x8)
    class UVehicleSeatComponent* PassengerSeat1;                                      // 0x12F8 (size: 0x8)
    class UVehicleSeatComponent* DriverSeat0;                                         // 0x1300 (size: 0x8)
    class USeatExitComponent* PassengerExit;                                          // 0x1308 (size: 0x8)
    class USeatExitComponent* DriverExit;                                             // 0x1310 (size: 0x8)
    class USeatTriggerComponent* PassengerTrigger;                                    // 0x1318 (size: 0x8)
    class USeatTriggerComponent* DriverTrigger;                                       // 0x1320 (size: 0x8)
    class UCameraComponent* Camera;                                                   // 0x1328 (size: 0x8)

    void BPOnVehicleOn(bool IsOn);
    void ExecuteUbergraph_BPConstruction(int32 EntryPoint);
}; // Size: 0x1330

#endif
