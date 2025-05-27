#ifndef UE4SS_SDK_ABP_T1ArtilleryGarrison_HPP
#define UE4SS_SDK_ABP_T1ArtilleryGarrison_HPP

class UABP_T1ArtilleryGarrison_C : public UFortStaticArtilleryAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0270 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root_1AF986514B2CF3E17A2312883FE5D379;               // 0x0278 (size: 0x30)
    FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_A2081DD146F87B9E0AFD938302201183; // 0x02A8 (size: 0xC0)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_D393333F40694890F975A499D6C1EDE5; // 0x0368 (size: 0xE0)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_E326BB86473EB5D2637C1098E53610A5; // 0x0448 (size: 0xE0)

    void AnimGraph(FPoseLink& AnimGraph);
    void ExecuteUbergraph_ABP_T1ArtilleryGarrison(int32 EntryPoint);
}; // Size: 0x528

#endif
