#ifndef UE4SS_SDK_ABP_HeavyArtilleryC_HPP
#define UE4SS_SDK_ABP_HeavyArtilleryC_HPP

class UABP_HeavyArtilleryC_C : public UEmplacedWeaponAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0280 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root_453069344B9024DCD49B6BA18F5BAD3F;               // 0x0288 (size: 0x30)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_E155E44A47BD7EF821177F9640C8280A; // 0x02B8 (size: 0xE0)
    FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_D693470243A714CC674E289A535CCEFA; // 0x0398 (size: 0xC0)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_556FA1DF4FA1D85CAB4A17B4D649A1C4; // 0x0458 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_AB40B22A4D88F1F3B6A59F8CD6E21F70; // 0x0480 (size: 0x28)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_FACBB31744357CA2C9A023B57EF18197; // 0x04A8 (size: 0x78)
    FAnimNode_StateResult AnimGraphNode_StateResult_C09850FC4C687F70711C50A6892DB154; // 0x0520 (size: 0x30)
    FAnimNode_StateResult AnimGraphNode_StateResult_FF2F30CE4D03D5F4F50338915DD3C34F; // 0x0550 (size: 0x30)
    FAnimNode_StateMachine AnimGraphNode_StateMachine_A9EA233145B109086391D6808A10807B; // 0x0580 (size: 0xB0)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_EE973AF8412549951FE25DA27CCFDCEC; // 0x0630 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2EB8C5E44753D3F6DBD173B20C78173D; // 0x0658 (size: 0x28)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_E2919B324E748A6A22C96D8DAEC8354D; // 0x0680 (size: 0x78)
    FAnimNode_StateResult AnimGraphNode_StateResult_E1ED040549A03A8093E78997B538BC0B; // 0x06F8 (size: 0x30)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_20841D194DBC2EDC885C8EA3C118EEBD; // 0x0728 (size: 0x78)
    FAnimNode_StateResult AnimGraphNode_StateResult_DE557BD545FED33BC4C3D7B4E4A6B7B0; // 0x07A0 (size: 0x30)
    FAnimNode_StateMachine AnimGraphNode_StateMachine_AED157D7476EC512644CD088809A9CF9; // 0x07D0 (size: 0xB0)
    FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_2DDE83D246B2EBE215714A89F1E0001A; // 0x0880 (size: 0x188)

    void AnimGraph(FPoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HeavyArtilleryC_AnimGraphNode_TransitionResult_EE973AF8412549951FE25DA27CCFDCEC();
    void ExecuteUbergraph_ABP_HeavyArtilleryC(int32 EntryPoint);
}; // Size: 0xA08

#endif
