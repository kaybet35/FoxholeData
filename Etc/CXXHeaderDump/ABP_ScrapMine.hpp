#ifndef UE4SS_SDK_ABP_ScrapMine_HPP
#define UE4SS_SDK_ABP_ScrapMine_HPP

class UABP_ScrapMine_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0270 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root_BBD5DB684FD6B4690E7981B0D668E3E5;               // 0x0278 (size: 0x30)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_C06E7E8F4875B7340777039E056B1422; // 0x02A8 (size: 0x78)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_24EFE54D43FC8360DEF53A835A16D9D9; // 0x0320 (size: 0x78)
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_95EFE262413AA28C4705FF9317797BA4; // 0x0398 (size: 0xA0)
    bool IsActive;                                                                    // 0x0438 (size: 0x1)

    void AnimGraph(FPoseLink& AnimGraph);
    void BlueprintUpdateAnimation(float DeltaTimeX);
    void ExecuteUbergraph_ABP_ScrapMine(int32 EntryPoint);
}; // Size: 0x439

#endif
