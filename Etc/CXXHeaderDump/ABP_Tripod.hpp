#ifndef UE4SS_SDK_ABP_Tripod_HPP
#define UE4SS_SDK_ABP_Tripod_HPP

class UABP_Tripod_C : public UDeployedTripodAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0280 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root_6E4899294BFCCC1F471D5092EECBD3A6;               // 0x0288 (size: 0x30)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_97CB5971452A29DCAC7613AC578EA9A8; // 0x02B8 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_9CD1D202424571349854D3931D1CEC6C; // 0x02E0 (size: 0x28)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_D272E00E40BF45C160F8C5ABAAC781DF; // 0x0308 (size: 0xE0)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_104BFD5E4EBCB7EE0D2E189B90EAD6CE; // 0x03E8 (size: 0xE0)
    FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_D5102401450D404C97EDB3AD65D4C338; // 0x04C8 (size: 0xC0)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_8A3CC69D46616C47C948D6AF9B43191B; // 0x0588 (size: 0xE0)
    FAnimNode_StateResult AnimGraphNode_StateResult_E6FBF3B04E01A5E0DDFEC6AC1E59541E; // 0x0668 (size: 0x30)
    FAnimNode_StateResult AnimGraphNode_StateResult_EE653F984F39BD7EED2D3FB0FE3E0470; // 0x0698 (size: 0x30)
    FAnimNode_StateMachine AnimGraphNode_StateMachine_7A5B62524FED6E6E8CD35C953148A2A5; // 0x06C8 (size: 0xB0)

    void AnimGraph(FPoseLink& AnimGraph);
    void ExecuteUbergraph_ABP_Tripod(int32 EntryPoint);
}; // Size: 0x778

#endif
