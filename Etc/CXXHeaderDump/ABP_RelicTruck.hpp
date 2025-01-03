#ifndef UE4SS_SDK_ABP_RelicTruck_HPP
#define UE4SS_SDK_ABP_RelicTruck_HPP

class UABP_RelicTruck_C : public USimVehicleAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02A0 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root_37FF733B48CF9B3F48D1808E9A4FA9D5;               // 0x02A8 (size: 0x30)
    FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_753C930F4FD799C9CD834B9D41FBC6B9; // 0x02D8 (size: 0x188)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_1BE0CEBB4059F787E03DBAB527EB6D01; // 0x0460 (size: 0x78)
    FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_5FD71FB74FA43419CA1D15936DC233D5; // 0x04D8 (size: 0xC0)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_1FD9486C4EC39350AAF536A89A69313D; // 0x0598 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_01E3FF144663AD036A28B4845ACD9D29; // 0x05C0 (size: 0x28)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_C7A5B6C14718BCC65BED8F86ABCB1B77; // 0x05E8 (size: 0x78)
    FAnimNode_StateResult AnimGraphNode_StateResult_051D3FDE4E663598D39585A1FB0E3CFC; // 0x0660 (size: 0x30)
    FAnimNode_StateResult AnimGraphNode_StateResult_B318734E40E5AE3B269DDC8DDC45EC03; // 0x0690 (size: 0x30)
    FAnimNode_StateMachine AnimGraphNode_StateMachine_DA4B26DE418DFE9E22D560B749A3F248; // 0x06C0 (size: 0xB0)

    void AnimGraph(FPoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RelicTruck_AnimGraphNode_TransitionResult_1FD9486C4EC39350AAF536A89A69313D();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RelicTruck_AnimGraphNode_TransitionResult_01E3FF144663AD036A28B4845ACD9D29();
    void ExecuteUbergraph_ABP_RelicTruck(int32 EntryPoint);
}; // Size: 0x770

#endif
