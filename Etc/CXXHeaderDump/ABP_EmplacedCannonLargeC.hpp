#ifndef UE4SS_SDK_ABP_EmplacedCannonLargeC_HPP
#define UE4SS_SDK_ABP_EmplacedCannonLargeC_HPP

class UABP_EmplacedCannonLargeC_C : public UEmplacedWeaponAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0280 (size: 0x8)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_C53AF98E423104FFAC97DAB5691D42B9; // 0x0288 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_D05AAEF2434ADF546FE446A2D48F2A82; // 0x02B0 (size: 0x28)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_8012966A48285A9747E69FAA460E7CA5; // 0x02D8 (size: 0x78)
    FAnimNode_StateResult AnimGraphNode_StateResult_365F986440F757F26A75FFA6F01170FB; // 0x0350 (size: 0x30)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_EB7D35AF4C1D673A064FAEADC8D55240; // 0x0380 (size: 0x78)
    FAnimNode_StateResult AnimGraphNode_StateResult_EA965414404EA4783A69E5A2D391C85A; // 0x03F8 (size: 0x30)
    FAnimNode_StateMachine AnimGraphNode_StateMachine_85E54A0E41A066E612B6278161930D73; // 0x0428 (size: 0xB0)
    FAnimNode_Root AnimGraphNode_Root_F7A0B855472E67F7FE3F92B4F3B96130;               // 0x04D8 (size: 0x30)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_B12BEDBA4A1CEE5826A283B65A2DB9EE; // 0x0508 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_4D80990E4C728E2D77C4F8AC018F88A4; // 0x0530 (size: 0x28)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_B966149643C5B8275B09B08E532790AB; // 0x0558 (size: 0x78)
    FAnimNode_StateResult AnimGraphNode_StateResult_778580C94E5DBE84FCD0C7839B661A6F; // 0x05D0 (size: 0x30)
    FAnimNode_StateResult AnimGraphNode_StateResult_36AB25E54F6D8CF5FD2C0B81295514E5; // 0x0600 (size: 0x30)
    FAnimNode_StateMachine AnimGraphNode_StateMachine_2CF76016418A4A56229C08A1B35A1FF7; // 0x0630 (size: 0xB0)
    FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_813843A04726F95A82ED76B2E456CD35; // 0x06E0 (size: 0xC0)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_F34C8FDC4B349D984933C6825910F162; // 0x07A0 (size: 0xE0)
    FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_DC1538454ACE24F4DDF8B4B458F4CAE4; // 0x0880 (size: 0x188)
    bool Test;                                                                        // 0x0A08 (size: 0x1)

    void AnimGraph(FPoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_EmplacedCannonLargeC_AnimGraphNode_TransitionResult_C53AF98E423104FFAC97DAB5691D42B9();
    void AnimNotify_ShootingComplete();
    void ExecuteUbergraph_ABP_EmplacedCannonLargeC(int32 EntryPoint);
}; // Size: 0xA09

#endif
