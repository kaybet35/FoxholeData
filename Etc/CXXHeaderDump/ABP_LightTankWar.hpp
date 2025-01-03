#ifndef UE4SS_SDK_ABP_LightTankWar_HPP
#define UE4SS_SDK_ABP_LightTankWar_HPP

class UABP_LightTankWar_C : public USimVehicleGunnerSupportAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0300 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root_2CAE8DB642D71956F55C4BB57F20C58F;               // 0x0308 (size: 0x30)
    FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_2305428E47FC6A1E1D4787B464317B63; // 0x0338 (size: 0x188)
    FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_BC035B004D81856CC0067CB043EB4817; // 0x04C0 (size: 0x188)
    FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_8EBE69FA48F2F4D01E0747A4CB272D36; // 0x0648 (size: 0xC0)
    FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_54F26B7E4D8CDFA931C33DA74A94DD6C; // 0x0708 (size: 0x188)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_919859A6445A13EB863104B1E684B7B0; // 0x0890 (size: 0xE0)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3ED3A149432B6F11FBD1E28C21355314; // 0x0970 (size: 0x78)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_CD97D57146A4B6677A325882E9EB32D1; // 0x09E8 (size: 0x78)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_BD811DA144BBF18D1567F3A23102DB38; // 0x0A60 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_6B515FC44F774C0DE4B1F9BF01531A94; // 0x0A88 (size: 0x28)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3225419C461E26479094549845D0A516; // 0x0AB0 (size: 0x78)
    FAnimNode_StateResult AnimGraphNode_StateResult_5BDC56A945E3F39428A163B113DFAFD0; // 0x0B28 (size: 0x30)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_8886D4354CA3D4321DA34FA07CA55006; // 0x0B58 (size: 0x78)
    FAnimNode_StateResult AnimGraphNode_StateResult_7C80F6314EFF7394599210833B1E4647; // 0x0BD0 (size: 0x30)
    FAnimNode_StateMachine AnimGraphNode_StateMachine_BCE357804BDCD32A8B0EBC9BBC7CC000; // 0x0C00 (size: 0xB0)
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_8CCF3B7E4361B503EB055CACDE2E5AF0; // 0x0CB0 (size: 0xA0)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_D1CFC7E54A57A05B24B3878A705B0CF5; // 0x0D50 (size: 0x78)
    FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_BCBAB7F84672539027B464A6A8A3DEA3; // 0x0DC8 (size: 0x188)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_A4E5D16547C749DD86DDE585EDFD445F; // 0x0F50 (size: 0x78)
    FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_04404EA84C1EF4B50F1D7584FBB058D5; // 0x0FC8 (size: 0xC8)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_4183595B4992FD00CD0393B4C6E7185B; // 0x1090 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_E1F2EACE41B50812420DFAB70831C83C; // 0x10B8 (size: 0x28)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_E9F1254B4014D61F7CC02F824342819E; // 0x10E0 (size: 0x78)
    FAnimNode_StateResult AnimGraphNode_StateResult_6DDB3CDE410DD533F3B52C846BDF68A1; // 0x1158 (size: 0x30)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_7AE70DAA42222D56828BA6A9EF565ACF; // 0x1188 (size: 0x78)
    FAnimNode_StateResult AnimGraphNode_StateResult_D39A786E46B90A0B04C27C85C1058F8C; // 0x1200 (size: 0x30)
    FAnimNode_StateMachine AnimGraphNode_StateMachine_9E7383C740F5DE22F42B359A6A181F35; // 0x1230 (size: 0xB0)

    void AnimGraph(FPoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_LightTankWar_AnimGraphNode_RotationOffsetBlendSpace_54F26B7E4D8CDFA931C33DA74A94DD6C();
    void ExecuteUbergraph_ABP_LightTankWar(int32 EntryPoint);
}; // Size: 0x12E0

#endif
