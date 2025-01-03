#ifndef UE4SS_SDK_ABP_RelicCar_HPP
#define UE4SS_SDK_ABP_RelicCar_HPP

class UABP_RelicCar_C : public USimVehicleAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02A0 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root_56D3C1FD46CC362CC80860B734AB5539;               // 0x02A8 (size: 0x30)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_12B743BF4180E8351E738CB622EE658B; // 0x02D8 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_4CA6DD0A4F2A25D68CEB109D1FF0C4FC; // 0x0300 (size: 0x28)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_ED2480FE42CF0F4D21E9E9990E68697C; // 0x0328 (size: 0x78)
    FAnimNode_StateResult AnimGraphNode_StateResult_1BBB159A4B98756533C8EAB17E54BFA4; // 0x03A0 (size: 0x30)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_53E3D8644DE11386504759A13CB205EE; // 0x03D0 (size: 0x78)
    FAnimNode_StateResult AnimGraphNode_StateResult_B9D6CCBC4900BAB408DF689B3A31D3E9; // 0x0448 (size: 0x30)
    FAnimNode_StateMachine AnimGraphNode_StateMachine_AEC23C664FE600E13CDA8AA4C286E102; // 0x0478 (size: 0xB0)
    FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_8A3E76604F9FDFB171C28EB44E94910C; // 0x0528 (size: 0xC0)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3625F772458E4D17CADDA78E8779584B; // 0x05E8 (size: 0x78)
    FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_10351D1B4B1F68F32EC9B7950A75C74D; // 0x0660 (size: 0x188)

    void AnimGraph(FPoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RelicCar_AnimGraphNode_TransitionResult_12B743BF4180E8351E738CB622EE658B();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RelicCar_AnimGraphNode_TransitionResult_4CA6DD0A4F2A25D68CEB109D1FF0C4FC();
    void ExecuteUbergraph_ABP_RelicCar(int32 EntryPoint);
}; // Size: 0x7E8

#endif
