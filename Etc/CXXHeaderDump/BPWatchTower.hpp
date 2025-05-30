#ifndef UE4SS_SDK_BPWatchTower_HPP
#define UE4SS_SDK_BPWatchTower_HPP

class ABPWatchTower_C : public AWatchTower
{
    class UDecalComponent* Decal;                                                     // 0x0840 (size: 0x8)
    class UMultiplexedStaticMeshComponent* MultiplexedStaticMesh;                     // 0x0848 (size: 0x8)
    class UBoxComponent* Box;                                                         // 0x0850 (size: 0x8)
    class UStaticMeshComponent* WatchTowerMesh;                                       // 0x0858 (size: 0x8)

}; // Size: 0x860

#endif
