#ifndef UE4SS_SDK_ABP_FacilityRefinery1MetalPress_HPP
#define UE4SS_SDK_ABP_FacilityRefinery1MetalPress_HPP

class UABP_FacilityRefinery1MetalPress_C : public UFacilityRefineryAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02A0 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root_4B444BF344D616BB5DECF39CA72FD40A;               // 0x02A8 (size: 0x30)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_7DD41EE74F762819BF4B8EADEC7A7EB0; // 0x02D8 (size: 0x78)
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_718EFED947D4F1C537FD96AC6A30DCF3; // 0x0350 (size: 0xA0)

    void AnimGraph(FPoseLink& AnimGraph);
    void ExecuteUbergraph_ABP_FacilityRefinery1MetalPress(int32 EntryPoint);
}; // Size: 0x3F0

#endif
