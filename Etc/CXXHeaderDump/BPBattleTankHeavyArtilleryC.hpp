#ifndef UE4SS_SDK_BPBattleTankHeavyArtilleryC_HPP
#define UE4SS_SDK_BPBattleTankHeavyArtilleryC_HPP

class ABPBattleTankHeavyArtilleryC_C : public ABattleTankATCBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x1428 (size: 0x8)
    class UVehicleSeatComponent* PassengerSeat6;                                      // 0x1430 (size: 0x8)
    class UVehicleSeatComponent* PassengerSeat5;                                      // 0x1438 (size: 0x8)
    class UVehicleSeatComponent* PassengerSeat4;                                      // 0x1440 (size: 0x8)
    class UVehicleSeatComponent* PassengerSeat3;                                      // 0x1448 (size: 0x8)
    class USeatExitComponent* PassengerExitRight;                                     // 0x1450 (size: 0x8)
    class USeatTriggerComponent* PassengerTriggerRight;                               // 0x1458 (size: 0x8)

    void BPOnVehicleOn(bool IsOn);
    void ExecuteUbergraph_BPBattleTankHeavyArtilleryC(int32 EntryPoint);
}; // Size: 0x1460

#endif
