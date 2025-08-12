#ifndef UE4SS_SDK_BPLightTankArtilleryW_HPP
#define UE4SS_SDK_BPLightTankArtilleryW_HPP

class ABPLightTankArtilleryW_C : public ABPLightTankBaseW_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x13E0 (size: 0x8)
    class UVehicleSeatComponent* PassengerSeat2;                                      // 0x13E8 (size: 0x8)
    class UVehicleSeatComponent* GunnerSeat1;                                         // 0x13F0 (size: 0x8)

    void BPOnVehicleOn(bool IsOn);
    void ExecuteUbergraph_BPLightTankArtilleryW(int32 EntryPoint);
}; // Size: 0x13F8

#endif
