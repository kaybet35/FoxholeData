#ifndef UE4SS_SDK_BPLandingCraftBase_HPP
#define UE4SS_SDK_BPLandingCraftBase_HPP

class ABPLandingCraftBase_C : public ALandingCraft
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x12E0 (size: 0x8)
    class UBoatHullComponent* BoatHull;                                               // 0x12E8 (size: 0x8)
    class UVehicleSeatComponent* PassengerSeat1;                                      // 0x12F0 (size: 0x8)
    class UVehicleSeatComponent* DriverSeat0;                                         // 0x12F8 (size: 0x8)
    class USeatExitComponent* PassengerExit;                                          // 0x1300 (size: 0x8)
    class USeatExitComponent* DriverExit0;                                            // 0x1308 (size: 0x8)
    class USeatTriggerComponent* PassengerTrigger;                                    // 0x1310 (size: 0x8)
    class USeatTriggerComponent* DriverTrigger;                                       // 0x1318 (size: 0x8)
    class UBPWaterStencilComponent_C* BPWaterStencilComponent;                        // 0x1320 (size: 0x8)
    class UAudioComponent* idle;                                                      // 0x1328 (size: 0x8)
    class UCameraComponent* Camera;                                                   // 0x1330 (size: 0x8)

    void BPOnVehicleOn(bool IsOn);
    void ExecuteUbergraph_BPLandingCraftBase(int32 EntryPoint);
}; // Size: 0x1338

#endif
