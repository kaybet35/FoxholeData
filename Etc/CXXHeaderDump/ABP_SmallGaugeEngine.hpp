#ifndef UE4SS_SDK_ABP_SmallGaugeEngine_HPP
#define UE4SS_SDK_ABP_SmallGaugeEngine_HPP

class UABP_SmallGaugeEngine_C : public UInfantryRailVehicleAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02F0 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root_3F9BC9ED46926B8E92C2D486D11C4F57;               // 0x02F8 (size: 0x30)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_EE12B8F14D1D4169641FC9853E990E4A; // 0x0328 (size: 0x78)
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_BD9017B14C5ABBFAC65B8EB5090CE13B; // 0x03A0 (size: 0xA0)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_32ECA82F45317A8CD596D29CD15669CB; // 0x0440 (size: 0x78)

    void AnimGraph(FPoseLink& AnimGraph);
    void ExecuteUbergraph_ABP_SmallGaugeEngine(int32 EntryPoint);
}; // Size: 0x4B8

#endif
