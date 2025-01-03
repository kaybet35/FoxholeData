#ifndef UE4SS_SDK_ABP_RelicBus_HPP
#define UE4SS_SDK_ABP_RelicBus_HPP

class UABP_RelicBus_C : public USimVehicleAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02A0 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root_9738F4CF415CB1CBF7EC5FB77938A7A5;               // 0x02A8 (size: 0x30)
    FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_76C141A34EEDB9BA2B1593B5194EA2EA; // 0x02D8 (size: 0xC0)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_1A129DC0487E91E468205EBF7F7E49E3; // 0x0398 (size: 0x78)
    FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_C1FC3A0C4FEE30221741CDA8CF23872E; // 0x0410 (size: 0x188)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_EC8029C24F6D542A852F3A96408585CD; // 0x0598 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_E56AB829476EC47D5AC652B0DE2A6427; // 0x05C0 (size: 0x28)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_37ABC53A4468B1DCC45912A6ECFAD49B; // 0x05E8 (size: 0x78)
    FAnimNode_StateResult AnimGraphNode_StateResult_33CC778C47EDF3A37F6776BF1B880687; // 0x0660 (size: 0x30)
    FAnimNode_StateResult AnimGraphNode_StateResult_935AE37544C38C9A42B667B0E698A93F; // 0x0690 (size: 0x30)
    FAnimNode_StateMachine AnimGraphNode_StateMachine_F7837433429B53833331BE9F18A6D67B; // 0x06C0 (size: 0xB0)

    void AnimGraph(FPoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RelicBus_AnimGraphNode_TransitionResult_EC8029C24F6D542A852F3A96408585CD();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RelicBus_AnimGraphNode_TransitionResult_E56AB829476EC47D5AC652B0DE2A6427();
    void ExecuteUbergraph_ABP_RelicBus(int32 EntryPoint);
}; // Size: 0x770

#endif
