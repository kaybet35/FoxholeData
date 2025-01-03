#ifndef UE4SS_SDK_ABP_TruckMultiC_HPP
#define UE4SS_SDK_ABP_TruckMultiC_HPP

class UABP_TruckMultiC_C : public USimVehicleGunnerSupportAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0300 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root_B5D95CD74D525DB6746EA2AB8A47DB86;               // 0x0308 (size: 0x30)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_5E7A674E45771DDFC7BCFC91B81BA9B4; // 0x0338 (size: 0x78)
    FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_353A646D4362CB7939437DA81561923F; // 0x03B0 (size: 0x188)
    FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_66116B4A417DB8AE686225A2EAB19705; // 0x0538 (size: 0xC0)
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_628EC86E479267C9C0D6FB8CE62E0C06; // 0x05F8 (size: 0xA0)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_DBE3FF2C42E28D68BAD3EBB758A81537; // 0x0698 (size: 0x78)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_8A1A1C454FF8E3F4504B4E953D6067E0; // 0x0710 (size: 0xE0)

    void AnimGraph(FPoseLink& AnimGraph);
    void ExecuteUbergraph_ABP_TruckMultiC(int32 EntryPoint);
}; // Size: 0x7F0

#endif
