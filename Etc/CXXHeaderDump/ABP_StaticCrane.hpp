#ifndef UE4SS_SDK_ABP_StaticCrane_HPP
#define UE4SS_SDK_ABP_StaticCrane_HPP

class UABP_StaticCrane_C : public UCraneComponentAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0290 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root_4FEE286F468A9B2956175D8EBF4AD1DF;               // 0x0298 (size: 0x30)
    FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_8F5EFB6D4DF9AF3C58F9D0A0C483911B; // 0x02C8 (size: 0x188)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_EE86026A4C7CC55C5ACC30B7AFFBA765; // 0x0450 (size: 0xE0)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_4E0BEC474351C353D7169CB099B544B1; // 0x0530 (size: 0xE0)
    FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_41AC4689434A62577CE9B5B2F5D0E8EB; // 0x0610 (size: 0xC0)
    FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_F1C685FF4971380ECF2FA3A7B1EE90BC; // 0x06D0 (size: 0x188)

    void AnimGraph(FPoseLink& AnimGraph);
    void ExecuteUbergraph_ABP_StaticCrane(int32 EntryPoint);
}; // Size: 0x858

#endif
