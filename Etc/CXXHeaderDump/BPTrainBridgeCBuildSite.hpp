#ifndef UE4SS_SDK_BPTrainBridgeCBuildSite_HPP
#define UE4SS_SDK_BPTrainBridgeCBuildSite_HPP

class ABPTrainBridgeCBuildSite_C : public ADrawbridgeBuildSite
{
    class UStaticMeshComponent* BridgeScaffoldB;                                      // 0x07D0 (size: 0x8)
    class UStaticMeshComponent* BridgeScaffoldA;                                      // 0x07D8 (size: 0x8)
    class UBoxComponent* CollisionB;                                                  // 0x07E0 (size: 0x8)
    class UBoxComponent* CollisionA;                                                  // 0x07E8 (size: 0x8)
    class UStaticMeshComponent* SideB2;                                               // 0x07F0 (size: 0x8)
    class UStaticMeshComponent* SideA2;                                               // 0x07F8 (size: 0x8)
    class UStaticMeshComponent* SideB1;                                               // 0x0800 (size: 0x8)
    class UStaticMeshComponent* SideA1;                                               // 0x0808 (size: 0x8)
    class UBoxComponent* SuspendedBuildSurface;                                       // 0x0810 (size: 0x8)
    class UBoxComponent* BelowBlockingB;                                              // 0x0818 (size: 0x8)
    class UBoxComponent* BelowBlockingA;                                              // 0x0820 (size: 0x8)
    class UBoxComponent* VehicleBlocking2;                                            // 0x0828 (size: 0x8)
    class UBoxComponent* VehicleBlocking;                                             // 0x0830 (size: 0x8)
    class UStaticMeshComponent* SideB;                                                // 0x0838 (size: 0x8)
    class UStaticMeshComponent* SideA;                                                // 0x0840 (size: 0x8)

}; // Size: 0x848

#endif
