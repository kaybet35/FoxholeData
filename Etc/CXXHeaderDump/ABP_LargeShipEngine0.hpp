#ifndef UE4SS_SDK_ABP_LargeShipEngine0_HPP
#define UE4SS_SDK_ABP_LargeShipEngine0_HPP

class UABP_LargeShipEngine0_C : public ULargeShipEngineAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0280 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root_AF00048841D9054FF87D90AF62B3DC65;               // 0x0288 (size: 0x30)
    FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_B5E304E94FC9D9A88D19F2BE4380610D; // 0x02B8 (size: 0xC0)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_7E23931F483B599DDC3768A07B0A56F2; // 0x0378 (size: 0x78)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_AE5949C94813BB6F1269F48BACA97F52; // 0x03F0 (size: 0x78)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_CA76AD1D49B8AA3FED3468866B8B5F88; // 0x0468 (size: 0x78)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_0CE672564171C67EF33292BC41E58B86; // 0x04E0 (size: 0x78)

    void AnimGraph(FPoseLink& AnimGraph);
    void ExecuteUbergraph_ABP_LargeShipEngine0(int32 EntryPoint);
}; // Size: 0x558

#endif
