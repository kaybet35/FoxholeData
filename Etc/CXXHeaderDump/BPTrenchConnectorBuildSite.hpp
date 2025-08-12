#ifndef UE4SS_SDK_BPTrenchConnectorBuildSite_HPP
#define UE4SS_SDK_BPTrenchConnectorBuildSite_HPP

class ABPTrenchConnectorBuildSite_C : public AFortConnectorBuildSite
{
    class UBoxComponent* FrontWorkBox;                                                // 0x0800 (size: 0x8)
    class UBoxComponent* BackWorkBox;                                                 // 0x0808 (size: 0x8)
    class UQuadrilateralCoverComponent* BuildsiteOverlapQuadrilateralCover;           // 0x0810 (size: 0x8)
    class UTemplateComponent* TrenchConnectorCommonT1T2;                              // 0x0818 (size: 0x8)
    class UBPTrenchBlockerBox_C* BPTrenchBlockerBox;                                  // 0x0820 (size: 0x8)
    class USceneComponent* ReferenceB;                                                // 0x0828 (size: 0x8)
    class USceneComponent* ReferenceD;                                                // 0x0830 (size: 0x8)
    class USceneComponent* ReferenceA;                                                // 0x0838 (size: 0x8)
    class USceneComponent* ReferenceC;                                                // 0x0840 (size: 0x8)
    class UDecalComponent* Decal1;                                                    // 0x0848 (size: 0x8)
    class UDecalComponent* Decal2;                                                    // 0x0850 (size: 0x8)
    class UDecalComponent* Decal3;                                                    // 0x0858 (size: 0x8)
    class UDecalComponent* Decal;                                                     // 0x0860 (size: 0x8)
    class UStaticMeshComponent* RopeRight;                                            // 0x0868 (size: 0x8)
    class UStaticMeshComponent* RopeLeft;                                             // 0x0870 (size: 0x8)
    class UStaticMeshComponent* BackSide;                                             // 0x0878 (size: 0x8)
    class UStaticMeshComponent* FrontSide;                                            // 0x0880 (size: 0x8)
    class UBuildSocketComponent* BackSocket;                                          // 0x0888 (size: 0x8)
    class UBuildSocketComponent* FrontSocket;                                         // 0x0890 (size: 0x8)

}; // Size: 0x898

#endif
