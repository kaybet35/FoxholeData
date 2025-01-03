#ifndef UE4SS_SDK_BPTrenchT3_HPP
#define UE4SS_SDK_BPTrenchT3_HPP

class ABPTrenchT3_C : public AConcreteFort
{
    class UBPTrenchRoofModSlot_C* BPTrenchRoofModSlot;                                // 0x0800 (size: 0x8)
    class UTemplateComponent* TrenchCommonMods;                                       // 0x0808 (size: 0x8)
    class UTemplateComponent* TrenchCommon;                                           // 0x0810 (size: 0x8)
    class UDecalComponent* Decal;                                                     // 0x0818 (size: 0x8)
    class UDecalComponent* Decal1;                                                    // 0x0820 (size: 0x8)
    class UDecalComponent* Decal2;                                                    // 0x0828 (size: 0x8)
    class UDecalComponent* Decal3;                                                    // 0x0830 (size: 0x8)
    class UStaticMeshComponent* OpenWallRight;                                        // 0x0838 (size: 0x8)
    class UStaticMeshComponent* OpenWallLeft;                                         // 0x0840 (size: 0x8)
    class UStaticMeshComponent* CornerFrontRight;                                     // 0x0848 (size: 0x8)
    class UStaticMeshComponent* CornerFrontLeft;                                      // 0x0850 (size: 0x8)
    class UStaticMeshComponent* CornerBackLeft;                                       // 0x0858 (size: 0x8)
    class UStaticMeshComponent* CornerBackRight;                                      // 0x0860 (size: 0x8)
    class UStaticMeshComponent* WallRight;                                            // 0x0868 (size: 0x8)
    class UStaticMeshComponent* Floor;                                                // 0x0870 (size: 0x8)
    class UStaticMeshComponent* WallLeft;                                             // 0x0878 (size: 0x8)
    class UStaticMeshComponent* WallBack;                                             // 0x0880 (size: 0x8)
    class UStaticMeshComponent* WallFront;                                            // 0x0888 (size: 0x8)

}; // Size: 0x890

#endif
