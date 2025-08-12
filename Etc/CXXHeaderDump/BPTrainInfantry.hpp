#ifndef UE4SS_SDK_BPTrainInfantry_HPP
#define UE4SS_SDK_BPTrainInfantry_HPP

class ABPTrainInfantry_C : public AInfantryRailVehicle
{
    class UVehicleSeatComponent* PassengerSeat5;                                      // 0x12D0 (size: 0x8)
    class UVehicleSeatComponent* PassengerSeat4;                                      // 0x12D8 (size: 0x8)
    class UVehicleSeatComponent* PassengerSeat3;                                      // 0x12E0 (size: 0x8)
    class UVehicleSeatComponent* PassengerSeat2;                                      // 0x12E8 (size: 0x8)
    class USeatExitComponent* LeftExit;                                               // 0x12F0 (size: 0x8)
    class USeatExitComponent* RightExit;                                              // 0x12F8 (size: 0x8)
    class USeatTriggerComponent* LeftTrigger;                                         // 0x1300 (size: 0x8)
    class USeatTriggerComponent* RightTrigger;                                        // 0x1308 (size: 0x8)
    class UVehicleSeatComponent* LeftGunnerSeat;                                      // 0x1310 (size: 0x8)
    class UVehicleSeatComponent* RightGunnerSeat;                                     // 0x1318 (size: 0x8)
    class UBoxComponent* UseVolume;                                                   // 0x1320 (size: 0x8)

}; // Size: 0x1328

#endif
