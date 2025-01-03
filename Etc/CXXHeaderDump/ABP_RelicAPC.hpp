#ifndef UE4SS_SDK_ABP_RelicAPC_HPP
#define UE4SS_SDK_ABP_RelicAPC_HPP

class UABP_RelicAPC_C : public USimVehicleGunnerSupportAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0300 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root_ABCF6D2144B4D6E32F4FE8A030B60986;               // 0x0308 (size: 0x30)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_28BD46004A1BCCEA7945AF81F75B14F4; // 0x0338 (size: 0x78)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_EA17864D400EF7D00E89AD9E4896EE81; // 0x03B0 (size: 0x78)
    FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_880B91BD4C3A042D0CD988BDE1EBB39E; // 0x0428 (size: 0xC0)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_398489CE4F27385D47927F8FE1EA9841; // 0x04E8 (size: 0x78)
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_FC2BD80F41349CB3A35D27A2940876B6; // 0x0560 (size: 0xA0)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_21F5A0C2499A33DE8B91A1BD551BFCA4; // 0x0600 (size: 0xE0)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_1193ED2E49590628E2F5F88C766951F7; // 0x06E0 (size: 0xE0)

    void AnimGraph(FPoseLink& AnimGraph);
    void ExecuteUbergraph_ABP_RelicAPC(int32 EntryPoint);
}; // Size: 0x7C0

#endif
