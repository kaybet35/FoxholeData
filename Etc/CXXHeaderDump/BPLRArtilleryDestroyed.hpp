#ifndef UE4SS_SDK_BPLRArtilleryDestroyed_HPP
#define UE4SS_SDK_BPLRArtilleryDestroyed_HPP

class ABPLRArtilleryDestroyed_C : public ADestroyedFort
{
    class UStaticMeshComponent* Barrel;                                               // 0x0850 (size: 0x8)
    class UConnectionRulesComponent* ConnectionRules;                                 // 0x0858 (size: 0x8)
    class UTemplateComponent* FortCommonDestroyedDirtT3;                              // 0x0860 (size: 0x8)
    class ULocationMultiplexedMeshComponent* LocationMultiplexedMesh;                 // 0x0868 (size: 0x8)
    class UTemplateComponent* FortBreachedCommon;                                     // 0x0870 (size: 0x8)
    class UStaticMeshComponent* Floor;                                                // 0x0878 (size: 0x8)

}; // Size: 0x880

#endif
