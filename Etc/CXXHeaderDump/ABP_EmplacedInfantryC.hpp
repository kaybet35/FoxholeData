#ifndef UE4SS_SDK_ABP_EmplacedInfantryC_HPP
#define UE4SS_SDK_ABP_EmplacedInfantryC_HPP

class UABP_EmplacedInfantryC_C : public UEmplacedWeaponAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0280 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root_5BBD34114F035DE5A089129DF8EA948C;               // 0x0288 (size: 0x30)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_7FAFCEE84010AF49F6910C8F410FB224; // 0x02B8 (size: 0xE0)
    FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_EA75294345395DCF9FEEB2B9B9F683DF; // 0x0398 (size: 0xC0)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_C269C84D485F939D7CB4B3AEBF77C44A; // 0x0458 (size: 0xE0)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_BDFB5A314C0D1DF2B8DD2A8CBEB241FC; // 0x0538 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_0B53C6754554203B4A66A3AF2657D049; // 0x0560 (size: 0x28)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2AC91FA94EA367F6FC2BBE97E5D65422; // 0x0588 (size: 0x78)
    FAnimNode_StateResult AnimGraphNode_StateResult_AACFD9774C003C4390ABCD9A7C83C9C1; // 0x0600 (size: 0x30)
    FAnimNode_StateResult AnimGraphNode_StateResult_7A43A81142B3DF1BB4555EAF9A8AAE22; // 0x0630 (size: 0x30)
    FAnimNode_StateMachine AnimGraphNode_StateMachine_EA12DC73498C67121C70E08F1863449B; // 0x0660 (size: 0xB0)

    void AnimGraph(FPoseLink& AnimGraph);
    void ExecuteUbergraph_ABP_EmplacedInfantryC(int32 EntryPoint);
}; // Size: 0x710

#endif
