#ifndef UE4SS_SDK_ABP_Freighter02_HPP
#define UE4SS_SDK_ABP_Freighter02_HPP

class UABP_Freighter02_C : public UFreighterAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02A0 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root_73C45D984747B9AFCED365B9B5E18EED;               // 0x02A8 (size: 0x30)
    FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_8E81610E43DCF817AD7670AAA004B0E2; // 0x02D8 (size: 0xC0)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_402EA58B4EA26CC96DB534ACACABFA5B; // 0x0398 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_BDE2BA674397E47195215585E94C7E25; // 0x03C0 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_E513D9B6472EB78C7E9E558895E09A8B; // 0x03E8 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_5E209F58419623CBF8C9B29D1EC49348; // 0x0410 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_6677CAC946B810DA790ADF87032325ED; // 0x0438 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_730CF96B4F4B90A92308D7A3C5B016BA; // 0x0460 (size: 0x28)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_89D14A5C49289F69AF9AA48CE73928C2; // 0x0488 (size: 0x78)
    FAnimNode_StateResult AnimGraphNode_StateResult_513A6F8B46D4D7D14B64ABBB992E13DA; // 0x0500 (size: 0x30)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_46E158B94FE67939740CDAA33E4043D6; // 0x0530 (size: 0x78)
    FAnimNode_StateResult AnimGraphNode_StateResult_FF9794524459E4D947F5D6A073EC3DDE; // 0x05A8 (size: 0x30)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_4DD1ED53482743C66AB286AD0B0E6EA0; // 0x05D8 (size: 0x78)
    FAnimNode_StateResult AnimGraphNode_StateResult_99EA5096486181D66D0E6A9F24725054; // 0x0650 (size: 0x30)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_058B4266408F5F428C1BAFBD7AA6A23D; // 0x0680 (size: 0x78)
    FAnimNode_StateResult AnimGraphNode_StateResult_D99CC7E247DBCE031130A8A332E07361; // 0x06F8 (size: 0x30)
    FAnimNode_StateMachine AnimGraphNode_StateMachine_F2BF68824C4B41CAE28D9F82E3341F46; // 0x0728 (size: 0xB0)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_02D53DF94B7CB4F4DCACF480AEBC3DA0; // 0x07D8 (size: 0xE0)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_83FEF5C2485C40799D9635A69387EC41; // 0x08B8 (size: 0x78)

    void AnimGraph(FPoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Freighter02_AnimGraphNode_TransitionResult_5E209F58419623CBF8C9B29D1EC49348();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Freighter02_AnimGraphNode_TransitionResult_6677CAC946B810DA790ADF87032325ED();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Freighter02_AnimGraphNode_TransitionResult_730CF96B4F4B90A92308D7A3C5B016BA();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Freighter02_AnimGraphNode_TransitionResult_BDE2BA674397E47195215585E94C7E25();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Freighter02_AnimGraphNode_TransitionResult_E513D9B6472EB78C7E9E558895E09A8B();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Freighter02_AnimGraphNode_TransitionResult_402EA58B4EA26CC96DB534ACACABFA5B();
    void ExecuteUbergraph_ABP_Freighter02(int32 EntryPoint);
}; // Size: 0x930

#endif
