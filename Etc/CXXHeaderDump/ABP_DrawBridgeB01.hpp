#ifndef UE4SS_SDK_ABP_DrawBridgeB01_HPP
#define UE4SS_SDK_ABP_DrawBridgeB01_HPP

class UABP_DrawBridgeB01_C : public UDrawbridgeAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0270 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root_A8645E6D4AAF130A929E2CB47EA3A91D;               // 0x0278 (size: 0x30)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_4AC29A6B434464044BF1F5BC44F903BA; // 0x02A8 (size: 0xE0)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_01F22C2E49D2FB60751133BC27D3EBDE; // 0x0388 (size: 0xE0)
    FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_4D5B44A943180BB5895D059219EABDFD; // 0x0468 (size: 0xC0)

    void AnimGraph(FPoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_DrawBridgeB01_AnimGraphNode_BlendSpacePlayer_4AC29A6B434464044BF1F5BC44F903BA();
    void ExecuteUbergraph_ABP_DrawBridgeB01(int32 EntryPoint);
}; // Size: 0x528

#endif
