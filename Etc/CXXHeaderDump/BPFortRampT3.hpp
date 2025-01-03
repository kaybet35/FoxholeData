#ifndef UE4SS_SDK_BPFortRampT3_HPP
#define UE4SS_SDK_BPFortRampT3_HPP

class ABPFortRampT3_C : public AConcreteFort
{
    class UBPTrenchBlockerBox_C* BPTrenchBlockerBox;                                  // 0x0800 (size: 0x8)
    class UTemplateComponent* FortCommonDirtT3;                                       // 0x0808 (size: 0x8)
    class UTemplateComponent* FortRampCommonT2T3Mods;                                 // 0x0810 (size: 0x8)
    class UTemplateComponent* FortRampCommonDefenseMods;                              // 0x0818 (size: 0x8)
    class UTemplateComponent* FortRampCommon;                                         // 0x0820 (size: 0x8)
    class UTemplateComponent* FortRampCommonMods;                                     // 0x0828 (size: 0x8)
    class UTemplateComponent* FortCommon;                                             // 0x0830 (size: 0x8)
    class UStaticMeshComponent* RampFront;                                            // 0x0838 (size: 0x8)
    class UStaticMeshComponent* Roof;                                                 // 0x0840 (size: 0x8)
    class UStaticMeshComponent* CornerFrontRight;                                     // 0x0848 (size: 0x8)
    class UStaticMeshComponent* CornerFrontLeft;                                      // 0x0850 (size: 0x8)
    class UStaticMeshComponent* CornerBackLeft;                                       // 0x0858 (size: 0x8)
    class UStaticMeshComponent* Floor;                                                // 0x0860 (size: 0x8)
    class UStaticMeshComponent* CornerBackRight;                                      // 0x0868 (size: 0x8)

}; // Size: 0x870

#endif
