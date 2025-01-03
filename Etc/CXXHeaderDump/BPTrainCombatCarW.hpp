#ifndef UE4SS_SDK_BPTrainCombatCarW_HPP
#define UE4SS_SDK_BPTrainCombatCarW_HPP

class ABPTrainCombatCarW_C : public AInfantryRailVehicle
{
    class USeatExitComponent* PassengerSeat1Exit;                                     // 0x12A0 (size: 0x8)
    class USeatExitComponent* PassengerSeat2Exit;                                     // 0x12A8 (size: 0x8)
    class USeatTriggerComponent* PassengerSeat1Trigger;                               // 0x12B0 (size: 0x8)
    class USeatTriggerComponent* PassengerSeat2Trigger;                               // 0x12B8 (size: 0x8)
    class UVehicleSeatComponent* PassengerSeat5;                                      // 0x12C0 (size: 0x8)
    class UVehicleSeatComponent* PassengerSeat4;                                      // 0x12C8 (size: 0x8)
    class USeatTriggerComponent* CommanderSeat2Trigger;                               // 0x12D0 (size: 0x8)
    class USeatTriggerComponent* CommanderSeat1Trigger;                               // 0x12D8 (size: 0x8)
    class USeatExitComponent* CommanderSeat2Exit;                                     // 0x12E0 (size: 0x8)
    class USeatExitComponent* CommanderSeat1Exit;                                     // 0x12E8 (size: 0x8)
    class UVehicleSeatComponent* PassengerSeat3;                                      // 0x12F0 (size: 0x8)
    class UVehicleSeatComponent* PassengerSeat2;                                      // 0x12F8 (size: 0x8)
    class UVehicleSeatComponent* RearGunner1;                                         // 0x1300 (size: 0x8)
    class UVehicleSeatComponent* MainGunner0;                                         // 0x1308 (size: 0x8)
    class UCameraComponent* Camera;                                                   // 0x1310 (size: 0x8)
    class USeatExitComponent* RearGunnerExit;                                         // 0x1318 (size: 0x8)
    class USeatExitComponent* MainGunnerExit;                                         // 0x1320 (size: 0x8)
    class USeatTriggerComponent* RearGunnerTrigger;                                   // 0x1328 (size: 0x8)
    class USeatTriggerComponent* MainGunnerTrigger;                                   // 0x1330 (size: 0x8)
    class UBoxComponent* UseVolume;                                                   // 0x1338 (size: 0x8)

}; // Size: 0x1340

#endif
