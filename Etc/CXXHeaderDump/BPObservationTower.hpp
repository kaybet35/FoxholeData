#ifndef UE4SS_SDK_BPObservationTower_HPP
#define UE4SS_SDK_BPObservationTower_HPP

class ABPObservationTower_C : public AObservationTower
{
    class UTeamFlagMeshComponent* TeamFlagMesh3;                                      // 0x0810 (size: 0x8)
    class UTeamFlagMeshComponent* TeamFlagMesh2;                                      // 0x0818 (size: 0x8)
    class UTeamFlagMeshComponent* TeamFlagMesh1;                                      // 0x0820 (size: 0x8)
    class UTeamFlagMeshComponent* TeamFlagMesh4;                                      // 0x0828 (size: 0x8)
    class USkeletalMeshComponent* SK_ObservationTowerRadar;                           // 0x0830 (size: 0x8)
    class USeatTriggerComponent* SeatTrigger;                                         // 0x0838 (size: 0x8)
    class USeatExitComponent* SeatExit;                                               // 0x0840 (size: 0x8)
    class UStructureSeatComponent* StructureSeat0;                                    // 0x0848 (size: 0x8)
    class UDecalComponent* Decal;                                                     // 0x0850 (size: 0x8)
    class UMultiplexedStaticMeshComponent* MultiplexedStaticMesh;                     // 0x0858 (size: 0x8)
    class UStaticMeshComponent* WatchTowerMesh;                                       // 0x0860 (size: 0x8)

}; // Size: 0x868

#endif
