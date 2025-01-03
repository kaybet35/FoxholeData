#ifndef UE4SS_SDK_ABP_GangwayRamp_HPP
#define UE4SS_SDK_ABP_GangwayRamp_HPP

class UABP_GangwayRamp_C : public UGangwayRampAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0270 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root_66722E074ECD612035E4169B7F67150F;               // 0x0278 (size: 0x30)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_C06664ED49F2CB1E519434824877DE88; // 0x02A8 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_ED6BEF75475B407ED6D58BA84592D23F; // 0x02D0 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_AC3FEE3C4E34A4F2AF6ED9822400463E; // 0x02F8 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_43B9519E4EFAC524CE9E2EBA4789057D; // 0x0320 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_31A8AC45400021E7C3A8C39149865D98; // 0x0348 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_335ED7F44635699402025693838EE190; // 0x0370 (size: 0x28)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_CF2F1B894C9D0173F44B78A7772AD01D; // 0x0398 (size: 0x78)
    FAnimNode_StateResult AnimGraphNode_StateResult_42072A284C65F5B2AEE1A88691522B9D; // 0x0410 (size: 0x30)
    FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_4635E0D44BA06B5AE4DC8CA458DB5B8A; // 0x0440 (size: 0xC0)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_022569A345F3471E0899DE9B9B5406A4; // 0x0500 (size: 0xE0)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_701C72244469E70CF47728BBF376D430; // 0x05E0 (size: 0xE0)
    FAnimNode_StateResult AnimGraphNode_StateResult_CCF5678C4828D9238137DFB5D2CB47A4; // 0x06C0 (size: 0x30)
    FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_E9260F1347D22F854A8D919612727ED8; // 0x06F0 (size: 0xC0)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_9AEADA2844C37068BE6A6DBA5C354374; // 0x07B0 (size: 0xE0)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_4AA736D04087CC50EA254A9FE74B0CF9; // 0x0890 (size: 0xE0)
    FAnimNode_StateResult AnimGraphNode_StateResult_8C81FC524317E8CED9F8CA86690B5ED1; // 0x0970 (size: 0x30)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_97241DB3464735869DF201BC4E985401; // 0x09A0 (size: 0x78)
    FAnimNode_StateResult AnimGraphNode_StateResult_6B906A834C16540F08C326BEA8E1F0C6; // 0x0A18 (size: 0x30)
    FAnimNode_StateMachine AnimGraphNode_StateMachine_9EA897A346B0160641DB4491C9E85AAC; // 0x0A48 (size: 0xB0)

    void AnimGraph(FPoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_GangwayRamp_AnimGraphNode_TransitionResult_31A8AC45400021E7C3A8C39149865D98();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_GangwayRamp_AnimGraphNode_TransitionResult_335ED7F44635699402025693838EE190();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_GangwayRamp_AnimGraphNode_TransitionResult_AC3FEE3C4E34A4F2AF6ED9822400463E();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_GangwayRamp_AnimGraphNode_TransitionResult_ED6BEF75475B407ED6D58BA84592D23F();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_GangwayRamp_AnimGraphNode_TransitionResult_43B9519E4EFAC524CE9E2EBA4789057D();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_GangwayRamp_AnimGraphNode_TransitionResult_C06664ED49F2CB1E519434824877DE88();
    void ExecuteUbergraph_ABP_GangwayRamp(int32 EntryPoint);
}; // Size: 0xAF8

#endif
