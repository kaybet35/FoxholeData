#ifndef UE4SS_SDK_ABP_LargeCrane_HPP
#define UE4SS_SDK_ABP_LargeCrane_HPP

class UABP_LargeCrane_C : public UCraneComponentAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0290 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root_7DB0BF00447A179D0BD1B7A8229BE8C6;               // 0x0298 (size: 0x30)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_B10428E3421248D2CCEA9A836ECE9D2D; // 0x02C8 (size: 0x78)
    FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_C7E776C9481588C5411447B779165D77; // 0x0340 (size: 0xC0)
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_BD27A25042CB2EDF16B2A98DDAA0A3DC; // 0x0400 (size: 0xA0)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_30D6C679430F9393764C32ACFF5E80D1; // 0x04A0 (size: 0x78)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_EBF9A7F34237EE1BA898588256CF668B; // 0x0518 (size: 0x78)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_D94A0FF442F207300555D3911A92BF56; // 0x0590 (size: 0xE0)
    FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_E07A7FFC4A50708923FF18A99A2B4605; // 0x0670 (size: 0x188)
    FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_D17FCC31465BFACD1F2156BB79E5FD09; // 0x07F8 (size: 0x188)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_450089A24C263139702585BDCCAE3780; // 0x0980 (size: 0xE0)

    void AnimGraph(FPoseLink& AnimGraph);
    void ExecuteUbergraph_ABP_LargeCrane(int32 EntryPoint);
}; // Size: 0xA60

#endif
