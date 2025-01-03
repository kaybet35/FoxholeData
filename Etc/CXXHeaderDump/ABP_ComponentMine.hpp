#ifndef UE4SS_SDK_ABP_ComponentMine_HPP
#define UE4SS_SDK_ABP_ComponentMine_HPP

class UABP_ComponentMine_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0270 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root_A12E61744451328260B5659D08700247;               // 0x0278 (size: 0x30)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_42C492DE423C52AA79574B98D5876339; // 0x02A8 (size: 0x78)
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_E5F6FAB5454F06A5CC5ED9B25201A2CA; // 0x0320 (size: 0xA0)
    bool IsActive;                                                                    // 0x03C0 (size: 0x1)

    void AnimGraph(FPoseLink& AnimGraph);
    void ExecuteUbergraph_ABP_ComponentMine(int32 EntryPoint);
}; // Size: 0x3C1

#endif
