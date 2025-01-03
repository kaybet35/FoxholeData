#ifndef UE4SS_SDK_ABP_FortMGunAI_HPP
#define UE4SS_SDK_ABP_FortMGunAI_HPP

class UABP_FortMGunAI_C : public UFoxholeTurretAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0270 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root_FBCDABF44DBEB139E60BC7AFBB95805F;               // 0x0278 (size: 0x30)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_F45EB9E8445D890FCA5E46AD43AE1DF3; // 0x02A8 (size: 0xE0)

    void AnimGraph(FPoseLink& AnimGraph);
    void ExecuteUbergraph_ABP_FortMGunAI(int32 EntryPoint);
}; // Size: 0x388

#endif
