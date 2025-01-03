#ifndef UE4SS_SDK_BPLargeCrane_HPP
#define UE4SS_SDK_BPLargeCrane_HPP

class ABPLargeCrane_C : public ARailVehicleCrane
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x1240 (size: 0x8)
    class UParticleSystemComponent* Exhaust;                                          // 0x1248 (size: 0x8)
    class UBoxComponent* RightLegWheelCollision;                                      // 0x1250 (size: 0x8)
    class UBoxComponent* LeftLegWheelCollision;                                       // 0x1258 (size: 0x8)
    class UBoxComponent* LeftLegCollision;                                            // 0x1260 (size: 0x8)
    class UBoxComponent* RightLegCollision;                                           // 0x1268 (size: 0x8)
    class USeatExitComponent* PassengerExit;                                          // 0x1270 (size: 0x8)
    class USeatExitComponent* DriverExit;                                             // 0x1278 (size: 0x8)
    class USeatTriggerComponent* PassengerTrigger;                                    // 0x1280 (size: 0x8)
    class UVehicleSeatComponent* PassengerSeat1;                                      // 0x1288 (size: 0x8)
    class USeatTriggerComponent* DriverTrigger;                                       // 0x1290 (size: 0x8)
    class UCameraComponent* Camera;                                                   // 0x1298 (size: 0x8)
    class UVehicleSeatComponent* DriverSeat0;                                         // 0x12A0 (size: 0x8)

    void BPOnVehicleOn(bool IsOn);
    void ExecuteUbergraph_BPLargeCrane(int32 EntryPoint);
}; // Size: 0x12A8

#endif
