#ifndef UE4SS_SDK_BPTrainCombatCarC_HPP
#define UE4SS_SDK_BPTrainCombatCarC_HPP

class ABPTrainCombatCarC_C : public AInfantryRailVehicle
{
    class UCameraComponent* Camera;                                                   // 0x12A0 (size: 0x8)
    class USeatExitComponent* CommanderExit;                                          // 0x12A8 (size: 0x8)
    class USeatTriggerComponent* CommanderTrigger;                                    // 0x12B0 (size: 0x8)
    class UVehicleSeatComponent* CommanderSeat3;                                      // 0x12B8 (size: 0x8)
    class UVehicleSeatComponent* LeftGunner2;                                         // 0x12C0 (size: 0x8)
    class UVehicleSeatComponent* RightGunner1;                                        // 0x12C8 (size: 0x8)
    class USeatExitComponent* LeftGunnerExit;                                         // 0x12D0 (size: 0x8)
    class USeatExitComponent* RightGunnerExit;                                        // 0x12D8 (size: 0x8)
    class USeatExitComponent* MainGunnerExit;                                         // 0x12E0 (size: 0x8)
    class USeatTriggerComponent* MainGunnerTrigger;                                   // 0x12E8 (size: 0x8)
    class UVehicleSeatComponent* MainGunner0;                                         // 0x12F0 (size: 0x8)
    class USeatTriggerComponent* LeftGunnerTrigger;                                   // 0x12F8 (size: 0x8)
    class USeatTriggerComponent* RightGunnerTrigger;                                  // 0x1300 (size: 0x8)
    class UBoxComponent* UseVolume;                                                   // 0x1308 (size: 0x8)

}; // Size: 0x1310

#endif
