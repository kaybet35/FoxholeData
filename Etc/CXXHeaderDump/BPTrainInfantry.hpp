#ifndef UE4SS_SDK_BPTrainInfantry_HPP
#define UE4SS_SDK_BPTrainInfantry_HPP

class ABPTrainInfantry_C : public AInfantryRailVehicle
{
    class UVehicleSeatComponent* PassengerSeat5;                                      // 0x12A0 (size: 0x8)
    class UVehicleSeatComponent* PassengerSeat4;                                      // 0x12A8 (size: 0x8)
    class UVehicleSeatComponent* PassengerSeat3;                                      // 0x12B0 (size: 0x8)
    class UVehicleSeatComponent* PassengerSeat2;                                      // 0x12B8 (size: 0x8)
    class USeatExitComponent* LeftExit;                                               // 0x12C0 (size: 0x8)
    class USeatExitComponent* RightExit;                                              // 0x12C8 (size: 0x8)
    class USeatTriggerComponent* LeftTrigger;                                         // 0x12D0 (size: 0x8)
    class USeatTriggerComponent* RightTrigger;                                        // 0x12D8 (size: 0x8)
    class UVehicleSeatComponent* LeftGunnerSeat;                                      // 0x12E0 (size: 0x8)
    class UVehicleSeatComponent* RightGunnerSeat;                                     // 0x12E8 (size: 0x8)
    class UBoxComponent* UseVolume;                                                   // 0x12F0 (size: 0x8)

}; // Size: 0x12F8

#endif
