#ifndef UE4SS_SDK_ABP_FieldMG_HPP
#define UE4SS_SDK_ABP_FieldMG_HPP

class UABP_FieldMG_C : public USimVehicleGunnerSupportAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0300 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root_87A8F84F407E2EF8BABA388ED3905E44;               // 0x0308 (size: 0x30)
    FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_7133AFF0437CE351A7C81BB4EB0C4FC7; // 0x0338 (size: 0xC0)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_70DF12A34B11FC631A67A9BD62953432; // 0x03F8 (size: 0xE0)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_E1C9D1BD44A922EFFEFDB7A7471F7312; // 0x04D8 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_0C8D084B4878D8A1935BA48063CD6978; // 0x0500 (size: 0x28)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_AA5044AE42FEBFA2173FE9BA33BEC877; // 0x0528 (size: 0x78)
    FAnimNode_StateResult AnimGraphNode_StateResult_F14D910B4B80B68398A1F5BFA274FDA7; // 0x05A0 (size: 0x30)
    FAnimNode_StateResult AnimGraphNode_StateResult_1D55AC6345B3155D72EF889E4D127E37; // 0x05D0 (size: 0x30)
    FAnimNode_StateMachine AnimGraphNode_StateMachine_DF7EAB7D45C7CC9230B6DEB9788026E0; // 0x0600 (size: 0xB0)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_B3B39B304CC2488E49D047A774B6796F; // 0x06B0 (size: 0x78)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_F6F00BDD40E500B7B285BE92EFE3CA75; // 0x0728 (size: 0x78)
    FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_4B4277FD45337DBCAD8914B34F98E4EC; // 0x07A0 (size: 0x188)
    int32 WheelRotationSpeedFactor;                                                   // 0x0928 (size: 0x4)

    void AnimGraph(FPoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FieldMG_AnimGraphNode_SequencePlayer_F6F00BDD40E500B7B285BE92EFE3CA75();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FieldMG_AnimGraphNode_BlendSpacePlayer_70DF12A34B11FC631A67A9BD62953432();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FieldMG_AnimGraphNode_SequencePlayer_B3B39B304CC2488E49D047A774B6796F();
    void ExecuteUbergraph_ABP_FieldMG(int32 EntryPoint);
}; // Size: 0x92C

#endif
