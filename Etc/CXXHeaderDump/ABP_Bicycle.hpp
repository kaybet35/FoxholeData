#ifndef UE4SS_SDK_ABP_Bicycle_HPP
#define UE4SS_SDK_ABP_Bicycle_HPP

class UABP_Bicycle_C : public UBicycleAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02A0 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root_7125EE104E46348A16ECE3B77FD92648;               // 0x02A8 (size: 0x30)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_EC3B9ED04E9AAAE1105DF297D3862D24; // 0x02D8 (size: 0x78)
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_1A84CD364537C4502828118C6D715AAA; // 0x0350 (size: 0xA0)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_1CA330A0483E10020D500F8D1E2BDF91; // 0x03F0 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_D8412DCF48D38922DB7E5382ADFBC998; // 0x0418 (size: 0x28)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3F95A0F242A0D72770026BB086D077AF; // 0x0440 (size: 0x78)
    FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_3DF9EBCD4A95ABE62FAE3AA6ECD85463; // 0x04B8 (size: 0x188)
    FAnimNode_StateResult AnimGraphNode_StateResult_43FCA6DE4ECA2B0FEFD367A4E2EA64D3; // 0x0640 (size: 0x30)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_F6CAA0A64109620FD13EFAA95A35C7C1; // 0x0670 (size: 0x78)
    FAnimNode_StateResult AnimGraphNode_StateResult_7459D22643CE12335278CEA5308FA9FB; // 0x06E8 (size: 0x30)
    FAnimNode_StateMachine AnimGraphNode_StateMachine_8D92B3084866942FEBC4A986E919D691; // 0x0718 (size: 0xB0)

    void AnimGraph(FPoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Bicycle_AnimGraphNode_TransitionResult_1CA330A0483E10020D500F8D1E2BDF91();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Bicycle_AnimGraphNode_TransitionResult_D8412DCF48D38922DB7E5382ADFBC998();
    void ExecuteUbergraph_ABP_Bicycle(int32 EntryPoint);
}; // Size: 0x7C8

#endif
