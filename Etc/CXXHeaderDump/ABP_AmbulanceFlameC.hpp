#ifndef UE4SS_SDK_ABP_AmbulanceFlameC_HPP
#define UE4SS_SDK_ABP_AmbulanceFlameC_HPP

class UABP_AmbulanceFlameC_C : public USimVehicleGunnerSupportAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0300 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root_1AC423634F7B9332F41DD4ABB42427C0;               // 0x0308 (size: 0x30)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_5A89423A461ABC784A66D1B43C82ECE4; // 0x0338 (size: 0xE0)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_99A58EA844F22BA2C80844AC8748DE37; // 0x0418 (size: 0xE0)
    FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_9D22831645FD04D719CC20A02580B9E7; // 0x04F8 (size: 0xC0)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_8AC8668B4060414101D3B8A42FE751DF; // 0x05B8 (size: 0x78)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_CD86B2CC452410A2C57DB4BCEFBC62B2; // 0x0630 (size: 0x78)
    FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_124312F9477990D7812D99B2DB920822; // 0x06A8 (size: 0x188)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_88AEE2C3404DD0256F4B499AD2758A29; // 0x0830 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2E8BDD8C43F1AE2E9A25B8B6C1A6AC2F; // 0x0858 (size: 0x28)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_CD6DC3C943E6278C738B4C873C959576; // 0x0880 (size: 0x78)
    FAnimNode_StateResult AnimGraphNode_StateResult_C03093BF411A0E767ACC92901092E569; // 0x08F8 (size: 0x30)
    FAnimNode_StateResult AnimGraphNode_StateResult_08E0E1844922D4ED93A385B7CEAD2926; // 0x0928 (size: 0x30)
    FAnimNode_StateMachine AnimGraphNode_StateMachine_9666569148FA6DF336FE1CB2633E58A4; // 0x0958 (size: 0xB0)

    void AnimGraph(FPoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_AmbulanceFlameC_AnimGraphNode_TransitionResult_88AEE2C3404DD0256F4B499AD2758A29();
    void ExecuteUbergraph_ABP_AmbulanceFlameC(int32 EntryPoint);
}; // Size: 0xA08

#endif
