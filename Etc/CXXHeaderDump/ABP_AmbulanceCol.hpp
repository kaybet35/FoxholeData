#ifndef UE4SS_SDK_ABP_AmbulanceCol_HPP
#define UE4SS_SDK_ABP_AmbulanceCol_HPP

class UABP_AmbulanceCol_C : public USimVehicleGunnerSupportAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0300 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root_418A6B4D4E86C4D155EF0687DE0D1E15;               // 0x0308 (size: 0x30)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_54142B0644C78CA8F9602FBD7A9FBF25; // 0x0338 (size: 0x78)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_CE551205485DD1BB936FF0A80F3163C5; // 0x03B0 (size: 0x78)
    FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_4BCA42F94640BB995FE95AA656EC55B9; // 0x0428 (size: 0x188)
    FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_5DF0D6EE49F2514D5C29B3A394DC8E28; // 0x05B0 (size: 0xC0)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_1C28BDCA4A0E0DB1B0E83AA4FB4D3BEA; // 0x0670 (size: 0xE0)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_D94F91D843808FA5BEE63593B4627A8B; // 0x0750 (size: 0xE0)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_079987E3432C84A320F4A5AD4AFC7D6D; // 0x0830 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_523DC803444047EFAFB2E6BC00661E6C; // 0x0858 (size: 0x28)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_D7A5EF0C40B00CD66C67BFBE5396714B; // 0x0880 (size: 0x78)
    FAnimNode_StateResult AnimGraphNode_StateResult_A3045FA04EDCFCDC7FD1F99A91D37D7C; // 0x08F8 (size: 0x30)
    FAnimNode_StateResult AnimGraphNode_StateResult_CB83C7AE497FDF2C42B813AFB68BFB30; // 0x0928 (size: 0x30)
    FAnimNode_StateMachine AnimGraphNode_StateMachine_B5B91A0E46BCCD0CB81E8B8BBDFAD1BC; // 0x0958 (size: 0xB0)

    void AnimGraph(FPoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_AmbulanceCol_AnimGraphNode_TransitionResult_523DC803444047EFAFB2E6BC00661E6C();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_AmbulanceCol_AnimGraphNode_TransitionResult_079987E3432C84A320F4A5AD4AFC7D6D();
    void ExecuteUbergraph_ABP_AmbulanceCol(int32 EntryPoint);
}; // Size: 0xA08

#endif
