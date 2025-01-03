#ifndef UE4SS_SDK_ABP_SulfurMine_HPP
#define UE4SS_SDK_ABP_SulfurMine_HPP

class UABP_SulfurMine_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0270 (size: 0x8)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_54646662403876F1A84DD4B8F996107B; // 0x0278 (size: 0x78)
    FAnimNode_Root AnimGraphNode_Root_9619F47547542C7496805AB03912A187;               // 0x02F0 (size: 0x30)
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_359277204339FF1F1F47769191C5756B; // 0x0320 (size: 0xA0)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_AEEAE57146EEA701E0FDDF90DA2EF3CE; // 0x03C0 (size: 0x78)
    FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_B64BC70647A5FE2127B05A93DB0D8149; // 0x0438 (size: 0xC0)
    bool IsActive;                                                                    // 0x04F8 (size: 0x1)

    void AnimGraph(FPoseLink& AnimGraph);
    void ExecuteUbergraph_ABP_SulfurMine(int32 EntryPoint);
}; // Size: 0x4F9

#endif
