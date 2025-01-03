#ifndef UE4SS_SDK_ABP_Trailer_HPP
#define UE4SS_SDK_ABP_Trailer_HPP

class UABP_Trailer_C : public USimVehicleAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02A0 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root_F08748884271BA36EE91918C89BBCF63;               // 0x02A8 (size: 0x30)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_1DC72DE54D57BD33719D12A47C79744E; // 0x02D8 (size: 0x78)
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_0DB54E734A9999BAFFF527BE2083EC1A; // 0x0350 (size: 0xA0)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_7EFC66124310602C84401EBABE6EF8C8; // 0x03F0 (size: 0x78)
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_6B895A2B42056DE60BF374B27925B154; // 0x0468 (size: 0xA0)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_6C1C968D459A3912BCC12581F5E75D5D; // 0x0508 (size: 0x78)

    void AnimGraph(FPoseLink& AnimGraph);
    void ExecuteUbergraph_ABP_Trailer(int32 EntryPoint);
}; // Size: 0x580

#endif
