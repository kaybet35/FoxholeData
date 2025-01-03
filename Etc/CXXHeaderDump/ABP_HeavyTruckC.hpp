#ifndef UE4SS_SDK_ABP_HeavyTruckC_HPP
#define UE4SS_SDK_ABP_HeavyTruckC_HPP

class UABP_HeavyTruckC_C : public USimVehicleAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02A0 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root_5EB836224547921200685FB93563AD5C;               // 0x02A8 (size: 0x30)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_6C0FAC3E4FCEEED0461A6CBBAB8E1F47; // 0x02D8 (size: 0x78)
    FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_2BFD89DC4E7CBBD4AC2BEEBF52A48150; // 0x0350 (size: 0xC8)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_DFF9DBED4DABD1B264DDD58677304B6E; // 0x0418 (size: 0x78)
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_B96AE764401648C545A1E5AC92999AB8; // 0x0490 (size: 0xA0)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_C1D086194EC58857B6A8EA91201708AB; // 0x0530 (size: 0x78)
    FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_F9E06C324ACF631DA9B06A9CF8FAD26B; // 0x05A8 (size: 0x188)

    void AnimGraph(FPoseLink& AnimGraph);
    void ExecuteUbergraph_ABP_HeavyTruckC(int32 EntryPoint);
}; // Size: 0x730

#endif
