#ifndef UE4SS_SDK_ABP_Crane_HPP
#define UE4SS_SDK_ABP_Crane_HPP

class UABP_Crane_C : public UCraneComponentAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0290 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root_68E16DD54CD559C5ECBE33BD78D2FF59;               // 0x0298 (size: 0x30)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_1A58714248BD415E8960BCA04B454F26; // 0x02C8 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_9AA647014F61271E97E3AE802DA9101B; // 0x02F0 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_9ECD6E2F45800FF27BC39EAFDECE6861; // 0x0318 (size: 0x28)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_D92E665F4527F40511EDC9A1DD86D7E6; // 0x0340 (size: 0x78)
    FAnimNode_StateResult AnimGraphNode_StateResult_21FD13C84A8CCDE5A07AB6975A80CEEE; // 0x03B8 (size: 0x30)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2538CCB84894745D1FD883987D99DD26; // 0x03E8 (size: 0x78)
    FAnimNode_StateResult AnimGraphNode_StateResult_DC6D865143D2E050A10915A30AAF9FE6; // 0x0460 (size: 0x30)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_889CF9B341AADFF4732DEAACE566EB89; // 0x0490 (size: 0x78)
    FAnimNode_StateResult AnimGraphNode_StateResult_DC8E63E847060E54D8290EB68769CCA5; // 0x0508 (size: 0x30)
    FAnimNode_StateMachine AnimGraphNode_StateMachine_3AA8A4124508E8D3C9E1ABAB2516FAFF; // 0x0538 (size: 0xB0)
    FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_51A72B5F48723272315CD6A7CEE7AB80; // 0x05E8 (size: 0xC0)
    FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_7A3180FA48318865E3CD89BAE09DFC39; // 0x06A8 (size: 0x188)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_FE2CC6D4422E27903E963586E5E8E5A1; // 0x0830 (size: 0xE0)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_B3FBBDCE4214DC745DFE8A9E2859982C; // 0x0910 (size: 0xE0)
    FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_D3B0A1D1494E2BAAB02519B6A6AF4169; // 0x09F0 (size: 0x188)

    void AnimGraph(FPoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Crane_AnimGraphNode_TransitionResult_1A58714248BD415E8960BCA04B454F26();
    void ExecuteUbergraph_ABP_Crane(int32 EntryPoint);
}; // Size: 0xB78

#endif
