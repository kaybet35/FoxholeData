#ifndef UE4SS_SDK_BPDrawbridgeBBuildSite_HPP
#define UE4SS_SDK_BPDrawbridgeBBuildSite_HPP

class ABPDrawbridgeBBuildSite_C : public ADrawbridgeBuildSite
{
    class UBoxComponent* VehicleBlocking2;                                            // 0x07C0 (size: 0x8)
    class UBoxComponent* VehicleBlocking;                                             // 0x07C8 (size: 0x8)
    class UBoxComponent* PawnCheckVolume;                                             // 0x07D0 (size: 0x8)
    class UStaticMeshComponent* ReferenceB;                                           // 0x07D8 (size: 0x8)
    class UBoxComponent* CollisionB;                                                  // 0x07E0 (size: 0x8)
    class UStaticMeshComponent* BridgeScaffoldB;                                      // 0x07E8 (size: 0x8)
    class UStaticMeshComponent* ReferenceA;                                           // 0x07F0 (size: 0x8)
    class UStaticMeshComponent* BridgeScaffoldA;                                      // 0x07F8 (size: 0x8)
    class UBoxComponent* CollisionA;                                                  // 0x0800 (size: 0x8)

}; // Size: 0x808

#endif
