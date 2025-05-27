#ifndef UE4SS_SDK_ABP_T2ArtilleryGarrison_HPP
#define UE4SS_SDK_ABP_T2ArtilleryGarrison_HPP

class UABP_T2ArtilleryGarrison_C : public UFortStaticArtilleryAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0270 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root_B1A4243F400A0FF2E73244B63F232E5C;               // 0x0278 (size: 0x30)
    FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_9ED8149E4CDAAB598926E9904FBD5D11; // 0x02A8 (size: 0xC0)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_C494EE1A4E1F7218F9581788CE38CCC7; // 0x0368 (size: 0xE0)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_B81FCDD64EFEC2C23AB87FB0EB70917E; // 0x0448 (size: 0xE0)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_A86F0A8742F09F02D90672B3BC586FF6; // 0x0528 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_8F5A3C0A4D59F13D186916BDA024E142; // 0x0550 (size: 0x28)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_00F3A823420DEDE4922DDDAB7D23E778; // 0x0578 (size: 0x78)
    FAnimNode_StateResult AnimGraphNode_StateResult_4BBBE3E940D7E83391990BA1DAC2CF39; // 0x05F0 (size: 0x30)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_319998A84C4B5844D2C21AB1C3188D28; // 0x0620 (size: 0x78)
    FAnimNode_StateResult AnimGraphNode_StateResult_12E417B142E6451E5DEC429CB921CD67; // 0x0698 (size: 0x30)
    FAnimNode_StateMachine AnimGraphNode_StateMachine_A01DA6FF42CEBB5EA0ED22881BDC909A; // 0x06C8 (size: 0xB0)

    void AnimGraph(FPoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_T2ArtilleryGarrison_AnimGraphNode_TransitionResult_A86F0A8742F09F02D90672B3BC586FF6();
    void ExecuteUbergraph_ABP_T2ArtilleryGarrison(int32 EntryPoint);
}; // Size: 0x778

#endif
