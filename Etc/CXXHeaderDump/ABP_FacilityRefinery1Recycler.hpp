#ifndef UE4SS_SDK_ABP_FacilityRefinery1Recycler_HPP
#define UE4SS_SDK_ABP_FacilityRefinery1Recycler_HPP

class UABP_FacilityRefinery1Recycler_C : public UFacilityRefineryAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02A0 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root_5ADA20DF41F65D6C303E28B2AB2AFCD0;               // 0x02A8 (size: 0x30)
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_6A74C41E4D5C347F22B181BBC29A1DB1; // 0x02D8 (size: 0xA0)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_DB8D957445B7A24EBE86E7BB14492596; // 0x0378 (size: 0x78)

    void AnimGraph(FPoseLink& AnimGraph);
    void ExecuteUbergraph_ABP_FacilityRefinery1Recycler(int32 EntryPoint);
}; // Size: 0x3F0

#endif
