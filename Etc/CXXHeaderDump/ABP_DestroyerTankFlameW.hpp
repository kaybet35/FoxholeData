#ifndef UE4SS_SDK_ABP_DestroyerTankFlameW_HPP
#define UE4SS_SDK_ABP_DestroyerTankFlameW_HPP

class UABP_DestroyerTankFlameW_C : public USimVehicleGunnerSupportAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0300 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root_235610FC472BAFC9C5615CA8254F578D;               // 0x0308 (size: 0x30)
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_78A9BA6D43ED28313E3F4C8F115CA51F; // 0x0338 (size: 0xA0)
    FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_618DB6404F3FE5B8ED822E90D43E754E; // 0x03D8 (size: 0xC8)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_359478174987E50887DA20882D3E32DD; // 0x04A0 (size: 0x78)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_FAD9A8FD46ED6680105ACD92E0BDD37B; // 0x0518 (size: 0x78)
    FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_BC10FB32404A9DC64283EAB61C78C63E; // 0x0590 (size: 0x188)
    FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_6962E887434C1852529C2DA5ACCF9C28; // 0x0718 (size: 0xC0)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_B65D8BE74C6ACAFB4A9B2EA270D0D425; // 0x07D8 (size: 0x78)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_AEE8758041DA996E9B42279EE72B23A2; // 0x0850 (size: 0xE0)
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_8A2005084E4550A8876DD99E9B9078C3; // 0x0930 (size: 0xA0)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_381239134B80FC6940066C9949B67502; // 0x09D0 (size: 0x78)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_1614C54843ABE9BDABB04A876638AA62; // 0x0A48 (size: 0x78)

    void AnimGraph(FPoseLink& AnimGraph);
    void ExecuteUbergraph_ABP_DestroyerTankFlameW(int32 EntryPoint);
}; // Size: 0xAC0

#endif
