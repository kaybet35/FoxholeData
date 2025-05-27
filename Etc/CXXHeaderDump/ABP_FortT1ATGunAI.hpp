#ifndef UE4SS_SDK_ABP_FortT1ATGunAI_HPP
#define UE4SS_SDK_ABP_FortT1ATGunAI_HPP

class UABP_FortT1ATGunAI_C : public UGunTurretAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0270 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root_305535A944012814DD39DF921365148C;               // 0x0278 (size: 0x30)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_878A257B4AB0FB345725619412C03059; // 0x02A8 (size: 0xE0)

    void AnimGraph(FPoseLink& AnimGraph);
    void ExecuteUbergraph_ABP_FortT1ATGunAI(int32 EntryPoint);
}; // Size: 0x388

#endif
