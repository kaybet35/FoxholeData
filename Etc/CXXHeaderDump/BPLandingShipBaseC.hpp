#ifndef UE4SS_SDK_BPLandingShipBaseC_HPP
#define UE4SS_SDK_BPLandingShipBaseC_HPP

class ABPLandingShipBaseC_C : public ABPLandingShipBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x1500 (size: 0x8)
    class USeatExitComponent* Passenger1Exit;                                         // 0x1508 (size: 0x8)
    class UBoxComponent* NoVehicleVolume;                                             // 0x1510 (size: 0x8)
    class UParticleSystemComponent* Exhaust2;                                         // 0x1518 (size: 0x8)
    class UParticleSystemComponent* Exhaust1;                                         // 0x1520 (size: 0x8)
    class UVehicleSeatComponent* PassengerSeat1;                                      // 0x1528 (size: 0x8)
    class UVehicleSeatComponent* DriverSeat0;                                         // 0x1530 (size: 0x8)
    class USeatTriggerComponent* PassengerTrigger;                                    // 0x1538 (size: 0x8)

    void BPOnVehicleOn(bool IsOn);
    void ExecuteUbergraph_BPLandingShipBaseC(int32 EntryPoint);
}; // Size: 0x1540

#endif
