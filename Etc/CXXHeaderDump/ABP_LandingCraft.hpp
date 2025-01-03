#ifndef UE4SS_SDK_ABP_LandingCraft_HPP
#define UE4SS_SDK_ABP_LandingCraft_HPP

class UABP_LandingCraft_C : public ULandingCraftAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0300 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root_38E74C3E4A9BC3D4CC4953B3A34F2CB0;               // 0x0308 (size: 0x30)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_659000E14CACF1E861A854B7F7A36E6D; // 0x0338 (size: 0xE0)
    FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_77DD1C4F4E8EA73CF879B6A524D3F757; // 0x0418 (size: 0x188)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_CCF8ACE047CAD0002FC92DBA70564608; // 0x05A0 (size: 0x78)
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_AE5B47554BB01860C4A8B186D5845A76; // 0x0618 (size: 0xA0)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_1668B3DC40D5730078AD7388B33B8637; // 0x06B8 (size: 0xE0)
    FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_EFDFC0BB4A9A90625307FEADD3EE3349; // 0x0798 (size: 0xC0)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_F3B29386466DDBF6C3898F9599BF4C8B; // 0x0858 (size: 0x78)
    FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_0182064C41EE59045A7A36B5A89ECB8F; // 0x08D0 (size: 0xC8)

    void AnimGraph(FPoseLink& AnimGraph);
    void ExecuteUbergraph_ABP_LandingCraft(int32 EntryPoint);
}; // Size: 0x998

#endif
