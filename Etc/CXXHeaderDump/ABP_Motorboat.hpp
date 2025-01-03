#ifndef UE4SS_SDK_ABP_Motorboat_HPP
#define UE4SS_SDK_ABP_Motorboat_HPP

class UABP_Motorboat_C : public USimVehicleAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02A0 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root_A5C01A1C4A5C8396D3F7418237E22E60;               // 0x02A8 (size: 0x30)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_B5973086402C8FEF4A44B0AAA8EF2064; // 0x02D8 (size: 0x78)
    FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_0BA2E74240488500F567138A9A8842BD; // 0x0350 (size: 0x188)

    void AnimGraph(FPoseLink& AnimGraph);
    void ExecuteUbergraph_ABP_Motorboat(int32 EntryPoint);
}; // Size: 0x4D8

#endif
