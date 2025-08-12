#ifndef UE4SS_SDK_BPTanketteC_HPP
#define UE4SS_SDK_BPTanketteC_HPP

class ABPTanketteC_C : public ABPTanketteBaseC_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x1390 (size: 0x8)
    class USeatExitComponent* GunnerExit;                                             // 0x1398 (size: 0x8)
    class USeatTriggerComponent* GunnerTrigger;                                       // 0x13A0 (size: 0x8)
    class UVehicleSeatComponent* GunnerSeat1;                                         // 0x13A8 (size: 0x8)
    class USeatExitComponent* PassengerExit;                                          // 0x13B0 (size: 0x8)
    class USeatTriggerComponent* PassengerTrigger;                                    // 0x13B8 (size: 0x8)
    class UVehicleSeatComponent* PassengerSeat3;                                      // 0x13C0 (size: 0x8)
    class UVehicleSeatComponent* PassengerSeat2;                                      // 0x13C8 (size: 0x8)

    void BPOnVehicleOn(bool IsOn);
    void ExecuteUbergraph_BPTanketteC(int32 EntryPoint);
}; // Size: 0x13D0

#endif
