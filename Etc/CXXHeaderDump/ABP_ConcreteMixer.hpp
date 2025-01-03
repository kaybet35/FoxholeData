#ifndef UE4SS_SDK_ABP_ConcreteMixer_HPP
#define UE4SS_SDK_ABP_ConcreteMixer_HPP

class UABP_ConcreteMixer_C : public UFacilityRefineryAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02A0 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root_49956EDF4CF68AC6841AAC80ED187CB9;               // 0x02A8 (size: 0x30)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_5BB0231840BA64B9EE3DFF84A1F66713; // 0x02D8 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_990417D84BBB1CC2BE7AD2B793BE5DA7; // 0x0300 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_C830C5B149245A788C6EC9941EC66B14; // 0x0328 (size: 0x28)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_C3C1A7B64AAD3188B71F2FA05766321B; // 0x0350 (size: 0x78)
    FAnimNode_StateResult AnimGraphNode_StateResult_A0CC9656444074F2DD1ED88083AF7FEA; // 0x03C8 (size: 0x30)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_1CB3B69741570C2693F500B266D9E784; // 0x03F8 (size: 0x78)
    FAnimNode_StateResult AnimGraphNode_StateResult_1E11F8D545354C4600FC49A96592FCE2; // 0x0470 (size: 0x30)
    FAnimNode_StateResult AnimGraphNode_StateResult_F51EF88A4ACD58BE4DBE9B803E2C69A9; // 0x04A0 (size: 0x30)
    FAnimNode_StateMachine AnimGraphNode_StateMachine_2410090F4D8048BD945D5996BD67F625; // 0x04D0 (size: 0xB0)

    void AnimGraph(FPoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ConcreteMixer_AnimGraphNode_TransitionResult_5BB0231840BA64B9EE3DFF84A1F66713();
    void ExecuteUbergraph_ABP_ConcreteMixer(int32 EntryPoint);
}; // Size: 0x580

#endif
