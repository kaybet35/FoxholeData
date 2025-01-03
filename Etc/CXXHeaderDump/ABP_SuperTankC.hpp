#ifndef UE4SS_SDK_ABP_SuperTankC_HPP
#define UE4SS_SDK_ABP_SuperTankC_HPP

class UABP_SuperTankC_C : public USimVehicleGunnerSupportAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0300 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root_FFCECAFA4B668A204601D6AD92818BD1;               // 0x0308 (size: 0x30)
    FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_2CF6B27A40E4BC34DFE0FB84B551DB1E; // 0x0338 (size: 0xC0)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_F87E2CB04C091800A0112EB9A56B9D70; // 0x03F8 (size: 0x78)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_553E40E54D31FDB48FA63D90BD5E1832; // 0x0470 (size: 0xE0)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_642B7B5848CEA40AD32417A35D92E59B; // 0x0550 (size: 0xE0)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_CF5E3FE44017FB4938305AA725C19ADD; // 0x0630 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_8742BC95455A322640254784FC13D874; // 0x0658 (size: 0x28)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_F2CDB8F342BDA8974F314FAB944C6814; // 0x0680 (size: 0x78)
    FAnimNode_StateResult AnimGraphNode_StateResult_F12193414D44DAD8F50CEBB60CF698D2; // 0x06F8 (size: 0x30)
    FAnimNode_StateResult AnimGraphNode_StateResult_3BAA680B4E3A0B8B04CB518457D6FADD; // 0x0728 (size: 0x30)
    FAnimNode_StateMachine AnimGraphNode_StateMachine_85D117E54527551A81D74C95505689C4; // 0x0758 (size: 0xB0)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_B6DD602948629AC1E43F2B83B21CAD45; // 0x0808 (size: 0x78)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_DD1A20FD443EFCB2E0CE978B37123627; // 0x0880 (size: 0x78)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_9B3C830342AAA6A87ECA5C9FFB6BEEE3; // 0x08F8 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_683953E94607F7C8CD62D094D4820DCB; // 0x0920 (size: 0x28)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_9FA325254B72FC85F5645986DDF8C353; // 0x0948 (size: 0x78)
    FAnimNode_StateResult AnimGraphNode_StateResult_FADAC10049E5FAA4037FA9AC74D55F91; // 0x09C0 (size: 0x30)
    FAnimNode_StateResult AnimGraphNode_StateResult_05EA46F14C2E522DECC9C29AAC96335F; // 0x09F0 (size: 0x30)
    FAnimNode_StateMachine AnimGraphNode_StateMachine_39536F0C4382CED48B189088429ED0E6; // 0x0A20 (size: 0xB0)
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_A7C11A494593A5081838769C55C61815; // 0x0AD0 (size: 0xA0)
    FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_6097271C470A71499BFA9D9FE8D256BD; // 0x0B70 (size: 0xC0)
    FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_3C432C074E7AA1BEB405ECBB18EBFEAF; // 0x0C30 (size: 0x188)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_CE1B34894FAADC8E61835F8F6A39D51D; // 0x0DB8 (size: 0x78)
    FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_221B3B0149149F9A8116AEA018162D79; // 0x0E30 (size: 0xC8)
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_3F75553845FED345E34082964BE5C6A0; // 0x0EF8 (size: 0xA0)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3925B2AD477DFDFCC7EDA9B71DFAE52F; // 0x0F98 (size: 0x78)

    void AnimGraph(FPoseLink& AnimGraph);
    void ExecuteUbergraph_ABP_SuperTankC(int32 EntryPoint);
}; // Size: 0x1010

#endif
