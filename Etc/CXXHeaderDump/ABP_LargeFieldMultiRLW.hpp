#ifndef UE4SS_SDK_ABP_LargeFieldMultiRLW_HPP
#define UE4SS_SDK_ABP_LargeFieldMultiRLW_HPP

class UABP_LargeFieldMultiRLW_C : public USimVehicleGunnerSupportAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0300 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root_476900D64559B6D3DA2713A1F93C0004;               // 0x0308 (size: 0x30)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_5106C6324D9479F0806C03840ED9C7D9; // 0x0338 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_AF45622046E36903926FD5AF36787C59; // 0x0360 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_900AD9CF4240F1BEA2A3F1A7387B1B08; // 0x0388 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_43E185E14AA8357BEAEED489927ED49F; // 0x03B0 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_ACFD573C4301741683E3AB94670E0654; // 0x03D8 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_E00926344E69BD4B00DDA592C7CE2833; // 0x0400 (size: 0x28)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_02C4DF664D087B1C29D1E391847ACD9A; // 0x0428 (size: 0xE0)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_6489084246F34D0F5D287BA69BBA1FC6; // 0x0508 (size: 0x78)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_BD9823754777F18B2840019A06D954AF; // 0x0580 (size: 0x78)
    FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_803900144A3AE3B12F43C99810BC2E0E; // 0x05F8 (size: 0xC0)
    FAnimNode_StateResult AnimGraphNode_StateResult_D68D43E34833218122BB3C808268D037; // 0x06B8 (size: 0x30)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_778F35D346B802319299CC9545FB1FCB; // 0x06E8 (size: 0x78)
    FAnimNode_StateResult AnimGraphNode_StateResult_EB492D324A5DA424C86816B7E03D6FA7; // 0x0760 (size: 0x30)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_C6DB62B4474CC4FCE2980FAD95CAE20A; // 0x0790 (size: 0x78)
    FAnimNode_StateResult AnimGraphNode_StateResult_1F6DD058455C279B759E9EA9FB26BE51; // 0x0808 (size: 0x30)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_D48086DD40AB2A2C6E6F1F8C863379E7; // 0x0838 (size: 0xE0)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_96E518CD4E68D78B39F24EB4F80D90CB; // 0x0918 (size: 0x78)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_EABD90F1493AEF84F7610DBE7AABF8D0; // 0x0990 (size: 0x78)
    FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_007BB14F47029E0FEC432E8985F56FCF; // 0x0A08 (size: 0xC0)
    FAnimNode_StateResult AnimGraphNode_StateResult_C0A110974745A215841E2D80FEAFFB6C; // 0x0AC8 (size: 0x30)
    FAnimNode_StateMachine AnimGraphNode_StateMachine_3BAE6B304891586725CD56AAE8CCF409; // 0x0AF8 (size: 0xB0)
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_8C9AABEC43D65FFC7FF9AB9B5017253B; // 0x0BA8 (size: 0xA0)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_B3B2E2CC4AC6BDD72F0930AA35360A4A; // 0x0C48 (size: 0x78)
    FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_41E32E37427E7526BC7C55AE988392C4; // 0x0CC0 (size: 0x188)
    int32 WheelRotationSpeedFactor;                                                   // 0x0E48 (size: 0x4)

    void AnimGraph(FPoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_LargeFieldMultiRLW_AnimGraphNode_TransitionResult_E00926344E69BD4B00DDA592C7CE2833();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_LargeFieldMultiRLW_AnimGraphNode_SequencePlayer_6489084246F34D0F5D287BA69BBA1FC6();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_LargeFieldMultiRLW_AnimGraphNode_SequencePlayer_BD9823754777F18B2840019A06D954AF();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_LargeFieldMultiRLW_AnimGraphNode_TransitionResult_43E185E14AA8357BEAEED489927ED49F();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_LargeFieldMultiRLW_AnimGraphNode_TransitionResult_900AD9CF4240F1BEA2A3F1A7387B1B08();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_LargeFieldMultiRLW_AnimGraphNode_BlendSpacePlayer_D48086DD40AB2A2C6E6F1F8C863379E7();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_LargeFieldMultiRLW_AnimGraphNode_SequencePlayer_96E518CD4E68D78B39F24EB4F80D90CB();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_LargeFieldMultiRLW_AnimGraphNode_SequencePlayer_EABD90F1493AEF84F7610DBE7AABF8D0();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_LargeFieldMultiRLW_AnimGraphNode_TransitionResult_AF45622046E36903926FD5AF36787C59();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_LargeFieldMultiRLW_AnimGraphNode_TransitionResult_5106C6324D9479F0806C03840ED9C7D9();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_LargeFieldMultiRLW_AnimGraphNode_TransitionResult_ACFD573C4301741683E3AB94670E0654();
    void ExecuteUbergraph_ABP_LargeFieldMultiRLW(int32 EntryPoint);
}; // Size: 0xE4C

#endif
