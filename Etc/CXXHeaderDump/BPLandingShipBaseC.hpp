#ifndef UE4SS_SDK_BPLandingShipBaseC_HPP
#define UE4SS_SDK_BPLandingShipBaseC_HPP

class ABPLandingShipBaseC_C : public ABPLandingShipBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x1570 (size: 0x8)
    class USeatExitComponent* Passenger1Exit;                                         // 0x1578 (size: 0x8)
    class UBoxComponent* NoVehicleVolume;                                             // 0x1580 (size: 0x8)
    class UParticleSystemComponent* Exhaust2;                                         // 0x1588 (size: 0x8)
    class UParticleSystemComponent* Exhaust1;                                         // 0x1590 (size: 0x8)
    class UVehicleSeatComponent* PassengerSeat1;                                      // 0x1598 (size: 0x8)
    class UVehicleSeatComponent* DriverSeat0;                                         // 0x15A0 (size: 0x8)
    class USeatTriggerComponent* PassengerTrigger;                                    // 0x15A8 (size: 0x8)

    void BPOnVehicleOn(bool IsOn);
    void ExecuteUbergraph_BPLandingShipBaseC(int32 EntryPoint);
}; // Size: 0x15B0

#endif
