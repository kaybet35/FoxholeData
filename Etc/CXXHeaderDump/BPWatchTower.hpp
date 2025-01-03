#ifndef UE4SS_SDK_BPWatchTower_HPP
#define UE4SS_SDK_BPWatchTower_HPP

class ABPWatchTower_C : public AWatchTower
{
    class UDecalComponent* Decal;                                                     // 0x0820 (size: 0x8)
    class UMultiplexedStaticMeshComponent* MultiplexedStaticMesh;                     // 0x0828 (size: 0x8)
    class UBoxComponent* Box;                                                         // 0x0830 (size: 0x8)
    class UStaticMeshComponent* WatchTowerMesh;                                       // 0x0838 (size: 0x8)

}; // Size: 0x840

#endif
