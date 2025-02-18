#ifndef UE4SS_SDK_BPTrainBridgeABuildSite_HPP
#define UE4SS_SDK_BPTrainBridgeABuildSite_HPP

class ABPTrainBridgeABuildSite_C : public ADrawbridgeBuildSite
{
    class UStaticMeshComponent* BridgeScaffoldB;                                      // 0x07C0 (size: 0x8)
    class UStaticMeshComponent* BridgeScaffoldA;                                      // 0x07C8 (size: 0x8)
    class UBoxComponent* CollisionB;                                                  // 0x07D0 (size: 0x8)
    class UBoxComponent* CollisionA;                                                  // 0x07D8 (size: 0x8)
    class UStaticMeshComponent* SideB1;                                               // 0x07E0 (size: 0x8)
    class UStaticMeshComponent* SideA1;                                               // 0x07E8 (size: 0x8)
    class UBoxComponent* SuspendedBuildSurface;                                       // 0x07F0 (size: 0x8)
    class UBoxComponent* VehicleBlocking2;                                            // 0x07F8 (size: 0x8)
    class UBoxComponent* VehicleBlocking;                                             // 0x0800 (size: 0x8)
    class UStaticMeshComponent* SideB;                                                // 0x0808 (size: 0x8)
    class UStaticMeshComponent* SideA;                                                // 0x0810 (size: 0x8)

}; // Size: 0x818

#endif
