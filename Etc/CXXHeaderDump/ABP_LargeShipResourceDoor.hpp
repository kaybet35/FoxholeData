#ifndef UE4SS_SDK_ABP_LargeShipResourceDoor_HPP
#define UE4SS_SDK_ABP_LargeShipResourceDoor_HPP

class UABP_LargeShipResourceDoor_C : public UBulkheadDoorAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0270 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root_B8CDFD574D88A523B1876CB5662484A9;               // 0x0278 (size: 0x30)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3C80C3BE42EABE31E8AC61B6266B584A; // 0x02A8 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_1CD772794D9C4938B1967C8EB870741E; // 0x02D0 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_EECE318141EF8F7F3C9907A8CDB831B3; // 0x02F8 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_7EC095F94675A565F6AFFA8C48EA8C68; // 0x0320 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_51B37C004285F3B5E4F0238956BD0301; // 0x0348 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_D87A9BF1453966FE9CBAB39A1A3FD113; // 0x0370 (size: 0x28)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_E7BE35624FEE9F079AA23392FA897929; // 0x0398 (size: 0x78)
    FAnimNode_StateResult AnimGraphNode_StateResult_086DBAEB4E9627626FDA239B0C7BC21C; // 0x0410 (size: 0x30)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_A7C4136C41F6284B53F448A9FF42D8F5; // 0x0440 (size: 0x78)
    FAnimNode_StateResult AnimGraphNode_StateResult_D7B6405441D22C24BE356B9145A0EF0E; // 0x04B8 (size: 0x30)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_BC30B50F49C75BA4CFF9978E29DB9FC1; // 0x04E8 (size: 0x78)
    FAnimNode_StateResult AnimGraphNode_StateResult_405A4CE84BA17D1C4F9088B57DA44689; // 0x0560 (size: 0x30)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_DED15B16444B916647913488EA5EDD11; // 0x0590 (size: 0x78)
    FAnimNode_StateResult AnimGraphNode_StateResult_3382CECE4930A2FC793A64A8DA877BF7; // 0x0608 (size: 0x30)
    FAnimNode_StateMachine AnimGraphNode_StateMachine_1C8B61FD4FD50041E0A16D91D069505D; // 0x0638 (size: 0xB0)

    void AnimGraph(FPoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_LargeShipResourceDoor_AnimGraphNode_TransitionResult_EECE318141EF8F7F3C9907A8CDB831B3();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_LargeShipResourceDoor_AnimGraphNode_TransitionResult_7EC095F94675A565F6AFFA8C48EA8C68();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_LargeShipResourceDoor_AnimGraphNode_TransitionResult_51B37C004285F3B5E4F0238956BD0301();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_LargeShipResourceDoor_AnimGraphNode_TransitionResult_1CD772794D9C4938B1967C8EB870741E();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_LargeShipResourceDoor_AnimGraphNode_TransitionResult_D87A9BF1453966FE9CBAB39A1A3FD113();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_LargeShipResourceDoor_AnimGraphNode_TransitionResult_3C80C3BE42EABE31E8AC61B6266B584A();
    void ExecuteUbergraph_ABP_LargeShipResourceDoor(int32 EntryPoint);
}; // Size: 0x6E8

#endif
