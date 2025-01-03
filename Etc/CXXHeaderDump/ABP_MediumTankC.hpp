#ifndef UE4SS_SDK_ABP_MediumTankC_HPP
#define UE4SS_SDK_ABP_MediumTankC_HPP

class UABP_MediumTankC_C : public USimVehicleGunnerSupportAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0300 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root_14FE472D4C928C18CC9FDCB1F58971D9;               // 0x0308 (size: 0x30)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_11EA0559403043FCE82D96BC5026ECD5; // 0x0338 (size: 0x78)
    FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_9397FD034FC2FED30DE0D6814AF16DD8; // 0x03B0 (size: 0xC0)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_1270BCE54BCBA4A017A37FB12E6AE6BA; // 0x0470 (size: 0xE0)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_BFDF9A2444915DFAF401149684C4DDFE; // 0x0550 (size: 0xE0)
    FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_C8FAE51B49D4910B1DFC98A4553F2886; // 0x0630 (size: 0x188)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_FB68F5D6444CB8960064869C8EA6122F; // 0x07B8 (size: 0x78)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_BD3AFA6A48C995C24DBE859C8AD591B5; // 0x0830 (size: 0x78)
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_E655C29D49B79CDC08CBA1AFAC681828; // 0x08A8 (size: 0xA0)
    FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_611AAABA4E3B4312F86201B07986703F; // 0x0948 (size: 0xC8)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3A81845B42E7F6B83CC1B3B1E6E5C8CE; // 0x0A10 (size: 0x78)
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_EFE95E9B42802AA144259B92020A9AD6; // 0x0A88 (size: 0xA0)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_79D33CFF45809DA72ADC22B090D9794B; // 0x0B28 (size: 0x78)
    FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_2F2D71024C9D7113094392B160BD3376; // 0x0BA0 (size: 0xC0)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_42D6789243B07FAB47E323946E1AD83E; // 0x0C60 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_CFCEECEF4BE74882C87E51AE387F567C; // 0x0C88 (size: 0x28)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2D33700B4D2441AC6DC196BBBD8D2735; // 0x0CB0 (size: 0x78)
    FAnimNode_StateResult AnimGraphNode_StateResult_3DC14A6C48672E01EEE2BDA13F7E4B49; // 0x0D28 (size: 0x30)
    FAnimNode_StateResult AnimGraphNode_StateResult_A4E9B6EF418A4A07DA4CC59311B743BD; // 0x0D58 (size: 0x30)
    FAnimNode_StateMachine AnimGraphNode_StateMachine_8921F8AC4D5C5B8A9B0440968F64DF7F; // 0x0D88 (size: 0xB0)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_3E56F9204CD2DD906F2633B44C8D36FD; // 0x0E38 (size: 0xE0)

    void AnimGraph(FPoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MediumTankC_AnimGraphNode_TransitionResult_42D6789243B07FAB47E323946E1AD83E();
    void ExecuteUbergraph_ABP_MediumTankC(int32 EntryPoint);
}; // Size: 0xF18

#endif
