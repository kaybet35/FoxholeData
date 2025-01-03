#ifndef UE4SS_SDK_BPTrainLRArtillery_HPP
#define UE4SS_SDK_BPTrainLRArtillery_HPP

class ABPTrainLRArtillery_C : public AArtilleryRailVehicle
{
    class UVehicleSeatComponent* GunnerSeat;                                          // 0x12E0 (size: 0x8)
    class UBoxComponent* RearBogieCollision;                                          // 0x12E8 (size: 0x8)
    class UBoxComponent* FrontBogieCollision;                                         // 0x12F0 (size: 0x8)
    class USeatExitComponent* LeftExit;                                               // 0x12F8 (size: 0x8)
    class USeatExitComponent* RightExit;                                              // 0x1300 (size: 0x8)
    class USeatTriggerComponent* RightTrigger;                                        // 0x1308 (size: 0x8)
    class UBoxComponent* UseVolume;                                                   // 0x1310 (size: 0x8)

}; // Size: 0x1318

#endif
