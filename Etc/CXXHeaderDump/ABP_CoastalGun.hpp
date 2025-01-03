#ifndef UE4SS_SDK_ABP_CoastalGun_HPP
#define UE4SS_SDK_ABP_CoastalGun_HPP

class UABP_CoastalGun_C : public UCoastalGunAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0270 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root_48D83C304E6BD3480B76718F9A80C178;               // 0x0278 (size: 0x30)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_3DF0C6544E1193E9757FC1B81A3E281C; // 0x02A8 (size: 0xE0)
    FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_94A0B6494353979172BAF5A7327F38EE; // 0x0388 (size: 0xC0)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_1545BE9342EC08F839D57A9ACF990CF6; // 0x0448 (size: 0xE0)
    FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_B5C08E5F4ECB84E4F9B89EB55277A1D0; // 0x0528 (size: 0xC0)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_08B658DD4EF34EEA933DAB88FA4E0474; // 0x05E8 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_421A20EE4FE2D999C54AED89D568F3EF; // 0x0610 (size: 0x28)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_A9EF42F2437EF26A94632B9AF8CAE4E5; // 0x0638 (size: 0x78)
    FAnimNode_StateResult AnimGraphNode_StateResult_C62541B74D6D51B091BA029CA977DA81; // 0x06B0 (size: 0x30)
    FAnimNode_StateResult AnimGraphNode_StateResult_FB4B499848F70C1CB7053AB4235C288C; // 0x06E0 (size: 0x30)
    FAnimNode_StateMachine AnimGraphNode_StateMachine_8B1EFFA445C9E40B272D9086694BA322; // 0x0710 (size: 0xB0)
    bool isShooting;                                                                  // 0x07C0 (size: 0x1)
    float horizontalAiming_Yaw;                                                       // 0x07C4 (size: 0x4)
    float verticalAiming_Pitch;                                                       // 0x07C8 (size: 0x4)

    void AnimGraph(FPoseLink& AnimGraph);
    void ExecuteUbergraph_ABP_CoastalGun(int32 EntryPoint);
}; // Size: 0x7CC

#endif
