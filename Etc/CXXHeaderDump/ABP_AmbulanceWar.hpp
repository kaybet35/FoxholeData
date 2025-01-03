#ifndef UE4SS_SDK_ABP_AmbulanceWar_HPP
#define UE4SS_SDK_ABP_AmbulanceWar_HPP

class UABP_AmbulanceWar_C : public USimVehicleAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02A0 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root_82B8116D4BA1139A448C2D93C43397F2;               // 0x02A8 (size: 0x30)
    FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_BB6D15154FFEBA0A1DC80B8D4C03FFB5; // 0x02D8 (size: 0xC0)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_55B460AD42D8FF1A542A92ACEE8D4E14; // 0x0398 (size: 0x78)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_32F025C54BE51EE19D4634BC71701CBA; // 0x0410 (size: 0x78)
    FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_DECABF24459921C41EB610949DD12FC5; // 0x0488 (size: 0x188)

    void AnimGraph(FPoseLink& AnimGraph);
    void ExecuteUbergraph_ABP_AmbulanceWar(int32 EntryPoint);
}; // Size: 0x610

#endif
