#ifndef UE4SS_SDK_ABP_ShipCrane_HPP
#define UE4SS_SDK_ABP_ShipCrane_HPP

class UABP_ShipCrane_C : public UCraneComponentAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0290 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root_82F04D30458274A3BF3EDD801EC9561D;               // 0x0298 (size: 0x30)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_4EC8563141EE9F13F01FD48E2643B792; // 0x02C8 (size: 0xE0)
    FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_92AFA49747BDA2AE2BE191A5B653B871; // 0x03A8 (size: 0xC0)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_7F0A67F14C5B4F56869DA6AAF9639375; // 0x0468 (size: 0xE0)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_1415D80C44D152923CDB8B839E34D2FC; // 0x0548 (size: 0xE0)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_F3D463C141C0EEC11F6BB69FF27F566E; // 0x0628 (size: 0xE0)

    void AnimGraph(FPoseLink& AnimGraph);
    void ExecuteUbergraph_ABP_ShipCrane(int32 EntryPoint);
}; // Size: 0x708

#endif
