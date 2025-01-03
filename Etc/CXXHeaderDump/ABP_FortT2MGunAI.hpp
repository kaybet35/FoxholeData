#ifndef UE4SS_SDK_ABP_FortT2MGunAI_HPP
#define UE4SS_SDK_ABP_FortT2MGunAI_HPP

class UABP_FortT2MGunAI_C : public UFoxholeTurretAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0270 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root_39667FE5422D3CE11603418CE822D398;               // 0x0278 (size: 0x30)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_81DE1183417EAD9B75CE2CBFC0D7870C; // 0x02A8 (size: 0xE0)

    void AnimGraph(FPoseLink& AnimGraph);
    void ExecuteUbergraph_ABP_FortT2MGunAI(int32 EntryPoint);
}; // Size: 0x388

#endif
