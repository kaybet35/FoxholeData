#ifndef UE4SS_SDK_ABP_FortT2ATGunAI_HPP
#define UE4SS_SDK_ABP_FortT2ATGunAI_HPP

class UABP_FortT2ATGunAI_C : public UGunTurretAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0270 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root_CA3842194EAE2B7EBF9503A5E85A203C;               // 0x0278 (size: 0x30)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_285F5103407ABA4EB1ECA394CDAC88B5; // 0x02A8 (size: 0xE0)

    void AnimGraph(FPoseLink& AnimGraph);
    void ExecuteUbergraph_ABP_FortT2ATGunAI(int32 EntryPoint);
}; // Size: 0x388

#endif
