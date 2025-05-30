#ifndef UE4SS_SDK_BPDrawbridgeBBuildSite_HPP
#define UE4SS_SDK_BPDrawbridgeBBuildSite_HPP

class ABPDrawbridgeBBuildSite_C : public ADrawbridgeBuildSite
{
    class UBoxComponent* VehicleBlocking2;                                            // 0x07F0 (size: 0x8)
    class UBoxComponent* VehicleBlocking;                                             // 0x07F8 (size: 0x8)
    class UBoxComponent* PawnCheckVolume;                                             // 0x0800 (size: 0x8)
    class UStaticMeshComponent* ReferenceB;                                           // 0x0808 (size: 0x8)
    class UBoxComponent* CollisionB;                                                  // 0x0810 (size: 0x8)
    class UStaticMeshComponent* BridgeScaffoldB;                                      // 0x0818 (size: 0x8)
    class UStaticMeshComponent* ReferenceA;                                           // 0x0820 (size: 0x8)
    class UStaticMeshComponent* BridgeScaffoldA;                                      // 0x0828 (size: 0x8)
    class UBoxComponent* CollisionA;                                                  // 0x0830 (size: 0x8)

}; // Size: 0x838

#endif
