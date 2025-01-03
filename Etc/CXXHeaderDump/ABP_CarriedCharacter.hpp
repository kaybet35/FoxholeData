#ifndef UE4SS_SDK_ABP_CarriedCharacter_HPP
#define UE4SS_SDK_ABP_CarriedCharacter_HPP

class UABP_CarriedCharacter_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0270 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root_2571EA9640B2ED3B033F2CAD98C069FD;               // 0x0278 (size: 0x30)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3925B11147309409F5932C84746D5D23; // 0x02A8 (size: 0x78)

    void AnimGraph(FPoseLink& AnimGraph);
    void ExecuteUbergraph_ABP_CarriedCharacter(int32 EntryPoint);
}; // Size: 0x320

#endif
