#ifndef UE4SS_SDK_ABP_EmplacedATLargeW_HPP
#define UE4SS_SDK_ABP_EmplacedATLargeW_HPP

class UABP_EmplacedATLargeW_C : public UEmplacedWeaponAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0280 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root_4E1DC144480C974DB66D39AE10E65AE2;               // 0x0288 (size: 0x30)
    FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_899284B04714BE58A2E30A8D1AC6B9F2; // 0x02B8 (size: 0xC0)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_F02295CD4BA7327F07D35FB232082DE3; // 0x0378 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_067EAB534824D687663272AD88B614C7; // 0x03A0 (size: 0x28)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_92B8E557489629BFD18B0FB0D96A334F; // 0x03C8 (size: 0x78)
    FAnimNode_StateResult AnimGraphNode_StateResult_2EB3796049D1C3001C136CB69C8F2C4A; // 0x0440 (size: 0x30)
    FAnimNode_StateResult AnimGraphNode_StateResult_C9A872914A2289B44A4467B7A91A51EF; // 0x0470 (size: 0x30)
    FAnimNode_StateMachine AnimGraphNode_StateMachine_30731D8741C111C7C1A5E1AB2219B8DC; // 0x04A0 (size: 0xB0)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_B49A2FE140032304C2F5E3B0D6FB7C6F; // 0x0550 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_598A0FA84D78E3BD3DAADA9DBCDC8EA8; // 0x0578 (size: 0x28)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_6323682445F918D45055D983083BF88B; // 0x05A0 (size: 0x78)
    FAnimNode_StateResult AnimGraphNode_StateResult_7B0A7F5D40A106A6E044BC95F657FBEF; // 0x0618 (size: 0x30)
    FAnimNode_StateResult AnimGraphNode_StateResult_C3149942438E84AC2071EAA6C4711494; // 0x0648 (size: 0x30)
    FAnimNode_StateMachine AnimGraphNode_StateMachine_869F5A7549D3A8483544B8B3A427B0DD; // 0x0678 (size: 0xB0)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_B3CA4869400FE21A0EECA096B200480C; // 0x0728 (size: 0xE0)
    FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_1617551C472B6AC3E08B038D565163C1; // 0x0808 (size: 0x188)
    float Test;                                                                       // 0x0990 (size: 0x4)

    void AnimGraph(FPoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_EmplacedATLargeW_AnimGraphNode_TransitionResult_F02295CD4BA7327F07D35FB232082DE3();
    void AnimNotify_ShootingComplete();
    void ExecuteUbergraph_ABP_EmplacedATLargeW(int32 EntryPoint);
}; // Size: 0x994

#endif
