#ifndef UE4SS_SDK_ABP_EmplacedMultiC_HPP
#define UE4SS_SDK_ABP_EmplacedMultiC_HPP

class UABP_EmplacedMultiC_C : public UEmplacedWeaponAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0280 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root_CBDCD7EA4CDB74BE7C5333A043DA55C5;               // 0x0288 (size: 0x30)
    FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_0617984144F880EDF205009B747BFD82; // 0x02B8 (size: 0xC0)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_AE192EC448BD45770181D794D2064AB3; // 0x0378 (size: 0xE0)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_A8C261054FB019F241B1E692A9EDB5CD; // 0x0458 (size: 0xE0)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_03BE34DB4B7E908C96891F85314F85C9; // 0x0538 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_27B0D361459D590A03DEDDA61814E925; // 0x0560 (size: 0x28)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_10A0F64C407BB96C135DA194471B1A77; // 0x0588 (size: 0x78)
    FAnimNode_StateResult AnimGraphNode_StateResult_084B53264E45C5465061BC9CD0A4E3DA; // 0x0600 (size: 0x30)
    FAnimNode_StateResult AnimGraphNode_StateResult_D53812564949AAB19D46C3A928FB882F; // 0x0630 (size: 0x30)
    FAnimNode_StateMachine AnimGraphNode_StateMachine_A55FE64F436617F184B82F8B5D63C142; // 0x0660 (size: 0xB0)

    void AnimGraph(FPoseLink& AnimGraph);
    void ExecuteUbergraph_ABP_EmplacedMultiC(int32 EntryPoint);
}; // Size: 0x710

#endif
