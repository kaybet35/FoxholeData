#ifndef UE4SS_SDK_ABP_TrainLiftingBridge_HPP
#define UE4SS_SDK_ABP_TrainLiftingBridge_HPP

class UABP_TrainLiftingBridge_C : public UDrawbridgeAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0270 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root_DCBDE1294F35EF9EB60078A74CFC5909;               // 0x0278 (size: 0x30)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_49D542854EA777E4F91CBBA7BC93B31D; // 0x02A8 (size: 0xE0)

    void AnimGraph(FPoseLink& AnimGraph);
    void ExecuteUbergraph_ABP_TrainLiftingBridge(int32 EntryPoint);
}; // Size: 0x388

#endif
