#ifndef UE4SS_SDK_ABP_TruckWar_HPP
#define UE4SS_SDK_ABP_TruckWar_HPP

class UABP_TruckWar_C : public USimVehicleAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02A0 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root_83A045FC41A81781ED0254BA03638AF7;               // 0x02A8 (size: 0x30)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_CE00AA42453ED22D07B4A195E05FD1D6; // 0x02D8 (size: 0x78)
    FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_A012ADD94ACA91D0FC8616B2C998C5FF; // 0x0350 (size: 0x188)

    void AnimGraph(FPoseLink& AnimGraph);
    void ExecuteUbergraph_ABP_TruckWar(int32 EntryPoint);
}; // Size: 0x4D8

#endif
