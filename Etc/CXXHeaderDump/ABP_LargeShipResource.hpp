#ifndef UE4SS_SDK_ABP_LargeShipResource_HPP
#define UE4SS_SDK_ABP_LargeShipResource_HPP

class UABP_LargeShipResource_C : public ULargeShipAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0370 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root_3DC360EC4CB7904A1FC5F4B28CF42252;               // 0x0378 (size: 0x30)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_10EF260545280258AAA19F847438BE52; // 0x03A8 (size: 0x78)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_7013B8E940845D5B1BA29E8A6836EE16; // 0x0420 (size: 0xE0)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_7EEECE3144484ED651231D8C98CB2313; // 0x0500 (size: 0xE0)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_58E28579423AC6E8946FA7A89E3A5C31; // 0x05E0 (size: 0xE0)
    FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_E37033F6444C4132481CDCBC80F24EFF; // 0x06C0 (size: 0xC0)
    FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_550E1D124B5DCB680436A2BB5401EC0F; // 0x0780 (size: 0xC0)

    void AnimGraph(FPoseLink& AnimGraph);
    void ExecuteUbergraph_ABP_LargeShipResource(int32 EntryPoint);
}; // Size: 0x840

#endif
