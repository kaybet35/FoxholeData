#ifndef UE4SS_SDK_ABP_RelicArmouredCar_HPP
#define UE4SS_SDK_ABP_RelicArmouredCar_HPP

class UABP_RelicArmouredCar_C : public USimVehicleGunnerSupportAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0300 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root_7113324A485FCEEE17D487B3A09E91EB;               // 0x0308 (size: 0x30)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_AE20F0ED42F0222BA974009D6F4EA8DE; // 0x0338 (size: 0xE0)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_C3A92AC24AE290ADFB68B794E12E8C9E; // 0x0418 (size: 0xE0)
    FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_50D8AA9A40EADAF2118037B1B98B0F77; // 0x04F8 (size: 0xC0)
    FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_1D89489E495CE320326626B2FDA100B3; // 0x05B8 (size: 0xC0)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_7521D7AF4A863776A863A7A57846826B; // 0x0678 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_10D175C046076F7A2F67CAAE91279490; // 0x06A0 (size: 0x28)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_E60828024D717C8B43AC1FAA2C23A712; // 0x06C8 (size: 0x78)
    FAnimNode_StateResult AnimGraphNode_StateResult_81E570EE4AC4F1DE6C70DA9DAB86E059; // 0x0740 (size: 0x30)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_0BEFDE574C1D326E664427B2369EF15F; // 0x0770 (size: 0x78)
    FAnimNode_StateResult AnimGraphNode_StateResult_FF8D2048430EF5F5BCE94389B2505F55; // 0x07E8 (size: 0x30)
    FAnimNode_StateMachine AnimGraphNode_StateMachine_291860D346059213E2A575937F2493E9; // 0x0818 (size: 0xB0)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_8C4A5B1243B0517B39FBB5BA84B585FA; // 0x08C8 (size: 0x78)
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_DF1B1F5B44AA62E1779271BB0D5217C9; // 0x0940 (size: 0xA0)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_CA65EAC7423AD68E714C8BA7C6FD95C4; // 0x09E0 (size: 0x78)

    void AnimGraph(FPoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RelicArmouredCar_AnimGraphNode_TransitionResult_10D175C046076F7A2F67CAAE91279490();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RelicArmouredCar_AnimGraphNode_TransitionResult_7521D7AF4A863776A863A7A57846826B();
    void ExecuteUbergraph_ABP_RelicArmouredCar(int32 EntryPoint);
}; // Size: 0xA58

#endif
