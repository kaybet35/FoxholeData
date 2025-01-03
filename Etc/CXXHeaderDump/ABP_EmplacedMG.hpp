#ifndef UE4SS_SDK_ABP_EmplacedMG_HPP
#define UE4SS_SDK_ABP_EmplacedMG_HPP

class UABP_EmplacedMG_C : public UEmplacedWeaponAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0280 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root_C142C78F4E346686701BFA98C42188BB;               // 0x0288 (size: 0x30)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_2E1A77AD4BC51D84C6AFBA9727A724CC; // 0x02B8 (size: 0xE0)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_5834C3A1488041C7A67A7EA9C3C0FC89; // 0x0398 (size: 0xE0)
    FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_0D46E4E14FFB787388339BB3A5E41293; // 0x0478 (size: 0xC0)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_724742C244CC427D0B6946B60F28F294; // 0x0538 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_098803E8405E479D0D212EB18CFC2B43; // 0x0560 (size: 0x28)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_C7F25D074D990380B9FDF88E3AF1C41B; // 0x0588 (size: 0x78)
    FAnimNode_StateResult AnimGraphNode_StateResult_E612B1E248DD0672FF9C59B26066C17D; // 0x0600 (size: 0x30)
    FAnimNode_StateResult AnimGraphNode_StateResult_86CBF7A14405F77EBC9ED4B29A36118E; // 0x0630 (size: 0x30)
    FAnimNode_StateMachine AnimGraphNode_StateMachine_251099DF4C75F8578F0720AB8812D36A; // 0x0660 (size: 0xB0)

    void AnimGraph(FPoseLink& AnimGraph);
    void ExecuteUbergraph_ABP_EmplacedMG(int32 EntryPoint);
}; // Size: 0x710

#endif
