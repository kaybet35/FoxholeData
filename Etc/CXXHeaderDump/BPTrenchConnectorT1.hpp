#ifndef UE4SS_SDK_BPTrenchConnectorT1_HPP
#define UE4SS_SDK_BPTrenchConnectorT1_HPP

class ABPTrenchConnectorT1_C : public AFortConnector
{
    class UBPStructurePuddleMesh_C* BPStructurePuddleMesh;                            // 0x0800 (size: 0x8)
    class UTemplateComponent* TrenchConnectorCommonT1T2;                              // 0x0808 (size: 0x8)
    class UTemplateComponent* TrenchConnectorCommon;                                  // 0x0810 (size: 0x8)
    class UTemplateComponent* TrenchConnectorCommonMods;                              // 0x0818 (size: 0x8)
    class UStaticMeshComponent* DirtCornerFrontLeft;                                  // 0x0820 (size: 0x8)
    class UStaticMeshComponent* DirtCornerBackLeft;                                   // 0x0828 (size: 0x8)
    class UStaticMeshComponent* DirtCornerBackRight;                                  // 0x0830 (size: 0x8)
    class UStaticMeshComponent* DirtCornerFrontRight;                                 // 0x0838 (size: 0x8)
    class UDecalComponent* DecalRight;                                                // 0x0840 (size: 0x8)
    class UDecalComponent* DecalLeft;                                                 // 0x0848 (size: 0x8)
    class UDecalComponent* DecalBack;                                                 // 0x0850 (size: 0x8)
    class UDecalComponent* DecalFront;                                                // 0x0858 (size: 0x8)
    class UStaticMeshComponent* CornerFrontRight;                                     // 0x0860 (size: 0x8)
    class UStaticMeshComponent* CornerFrontLeft;                                      // 0x0868 (size: 0x8)
    class UStaticMeshComponent* CornerBackLeft;                                       // 0x0870 (size: 0x8)
    class UStaticMeshComponent* CornerBackRight;                                      // 0x0878 (size: 0x8)
    class UStaticMeshComponent* WallRight;                                            // 0x0880 (size: 0x8)
    class UStaticMeshComponent* Floor;                                                // 0x0888 (size: 0x8)
    class UStaticMeshComponent* WallLeft;                                             // 0x0890 (size: 0x8)
    class UStaticMeshComponent* WallBack;                                             // 0x0898 (size: 0x8)
    class UStaticMeshComponent* WallFront;                                            // 0x08A0 (size: 0x8)

}; // Size: 0x8A8

#endif
