#ifndef UE4SS_SDK_BPLandingShipBaseW_HPP
#define UE4SS_SDK_BPLandingShipBaseW_HPP

class ABPLandingShipBaseW_C : public ABPLandingShipBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x1570 (size: 0x8)
    class UBoxComponent* NoVehicleVolume;                                             // 0x1578 (size: 0x8)
    class UVehicleSeatComponent* DriverSeat0;                                         // 0x1580 (size: 0x8)
    class UParticleSystemComponent* Exhaust1;                                         // 0x1588 (size: 0x8)

    void BPOnVehicleOn(bool IsOn);
    void ExecuteUbergraph_BPLandingShipBaseW(int32 EntryPoint);
}; // Size: 0x1590

#endif
