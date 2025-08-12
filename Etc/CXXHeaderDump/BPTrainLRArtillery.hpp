#ifndef UE4SS_SDK_BPTrainLRArtillery_HPP
#define UE4SS_SDK_BPTrainLRArtillery_HPP

class ABPTrainLRArtillery_C : public AArtilleryRailVehicle
{
    class UVehicleSeatComponent* GunnerSeat;                                          // 0x1310 (size: 0x8)
    class UBoxComponent* RearBogieCollision;                                          // 0x1318 (size: 0x8)
    class UBoxComponent* FrontBogieCollision;                                         // 0x1320 (size: 0x8)
    class USeatExitComponent* LeftExit;                                               // 0x1328 (size: 0x8)
    class USeatExitComponent* RightExit;                                              // 0x1330 (size: 0x8)
    class USeatTriggerComponent* RightTrigger;                                        // 0x1338 (size: 0x8)
    class UBoxComponent* UseVolume;                                                   // 0x1340 (size: 0x8)

}; // Size: 0x1348

#endif
