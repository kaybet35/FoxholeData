#ifndef UE4SS_SDK_ABP_SubmarineCHatch_HPP
#define UE4SS_SDK_ABP_SubmarineCHatch_HPP

class UABP_SubmarineCHatch_C : public UBulkheadDoorAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0270 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root_54B700E64CF80D8BCC1BEDBBC4AEEA12;               // 0x0278 (size: 0x30)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_022BCB504B180FEC41895FA715BA943E; // 0x02A8 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_F59B3383461074CC642F3DA5E1693D50; // 0x02D0 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_9A09D1D841AFA8254BACB3BF30A88F35; // 0x02F8 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_C6EB3E034DA350FACBA4D49AD9E66F88; // 0x0320 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_C8D78F914F0AE39122A1B0AFD1BA3B80; // 0x0348 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_32EDDAC94D47DC3DC9CE9DA9EE8F828A; // 0x0370 (size: 0x28)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_30CAD28548D0DF848BFAB8857B85D566; // 0x0398 (size: 0x78)
    FAnimNode_StateResult AnimGraphNode_StateResult_E1C240FC4346EA5A7D633A958421C6DB; // 0x0410 (size: 0x30)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_CAFEEE73480A88ACF70B78B0DFD32538; // 0x0440 (size: 0x78)
    FAnimNode_StateResult AnimGraphNode_StateResult_381AEC8848740C4A692F378ABFC30431; // 0x04B8 (size: 0x30)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_6CC454E94217EEA0AD47FA8BBAF6290F; // 0x04E8 (size: 0x78)
    FAnimNode_StateResult AnimGraphNode_StateResult_014CC29148A9637F08169BBC429A8268; // 0x0560 (size: 0x30)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_F97902674B043B57D4CE789880608AD1; // 0x0590 (size: 0x78)
    FAnimNode_StateResult AnimGraphNode_StateResult_7484BBC34B1C725821354CAE6E096863; // 0x0608 (size: 0x30)
    FAnimNode_StateMachine AnimGraphNode_StateMachine_C2B70C6A42C544B4310CB385E6E9DFA6; // 0x0638 (size: 0xB0)

    void AnimGraph(FPoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_SubmarineCHatch_AnimGraphNode_TransitionResult_9A09D1D841AFA8254BACB3BF30A88F35();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_SubmarineCHatch_AnimGraphNode_TransitionResult_C6EB3E034DA350FACBA4D49AD9E66F88();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_SubmarineCHatch_AnimGraphNode_TransitionResult_C8D78F914F0AE39122A1B0AFD1BA3B80();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_SubmarineCHatch_AnimGraphNode_TransitionResult_F59B3383461074CC642F3DA5E1693D50();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_SubmarineCHatch_AnimGraphNode_TransitionResult_32EDDAC94D47DC3DC9CE9DA9EE8F828A();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_SubmarineCHatch_AnimGraphNode_TransitionResult_022BCB504B180FEC41895FA715BA943E();
    void ExecuteUbergraph_ABP_SubmarineCHatch(int32 EntryPoint);
}; // Size: 0x6E8

#endif
