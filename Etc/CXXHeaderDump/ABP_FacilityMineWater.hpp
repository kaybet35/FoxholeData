#ifndef UE4SS_SDK_ABP_FacilityMineWater_HPP
#define UE4SS_SDK_ABP_FacilityMineWater_HPP

class UABP_FacilityMineWater_C : public UFacilityRefineryAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02A0 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root_D9BA90E0475C5836FE3EBB91F40C5586;               // 0x02A8 (size: 0x30)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_12412FE24E51D9EE81B4F3B8FCDE5A4B; // 0x02D8 (size: 0x78)
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_1826C5164A1CF3FEAB7A5481B52B98C4; // 0x0350 (size: 0xA0)

    void AnimGraph(FPoseLink& AnimGraph);
    void ExecuteUbergraph_ABP_FacilityMineWater(int32 EntryPoint);
}; // Size: 0x3F0

#endif
