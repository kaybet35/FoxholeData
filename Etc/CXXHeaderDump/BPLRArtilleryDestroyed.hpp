#ifndef UE4SS_SDK_BPLRArtilleryDestroyed_HPP
#define UE4SS_SDK_BPLRArtilleryDestroyed_HPP

class ABPLRArtilleryDestroyed_C : public ADestroyedFort
{
    class UStaticMeshComponent* Barrel;                                               // 0x0830 (size: 0x8)
    class UConnectionRulesComponent* ConnectionRules;                                 // 0x0838 (size: 0x8)
    class UTemplateComponent* FortCommonDestroyedDirtT3;                              // 0x0840 (size: 0x8)
    class ULocationMultiplexedMeshComponent* LocationMultiplexedMesh;                 // 0x0848 (size: 0x8)
    class UTemplateComponent* FortCommon;                                             // 0x0850 (size: 0x8)
    class UStaticMeshComponent* Floor;                                                // 0x0858 (size: 0x8)

}; // Size: 0x860

#endif
