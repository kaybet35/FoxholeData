#ifndef UE4SS_SDK_BPTrenchConnectorBuildSite_HPP
#define UE4SS_SDK_BPTrenchConnectorBuildSite_HPP

class ABPTrenchConnectorBuildSite_C : public AFortConnectorBuildSite
{
    class UBPTrenchBlockerBox_C* BPTrenchBlockerBox;                                  // 0x07C0 (size: 0x8)
    class USceneComponent* ReferenceB;                                                // 0x07C8 (size: 0x8)
    class USceneComponent* ReferenceD;                                                // 0x07D0 (size: 0x8)
    class USceneComponent* ReferenceA;                                                // 0x07D8 (size: 0x8)
    class USceneComponent* ReferenceC;                                                // 0x07E0 (size: 0x8)
    class USceneComponent* SplineCollisionTarget;                                     // 0x07E8 (size: 0x8)
    class USplineConnectorComponent* SplineCollision;                                 // 0x07F0 (size: 0x8)
    class UDecalComponent* Decal1;                                                    // 0x07F8 (size: 0x8)
    class UDecalComponent* Decal2;                                                    // 0x0800 (size: 0x8)
    class UDecalComponent* Decal3;                                                    // 0x0808 (size: 0x8)
    class UDecalComponent* Decal;                                                     // 0x0810 (size: 0x8)
    class UStaticMeshComponent* RopeRight;                                            // 0x0818 (size: 0x8)
    class UStaticMeshComponent* RopeLeft;                                             // 0x0820 (size: 0x8)
    class UStaticMeshComponent* BackSide;                                             // 0x0828 (size: 0x8)
    class UStaticMeshComponent* FrontSide;                                            // 0x0830 (size: 0x8)
    class UBuildSocketComponent* BackSocket;                                          // 0x0838 (size: 0x8)
    class UBuildSocketComponent* FrontSocket;                                         // 0x0840 (size: 0x8)

}; // Size: 0x848

#endif
