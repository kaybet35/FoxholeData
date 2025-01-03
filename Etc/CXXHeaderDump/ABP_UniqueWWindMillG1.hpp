#ifndef UE4SS_SDK_ABP_UniqueWWindMillG1_HPP
#define UE4SS_SDK_ABP_UniqueWWindMillG1_HPP

class UABP_UniqueWWindMillG1_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0270 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root_A1D6984C431C4B7F6A4AE8B3E39FD76E;               // 0x0278 (size: 0x30)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_21FAD42842BFD4D80C25F09F445EF2AB; // 0x02A8 (size: 0x78)

    void AnimGraph(FPoseLink& AnimGraph);
    void ExecuteUbergraph_ABP_UniqueWWindMillG1(int32 EntryPoint);
}; // Size: 0x320

#endif
