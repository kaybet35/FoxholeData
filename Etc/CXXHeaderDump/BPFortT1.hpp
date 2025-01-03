#ifndef UE4SS_SDK_BPFortT1_HPP
#define UE4SS_SDK_BPFortT1_HPP

class ABPFortT1_C : public AFort
{
    class UTemplateComponent* FortCommonDirt;                                         // 0x0800 (size: 0x8)
    class UTemplateComponent* FortCommonMods;                                         // 0x0808 (size: 0x8)
    class UTemplateComponent* FortCommon;                                             // 0x0810 (size: 0x8)
    class ULocationMultiplexedMeshComponent* LocationMultiplexedMesh;                 // 0x0818 (size: 0x8)
    class UStaticMeshComponent* Roof;                                                 // 0x0820 (size: 0x8)
    class UStaticMeshComponent* CornerFrontRight;                                     // 0x0828 (size: 0x8)
    class UStaticMeshComponent* CornerFrontLeft;                                      // 0x0830 (size: 0x8)
    class UStaticMeshComponent* CornerBackLeft;                                       // 0x0838 (size: 0x8)
    class UStaticMeshComponent* Floor;                                                // 0x0840 (size: 0x8)
    class UStaticMeshComponent* CornerBackRight;                                      // 0x0848 (size: 0x8)

}; // Size: 0x850

#endif
