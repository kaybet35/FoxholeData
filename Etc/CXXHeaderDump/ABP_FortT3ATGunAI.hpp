#ifndef UE4SS_SDK_ABP_FortT3ATGunAI_HPP
#define UE4SS_SDK_ABP_FortT3ATGunAI_HPP

class UABP_FortT3ATGunAI_C : public UGunTurretAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0270 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root_028BE0EF48AA9EFF4E0028A9B450E386;               // 0x0278 (size: 0x30)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_BD07295047078824BF8C099B5488D028; // 0x02A8 (size: 0xE0)

    void AnimGraph(FPoseLink& AnimGraph);
    void ExecuteUbergraph_ABP_FortT3ATGunAI(int32 EntryPoint);
}; // Size: 0x388

#endif
