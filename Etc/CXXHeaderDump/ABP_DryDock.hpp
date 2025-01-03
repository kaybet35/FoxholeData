#ifndef UE4SS_SDK_ABP_DryDock_HPP
#define UE4SS_SDK_ABP_DryDock_HPP

class UABP_DryDock_C : public UAssemblyAreaAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0270 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root_BDCF5368450FEB1FFDA8F89AF0D7685E;               // 0x0278 (size: 0x30)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_6FED692E49DE0A29185BE0A370829191; // 0x02A8 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_ED9D95784E3C2C524A2C4CA81914CB35; // 0x02D0 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_EF7CCB2243A8A34AACBE619EEA8E96DF; // 0x02F8 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3A589E344DE2B4508CC06B87B040CB77; // 0x0320 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_C792F30A47284C6D91B5369E8BBE8F7B; // 0x0348 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_45E74A3D4101DAC147CE0F801FDD4A1E; // 0x0370 (size: 0x28)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_F2F432374AF48AAD636C0F823A3240BC; // 0x0398 (size: 0x78)
    FAnimNode_StateResult AnimGraphNode_StateResult_2733F51D48F5A9B33961369F632DF5CA; // 0x0410 (size: 0x30)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_825592004A38F082BB5D4EB44D44CCAC; // 0x0440 (size: 0x78)
    FAnimNode_StateResult AnimGraphNode_StateResult_6025EDE7483AC7F79542FD800E819EAE; // 0x04B8 (size: 0x30)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_ED959BF642BB988276BBE3A6B6CF9D4A; // 0x04E8 (size: 0x78)
    FAnimNode_StateResult AnimGraphNode_StateResult_E5D6CD2B4BD223BBD318A3A13A31295B; // 0x0560 (size: 0x30)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_423E15BB41CBB8F34D5BC1B310A47364; // 0x0590 (size: 0x78)
    FAnimNode_StateResult AnimGraphNode_StateResult_337ED80943E10F52D75BC5BE4719EE20; // 0x0608 (size: 0x30)
    FAnimNode_StateMachine AnimGraphNode_StateMachine_F8B0F2424BBCDEC7C1954D816818B3E0; // 0x0638 (size: 0xB0)

    void AnimGraph(FPoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_DryDock_AnimGraphNode_TransitionResult_EF7CCB2243A8A34AACBE619EEA8E96DF();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_DryDock_AnimGraphNode_TransitionResult_3A589E344DE2B4508CC06B87B040CB77();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_DryDock_AnimGraphNode_TransitionResult_C792F30A47284C6D91B5369E8BBE8F7B();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_DryDock_AnimGraphNode_TransitionResult_ED9D95784E3C2C524A2C4CA81914CB35();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_DryDock_AnimGraphNode_TransitionResult_45E74A3D4101DAC147CE0F801FDD4A1E();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_DryDock_AnimGraphNode_TransitionResult_6FED692E49DE0A29185BE0A370829191();
    void ExecuteUbergraph_ABP_DryDock(int32 EntryPoint);
}; // Size: 0x6E8

#endif
