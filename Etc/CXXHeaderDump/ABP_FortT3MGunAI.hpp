#ifndef UE4SS_SDK_ABP_FortT3MGunAI_HPP
#define UE4SS_SDK_ABP_FortT3MGunAI_HPP

class UABP_FortT3MGunAI_C : public UFoxholeTurretAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0270 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root_21FD1FBB4B2434C7849592BFA5CF4CE1;               // 0x0278 (size: 0x30)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_BF19B7B44B99A6BA97BD34AAB1A50D88; // 0x02A8 (size: 0xE0)

    void AnimGraph(FPoseLink& AnimGraph);
    void ExecuteUbergraph_ABP_FortT3MGunAI(int32 EntryPoint);
}; // Size: 0x388

#endif
