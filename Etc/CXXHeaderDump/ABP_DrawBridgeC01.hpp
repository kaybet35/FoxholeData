#ifndef UE4SS_SDK_ABP_DrawBridgeC01_HPP
#define UE4SS_SDK_ABP_DrawBridgeC01_HPP

class UABP_DrawBridgeC01_C : public UDrawbridgeAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0270 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root_3926DF494D73389A369506A9F02ADCAE;               // 0x0278 (size: 0x30)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_6B61435D4DD145CF702C1F98DA4B4246; // 0x02A8 (size: 0xE0)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_1A15BB8F403AFCC1CC65ADA21800CE3C; // 0x0388 (size: 0xE0)
    FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_7DF223444D889EFBAD4C738331A60621; // 0x0468 (size: 0xC0)

    void AnimGraph(FPoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_DrawBridgeC01_AnimGraphNode_BlendSpacePlayer_1A15BB8F403AFCC1CC65ADA21800CE3C();
    void ExecuteUbergraph_ABP_DrawBridgeC01(int32 EntryPoint);
}; // Size: 0x528

#endif
