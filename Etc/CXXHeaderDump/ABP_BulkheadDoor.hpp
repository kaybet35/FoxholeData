#ifndef UE4SS_SDK_ABP_BulkheadDoor_HPP
#define UE4SS_SDK_ABP_BulkheadDoor_HPP

class UABP_BulkheadDoor_C : public UBulkheadDoorAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0270 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root_B288CBE94DB1162AE1657BB0E818F192;               // 0x0278 (size: 0x30)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_CAF64DEE44F42655EDB691841AC98214; // 0x02A8 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_59562AF8490ACD1D017549B067E4BDB8; // 0x02D0 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_42D6EA974070268742EF4295885CD097; // 0x02F8 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_DD8C95724F16B16FB7720B8CE014E3B6; // 0x0320 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_8E7ECCFC43CAF1214B78EAA78A0D7E7E; // 0x0348 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_70A93AF14EC0A9F63FE4B985C9C0A720; // 0x0370 (size: 0x28)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_FA15327143AF41832391B6BB00A41236; // 0x0398 (size: 0x78)
    FAnimNode_StateResult AnimGraphNode_StateResult_16219E094CDD1055834E2B8606F41DEC; // 0x0410 (size: 0x30)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_9579B5EC462EA0CC71F098BA8E2BFE6B; // 0x0440 (size: 0x78)
    FAnimNode_StateResult AnimGraphNode_StateResult_31469C6441737A987B049E8A81CC2BB8; // 0x04B8 (size: 0x30)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_1EB766C341682296F554A38EC521EABA; // 0x04E8 (size: 0x78)
    FAnimNode_StateResult AnimGraphNode_StateResult_C9481BDF47EA250AE57BA9B4E510CA13; // 0x0560 (size: 0x30)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_0DF886A145AA914371DFF0A6128E7B2A; // 0x0590 (size: 0x78)
    FAnimNode_StateResult AnimGraphNode_StateResult_2815A2BF4CCB3B12448C77B290FB583C; // 0x0608 (size: 0x30)
    FAnimNode_StateMachine AnimGraphNode_StateMachine_364368A8439E4C39DD921AA3974E492F; // 0x0638 (size: 0xB0)

    void AnimGraph(FPoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BulkheadDoor_AnimGraphNode_TransitionResult_42D6EA974070268742EF4295885CD097();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BulkheadDoor_AnimGraphNode_TransitionResult_DD8C95724F16B16FB7720B8CE014E3B6();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BulkheadDoor_AnimGraphNode_TransitionResult_8E7ECCFC43CAF1214B78EAA78A0D7E7E();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BulkheadDoor_AnimGraphNode_TransitionResult_59562AF8490ACD1D017549B067E4BDB8();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BulkheadDoor_AnimGraphNode_TransitionResult_70A93AF14EC0A9F63FE4B985C9C0A720();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BulkheadDoor_AnimGraphNode_TransitionResult_CAF64DEE44F42655EDB691841AC98214();
    void ExecuteUbergraph_ABP_BulkheadDoor(int32 EntryPoint);
}; // Size: 0x6E8

#endif
