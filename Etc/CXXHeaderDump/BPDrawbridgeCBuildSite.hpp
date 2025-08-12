#ifndef UE4SS_SDK_BPDrawbridgeCBuildSite_HPP
#define UE4SS_SDK_BPDrawbridgeCBuildSite_HPP

class ABPDrawbridgeCBuildSite_C : public ADrawbridgeBuildSite
{
    class UBoxComponent* VehicleBlocking2;                                            // 0x0810 (size: 0x8)
    class UBoxComponent* VehicleBlocking;                                             // 0x0818 (size: 0x8)
    class UBoxComponent* BelowBlockingB;                                              // 0x0820 (size: 0x8)
    class UBoxComponent* BelowBlockingA;                                              // 0x0828 (size: 0x8)
    class UBoxComponent* PawnCheckVolume;                                             // 0x0830 (size: 0x8)
    class UStaticMeshComponent* ReferenceB;                                           // 0x0838 (size: 0x8)
    class UBoxComponent* CollisionB;                                                  // 0x0840 (size: 0x8)
    class UStaticMeshComponent* BridgeScaffoldB;                                      // 0x0848 (size: 0x8)
    class UStaticMeshComponent* ReferenceA;                                           // 0x0850 (size: 0x8)
    class UStaticMeshComponent* BridgeScaffoldA;                                      // 0x0858 (size: 0x8)
    class UBoxComponent* CollisionA;                                                  // 0x0860 (size: 0x8)

}; // Size: 0x868

#endif
