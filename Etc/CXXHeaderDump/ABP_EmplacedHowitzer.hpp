#ifndef UE4SS_SDK_ABP_EmplacedHowitzer_HPP
#define UE4SS_SDK_ABP_EmplacedHowitzer_HPP

class UABP_EmplacedHowitzer_C : public UEmplacedWeaponAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0280 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root_63C7018D4D78557535F12BA1A640BDF0;               // 0x0288 (size: 0x30)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_E4C113A542B016E05E5004A65D1BDF68; // 0x02B8 (size: 0xE0)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_3A00884349443CEA49738B8F02AEDA78; // 0x0398 (size: 0xE0)
    FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_F3E31EB04DB7FD6EBFDFE2AF7C230188; // 0x0478 (size: 0xC0)
    FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_D03232314FC233477E8F019CF4B7A18C; // 0x0538 (size: 0xC8)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_7DDAEEDC48F7DF6260A921BE42078851; // 0x0600 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_456E6E8E4F19B11A18DC51A8966B1919; // 0x0628 (size: 0x28)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_B6A3EE3B45E8948D1FB86EA9611F30D1; // 0x0650 (size: 0x78)
    FAnimNode_StateResult AnimGraphNode_StateResult_565DE87E4AD0F697C767938AC8BCB22A; // 0x06C8 (size: 0x30)
    FAnimNode_StateResult AnimGraphNode_StateResult_7D7BAEDC4A71D1875C517EAEC202E526; // 0x06F8 (size: 0x30)
    FAnimNode_StateMachine AnimGraphNode_StateMachine_CBDE496248A1A8347A09C89CE18638B4; // 0x0728 (size: 0xB0)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_6435249F4FB489ECEC2D6DAE1A7E2DB1; // 0x07D8 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_4E75DD1549EC1BAD1A8BC392DB13E971; // 0x0800 (size: 0x28)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_A223898949DD7F59F521C9847CD62A21; // 0x0828 (size: 0x78)
    FAnimNode_StateResult AnimGraphNode_StateResult_8D27232145B4CC2CD955AF8FB4905735; // 0x08A0 (size: 0x30)
    FAnimNode_StateResult AnimGraphNode_StateResult_D06C988D40FE21AD4ABF96A9AE0A0574; // 0x08D0 (size: 0x30)
    FAnimNode_StateMachine AnimGraphNode_StateMachine_1D8A256F44FD5DC293D04A9D17708DEA; // 0x0900 (size: 0xB0)

    void AnimGraph(FPoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_EmplacedHowitzer_AnimGraphNode_TransitionResult_7DDAEEDC48F7DF6260A921BE42078851();
    void ExecuteUbergraph_ABP_EmplacedHowitzer(int32 EntryPoint);
}; // Size: 0x9B0

#endif
