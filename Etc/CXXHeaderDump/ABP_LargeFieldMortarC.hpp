#ifndef UE4SS_SDK_ABP_LargeFieldMortarC_HPP
#define UE4SS_SDK_ABP_LargeFieldMortarC_HPP

class UABP_LargeFieldMortarC_C : public USimVehicleGunnerSupportAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0300 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root_1A682C084842EBDB456607A2168A0ABA;               // 0x0308 (size: 0x30)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_396021A04B1737AA63E5EAA7DE8235C4; // 0x0338 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_919C0D08488F3E2D3CE1AE985EBB7A34; // 0x0360 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_CB4B0EE64BFF04305BDAD1B81D8D6A53; // 0x0388 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_E450A39142157864842A4EA413BFEA27; // 0x03B0 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_0C4B5B3A4F86909F017FAFA0263EC795; // 0x03D8 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3917562A4778A269D05D25BC14D4CC8A; // 0x0400 (size: 0x28)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_36BCA583441B4DC7F0CED0AEE19583FA; // 0x0428 (size: 0xE0)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_ABB5AD964A1F9A00B4BE5A8DC2BF3DA6; // 0x0508 (size: 0x78)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_084A81004C810DCBB68815A48AD75954; // 0x0580 (size: 0x78)
    FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_8C9FC53941CBD50506E72E91F6D62B75; // 0x05F8 (size: 0xC0)
    FAnimNode_StateResult AnimGraphNode_StateResult_9AF5927E480CC83D32CAF0A1377E499E; // 0x06B8 (size: 0x30)
    FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_6CAFB4D04EFAAC01AA82BEBC5C851F04; // 0x06E8 (size: 0xC0)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_5574CC7E445833CF672901B114246FBC; // 0x07A8 (size: 0x78)
    FAnimNode_StateResult AnimGraphNode_StateResult_E009507E4F9B0231FC499F89D6C989C9; // 0x0820 (size: 0x30)
    FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_EFDC04CE4C813229C883798AE4B9C834; // 0x0850 (size: 0xC0)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_9943874145061A8D72561F96666DE4C3; // 0x0910 (size: 0x78)
    FAnimNode_StateResult AnimGraphNode_StateResult_873C75A24A4AD03F5A0EAFB26A83D32A; // 0x0988 (size: 0x30)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_390733A2479C57D52411A290849CFD6A; // 0x09B8 (size: 0xE0)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_DF8A2F8C4E68C7C119448E91CEFE30E6; // 0x0A98 (size: 0x78)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_F4C3F8374A5B7DB9DE23AC86693E2EA2; // 0x0B10 (size: 0x78)
    FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_C3330AC44589C07B3AC4DC9F2CF148CC; // 0x0B88 (size: 0xC0)
    FAnimNode_StateResult AnimGraphNode_StateResult_0ED14BFF478DE4135CA57082811BA859; // 0x0C48 (size: 0x30)
    FAnimNode_StateMachine AnimGraphNode_StateMachine_9FDEDFDC4BAE92FBF85147961487A848; // 0x0C78 (size: 0xB0)
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_1769CD37468ACE02FD4F10BFC418AFDE; // 0x0D28 (size: 0xA0)
    FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_35B336DF495C909986A017AA94C194B4; // 0x0DC8 (size: 0x188)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_46E7C87A4035A73E44E82D807DF59ECF; // 0x0F50 (size: 0x78)
    int32 WheelRotationSpeedFactor;                                                   // 0x0FC8 (size: 0x4)

    void AnimGraph(FPoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_LargeFieldMortarC_AnimGraphNode_TransitionResult_3917562A4778A269D05D25BC14D4CC8A();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_LargeFieldMortarC_AnimGraphNode_SequencePlayer_ABB5AD964A1F9A00B4BE5A8DC2BF3DA6();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_LargeFieldMortarC_AnimGraphNode_SequencePlayer_084A81004C810DCBB68815A48AD75954();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_LargeFieldMortarC_AnimGraphNode_TransitionResult_E450A39142157864842A4EA413BFEA27();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_LargeFieldMortarC_AnimGraphNode_TransitionResult_CB4B0EE64BFF04305BDAD1B81D8D6A53();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_LargeFieldMortarC_AnimGraphNode_BlendSpacePlayer_390733A2479C57D52411A290849CFD6A();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_LargeFieldMortarC_AnimGraphNode_SequencePlayer_DF8A2F8C4E68C7C119448E91CEFE30E6();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_LargeFieldMortarC_AnimGraphNode_SequencePlayer_F4C3F8374A5B7DB9DE23AC86693E2EA2();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_LargeFieldMortarC_AnimGraphNode_TransitionResult_919C0D08488F3E2D3CE1AE985EBB7A34();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_LargeFieldMortarC_AnimGraphNode_TransitionResult_396021A04B1737AA63E5EAA7DE8235C4();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_LargeFieldMortarC_AnimGraphNode_TransitionResult_0C4B5B3A4F86909F017FAFA0263EC795();
    void ExecuteUbergraph_ABP_LargeFieldMortarC(int32 EntryPoint);
}; // Size: 0xFCC

#endif
