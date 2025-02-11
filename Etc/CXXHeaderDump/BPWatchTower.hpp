#ifndef UE4SS_SDK_BPWatchTower_HPP
#define UE4SS_SDK_BPWatchTower_HPP

class ABPWatchTower_C : public AWatchTower
{
    class UDecalComponent* Decal;                                                     // 0x0810 (size: 0x8)
    class UMultiplexedStaticMeshComponent* MultiplexedStaticMesh;                     // 0x0818 (size: 0x8)
    class UBoxComponent* Box;                                                         // 0x0820 (size: 0x8)
    class UStaticMeshComponent* WatchTowerMesh;                                       // 0x0828 (size: 0x8)

}; // Size: 0x830

#endif
