#ifndef UE4SS_SDK_ABPLandingShip_HPP
#define UE4SS_SDK_ABPLandingShip_HPP

class UABPLandingShip_C : public UBargeAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02B0 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root_D062F5224F883EFBDB379B93D9E1611C;               // 0x02B8 (size: 0x30)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_176117E4497FCA08C6C43F8CAFDCC790; // 0x02E8 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_864103A9485815776BAE1398A67ECEC3; // 0x0310 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_F7E7E1CE41033D2E54B5288C51E1F6E9; // 0x0338 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_1D6260E44C94BA4CE712D5933650D8EC; // 0x0360 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_DF9F58F0423F044B92E6FF97F612EEF1; // 0x0388 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_AD4AD96B4C5C9A11411AAEBD20B745B0; // 0x03B0 (size: 0x28)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_6BB858C544DED2EA16FDA5B5D7505CB8; // 0x03D8 (size: 0xE0)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_FACC4E054B7A48D7CD44F2871B42758A; // 0x04B8 (size: 0x78)
    FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_F1C61BB84A750EB65A99EC8BBE00DAC5; // 0x0530 (size: 0xC0)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_FB9C359945CCBE024DFB50A6A9473B17; // 0x05F0 (size: 0x78)
    FAnimNode_StateResult AnimGraphNode_StateResult_8D28FAB9489FDAA47691418847CE5CA5; // 0x0668 (size: 0x30)
    FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_6582EDF8479FF982684599A0C8F7FA1C; // 0x0698 (size: 0xC0)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_5FEA97F648FA909FC28E8EA464951B51; // 0x0758 (size: 0xE0)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_7C1CC3184CC46B6044004DA1416C151F; // 0x0838 (size: 0xE0)
    FAnimNode_StateResult AnimGraphNode_StateResult_C3DE1E7A4734DBC1B44B47A3DA5C8437; // 0x0918 (size: 0x30)
    FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_72D9B682406C2F1E04D16ABE4DC70110; // 0x0948 (size: 0xC0)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_F73F62874BE2A883B159D09CF3CE33EF; // 0x0A08 (size: 0xE0)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_F8324A694AB95FD4AAA7028337B0967F; // 0x0AE8 (size: 0xE0)
    FAnimNode_StateResult AnimGraphNode_StateResult_BF2F39784F7CE5B2B71899A76BCA714B; // 0x0BC8 (size: 0x30)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_5D3CBFA843F7521AB5BDCF8D7C98FC31; // 0x0BF8 (size: 0xE0)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_F0F66EB34A6B40E186B2598447C34503; // 0x0CD8 (size: 0x78)
    FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_CF705B704ED603903FF2B99CA4387B18; // 0x0D50 (size: 0xC0)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_A7CB69814F3935FD16E3F2A562CDBEC6; // 0x0E10 (size: 0x78)
    FAnimNode_StateResult AnimGraphNode_StateResult_E343170644EC9B9FA30038A76E108177; // 0x0E88 (size: 0x30)
    FAnimNode_StateMachine AnimGraphNode_StateMachine_17BE56274239925A0535D19605C4388F; // 0x0EB8 (size: 0xB0)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_6CEDCAD642CBF7D2EF6748B17E604431; // 0x0F68 (size: 0x78)
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_3F711D8145A525AD901409A7338B8D3A; // 0x0FE0 (size: 0xA0)

    void AnimGraph(FPoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABPLandingShip_AnimGraphNode_TransitionResult_1D6260E44C94BA4CE712D5933650D8EC();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABPLandingShip_AnimGraphNode_TransitionResult_F7E7E1CE41033D2E54B5288C51E1F6E9();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABPLandingShip_AnimGraphNode_TransitionResult_DF9F58F0423F044B92E6FF97F612EEF1();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABPLandingShip_AnimGraphNode_TransitionResult_AD4AD96B4C5C9A11411AAEBD20B745B0();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABPLandingShip_AnimGraphNode_TransitionResult_864103A9485815776BAE1398A67ECEC3();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABPLandingShip_AnimGraphNode_TransitionResult_176117E4497FCA08C6C43F8CAFDCC790();
    void ExecuteUbergraph_ABPLandingShip(int32 EntryPoint);
}; // Size: 0x1080

#endif
