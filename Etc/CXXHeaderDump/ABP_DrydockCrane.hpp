#ifndef UE4SS_SDK_ABP_DrydockCrane_HPP
#define UE4SS_SDK_ABP_DrydockCrane_HPP

class UABP_DrydockCrane_C : public UBuildArmAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0320 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root_EA88F48E4AF345DC286F5A96F4DAB392;               // 0x0328 (size: 0x30)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_835B80414761BA821665CE9F6D309748; // 0x0358 (size: 0xE0)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_10B7EA654DDD425FCDE79AA270EDCD3C; // 0x0438 (size: 0xE0)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_82A8CABB4A4A6E0958485591C460E3C2; // 0x0518 (size: 0xE0)
    FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_7F5BCA0143BF35D0DA77B7BAFBE548B3; // 0x05F8 (size: 0xC0)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_B21B825C402EB8148955049D17AB326E; // 0x06B8 (size: 0x78)

    void AnimGraph(FPoseLink& AnimGraph);
    void ExecuteUbergraph_ABP_DrydockCrane(int32 EntryPoint);
}; // Size: 0x730

#endif
