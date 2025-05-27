#ifndef UE4SS_SDK_ABP_FortGunner_HPP
#define UE4SS_SDK_ABP_FortGunner_HPP

class UABP_FortGunner_C : public UModularMountAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0280 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root_643351C248238D7C077A1E92331227F6;               // 0x0288 (size: 0x30)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_05C474F04B4261C7491FA58A3A1E66EC; // 0x02B8 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_0F29BAF7454C8C4B971B25AE28B397B0; // 0x02E0 (size: 0x28)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_90B0DE044F7AC417A412EF8C8FDB4CCA; // 0x0308 (size: 0xE0)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_67891E2D477590E93AD14BA3597A0FD8; // 0x03E8 (size: 0xE0)
    FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_07FDA1C249972433B7C7898CD145E7C4; // 0x04C8 (size: 0xC0)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_FB754BE949CA0DC2FA21F286CC4F2F56; // 0x0588 (size: 0xE0)
    FAnimNode_StateResult AnimGraphNode_StateResult_58EF654B450909B72253948DB4AAFCC8; // 0x0668 (size: 0x30)
    FAnimNode_StateResult AnimGraphNode_StateResult_4E500817466AFDDC9A13E6A57BCB1457; // 0x0698 (size: 0x30)
    FAnimNode_StateMachine AnimGraphNode_StateMachine_835FFB5244B607E1EE75E3AAD9738C41; // 0x06C8 (size: 0xB0)

    void AnimGraph(FPoseLink& AnimGraph);
    void ExecuteUbergraph_ABP_FortGunner(int32 EntryPoint);
}; // Size: 0x778

#endif
