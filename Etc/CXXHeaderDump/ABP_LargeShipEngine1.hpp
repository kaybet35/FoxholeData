#ifndef UE4SS_SDK_ABP_LargeShipEngine1_HPP
#define UE4SS_SDK_ABP_LargeShipEngine1_HPP

class UABP_LargeShipEngine1_C : public ULargeShipEngineAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0280 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root_890FD4674FEF3A0B07C367887D873DBC;               // 0x0288 (size: 0x30)
    FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_680DC9E4492A5F160694FAA43294DE42; // 0x02B8 (size: 0xC0)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_9C55AAA341E4C2E5CA4808A65F4954A5; // 0x0378 (size: 0x78)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_CA288323428E840F31C79CAAF7783470; // 0x03F0 (size: 0x78)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_9C11D4854FDE47D46FBB21B64A3BB20C; // 0x0468 (size: 0x78)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_977660C64D2437C247768C890D7CE559; // 0x04E0 (size: 0x78)

    void AnimGraph(FPoseLink& AnimGraph);
    void ExecuteUbergraph_ABP_LargeShipEngine1(int32 EntryPoint);
}; // Size: 0x558

#endif
