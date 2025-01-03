#ifndef UE4SS_SDK_ABP_Barge_03_HPP
#define UE4SS_SDK_ABP_Barge_03_HPP

class UABP_Barge_03_C : public UBargeAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02B0 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root_235AFBB046ED6F11B0ADC1B70D2A0A8D;               // 0x02B8 (size: 0x30)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_BABB98D84CF28F483E969DADA95083AC; // 0x02E8 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_DCC6812E405AB792AAE2D9B5AFCB91DF; // 0x0310 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_6F9617E44CFCD7EF9C2D8A801843E7DF; // 0x0338 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_24A3403E4919597A3BD17DB703266307; // 0x0360 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_F522E8CE48AC493624708AA6790F55F5; // 0x0388 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_D2C4D7354735A3EF3DB7C3A30AA6F902; // 0x03B0 (size: 0x28)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_FA4F89114C0BD1B5EDD6EAA114CC9838; // 0x03D8 (size: 0x78)
    FAnimNode_StateResult AnimGraphNode_StateResult_3F51143F45B6D04715F0C69B263BD103; // 0x0450 (size: 0x30)
    FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_279D2FFF4F8ED2D19796E28C5FB8B790; // 0x0480 (size: 0xC0)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_A900E4A24636898240416ABB0D854F58; // 0x0540 (size: 0xE0)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_687BB51B41F5D32080283EB6F3B58F19; // 0x0620 (size: 0xE0)
    FAnimNode_StateResult AnimGraphNode_StateResult_6F38C5F04D77ADECB161838166CAF1D1; // 0x0700 (size: 0x30)
    FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_3A60A73F4756010BA1E41FB22ACDE453; // 0x0730 (size: 0xC0)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_3CA786EB42B40448A4BEBA8C94D33A56; // 0x07F0 (size: 0xE0)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_2118088B45FF1A5416652DA5451C67FA; // 0x08D0 (size: 0xE0)
    FAnimNode_StateResult AnimGraphNode_StateResult_A79111F04569F1273084309511A028EB; // 0x09B0 (size: 0x30)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_B1561243438889F37F6ECAB9715D6971; // 0x09E0 (size: 0x78)
    FAnimNode_StateResult AnimGraphNode_StateResult_502157834EF5685F3FA4E9A189B58D97; // 0x0A58 (size: 0x30)
    FAnimNode_StateMachine AnimGraphNode_StateMachine_F7EB48B94FB7A3DF5C7009B9C7A43304; // 0x0A88 (size: 0xB0)

    void AnimGraph(FPoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Barge_03_AnimGraphNode_TransitionResult_F522E8CE48AC493624708AA6790F55F5();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Barge_03_AnimGraphNode_TransitionResult_D2C4D7354735A3EF3DB7C3A30AA6F902();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Barge_03_AnimGraphNode_TransitionResult_6F9617E44CFCD7EF9C2D8A801843E7DF();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Barge_03_AnimGraphNode_TransitionResult_DCC6812E405AB792AAE2D9B5AFCB91DF();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Barge_03_AnimGraphNode_TransitionResult_BABB98D84CF28F483E969DADA95083AC();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Barge_03_AnimGraphNode_TransitionResult_24A3403E4919597A3BD17DB703266307();
    void ExecuteUbergraph_ABP_Barge_03(int32 EntryPoint);
}; // Size: 0xB38

#endif
