#ifndef UE4SS_SDK_ABP_PrototypeHalftrackW_HPP
#define UE4SS_SDK_ABP_PrototypeHalftrackW_HPP

class UABP_PrototypeHalftrackW_C : public USimVehicleGunnerSupportAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0300 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root_272D3BBF43BA8785D366EBAC5632CD50;               // 0x0308 (size: 0x30)
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_4C6B294447E97CB40E1F58AE3B8610D6; // 0x0338 (size: 0xA0)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_9297932644DE1AAF0BFE11B3E7E3FBA6; // 0x03D8 (size: 0x78)
    FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_06398BC44BBF3DEC5408BC97AD987316; // 0x0450 (size: 0xC0)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_FEC492AD43C7293C50AB87BE2BB95762; // 0x0510 (size: 0x78)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_E3B6877244184D1C89362B9BD6A38999; // 0x0588 (size: 0x78)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_79E331BC41DAD7751E9719B71168173F; // 0x0600 (size: 0xE0)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_4C3C35CC403DB257D0289FB3EB9855F2; // 0x06E0 (size: 0x78)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_FAB934954E34812A1F49E7A6FE93ACD4; // 0x0758 (size: 0x78)
    FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_14DB1D2C4ABA59C71DAB498C89F79A67; // 0x07D0 (size: 0x188)
    FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_2A49B3F84D396B83AEF7FDAC2E43B0C6; // 0x0958 (size: 0x188)
    FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_A4398899451B8AB08429E4AD25683D1C; // 0x0AE0 (size: 0xC0)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_7F35B5914CAE216117D8DDA9362E45CA; // 0x0BA0 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_661B8658438D9D492FC5B4896F239D8C; // 0x0BC8 (size: 0x28)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_46026DEA48DF5E4239D16093F11AE4F8; // 0x0BF0 (size: 0x78)
    FAnimNode_StateResult AnimGraphNode_StateResult_B394FCE747757F9582D1EEB6EEEA3498; // 0x0C68 (size: 0x30)
    FAnimNode_StateResult AnimGraphNode_StateResult_5547719A44C398BB146F938040E6285D; // 0x0C98 (size: 0x30)
    FAnimNode_StateMachine AnimGraphNode_StateMachine_C19471BC4BB4A3B6C6451CA7F298E632; // 0x0CC8 (size: 0xB0)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_628F515D454ADF5561E29ABE753163C7; // 0x0D78 (size: 0x78)
    FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_3F09F82B42D3CE82B4D86DB681D533B8; // 0x0DF0 (size: 0xC8)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_A9BDEB824343EE9A04C0F2855F7D5820; // 0x0EB8 (size: 0xE0)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_0845212448F4F492DCB3BC9E6BE391FC; // 0x0F98 (size: 0xE0)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_2C524AC44B0CDD9D61A8B68C12AD1094; // 0x1078 (size: 0xE0)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_D9730AEC45C16AD66E3D2E9C77E3A11D; // 0x1158 (size: 0xE0)
    FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_5EF8D07949AE45FB410DC28B569AB520; // 0x1238 (size: 0xC0)
    FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_FBF0BE334278F406881B949195F2A901; // 0x12F8 (size: 0xC0)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_E4176220416D8EECD58C9C9E5BDB35D9; // 0x13B8 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_478DDEF8414376597BE36FB636231AA4; // 0x13E0 (size: 0x28)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_0ED7C76E437B6EE4F4CAB683F010A693; // 0x1408 (size: 0x78)
    FAnimNode_StateResult AnimGraphNode_StateResult_E23CC5604E29C54DDCAC83A93A8FD609; // 0x1480 (size: 0x30)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_E12BAD464E924E2856676DA0C329F19B; // 0x14B0 (size: 0x78)
    FAnimNode_StateResult AnimGraphNode_StateResult_FDF3E65D4A58B80BAFE153A2AF1AE281; // 0x1528 (size: 0x30)
    FAnimNode_StateMachine AnimGraphNode_StateMachine_35C3CBD842B1DF354CD0B1A9CC5DB94B; // 0x1558 (size: 0xB0)

    void AnimGraph(FPoseLink& AnimGraph);
    void ExecuteUbergraph_ABP_PrototypeHalftrackW(int32 EntryPoint);
}; // Size: 0x1608

#endif
