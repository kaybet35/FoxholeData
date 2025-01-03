#ifndef UE4SS_SDK_ABP_OIlWell_HPP
#define UE4SS_SDK_ABP_OIlWell_HPP

class UABP_OIlWell_C : public UFacilityRefineryAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02A0 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root_D2AEAFD741C70940A9DE2A8840D35A42;               // 0x02A8 (size: 0x30)
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_1E14B3484208EE358512058422C836AA; // 0x02D8 (size: 0xA0)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_A6A583284871B4792BA92EA999003EFF; // 0x0378 (size: 0x78)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_FA394A9E47F06A63CC37359BA7CEAEF9; // 0x03F0 (size: 0xE0)

    void AnimGraph(FPoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_OIlWell_AnimGraphNode_BlendSpacePlayer_FA394A9E47F06A63CC37359BA7CEAEF9();
    void ExecuteUbergraph_ABP_OIlWell(int32 EntryPoint);
}; // Size: 0x4D0

#endif
