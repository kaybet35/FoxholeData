#ifndef UE4SS_SDK_ABP_LongRangeArtillery_HPP
#define UE4SS_SDK_ABP_LongRangeArtillery_HPP

class UABP_LongRangeArtillery_C : public UStaticArtilleryAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0280 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root_2940262941992FDFA3E425846AA44E54;               // 0x0288 (size: 0x30)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_2619846B431BD0E77AC1DA862FEAEAE0; // 0x02B8 (size: 0xE0)
    FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_7ABF2AA746EF7D4E976C4598147F6CDD; // 0x0398 (size: 0x188)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_67B0C5F6430CFDB3B55814A7D0DAD565; // 0x0520 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_A399A43A4A707459A72A9B85CC407E06; // 0x0548 (size: 0x28)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_BD7548DA4F81CC659515D5BB7DC6A837; // 0x0570 (size: 0x78)
    FAnimNode_StateResult AnimGraphNode_StateResult_65E378694B874D76AD2D5F9B41FCDAC2; // 0x05E8 (size: 0x30)
    FAnimNode_StateResult AnimGraphNode_StateResult_92A0B2AC4D29347DF4E2B98B1A08C780; // 0x0618 (size: 0x30)
    FAnimNode_StateMachine AnimGraphNode_StateMachine_CD2CFFC84476E1AAC1F486A67592B4D4; // 0x0648 (size: 0xB0)
    FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_FE08547742D5CA689C3AA79CA9855039; // 0x06F8 (size: 0xC0)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_D5705FB24A3805C21DA592BACF8FDE76; // 0x07B8 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2A2F49B64F88D28182D7E19758E6DBCF; // 0x07E0 (size: 0x28)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_C1C394AE4DE8E5031EFA28A7A74FA25F; // 0x0808 (size: 0x78)
    FAnimNode_StateResult AnimGraphNode_StateResult_5C72A4F345C089D87A301A990975A566; // 0x0880 (size: 0x30)
    FAnimNode_StateResult AnimGraphNode_StateResult_ED5444E140F31C96EB5514BECB9D28B0; // 0x08B0 (size: 0x30)
    FAnimNode_StateMachine AnimGraphNode_StateMachine_CE4AF7304CE22E6353795B9D36AABD2E; // 0x08E0 (size: 0xB0)

    void AnimGraph(FPoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_LongRangeArtillery_AnimGraphNode_TransitionResult_67B0C5F6430CFDB3B55814A7D0DAD565();
    void ExecuteUbergraph_ABP_LongRangeArtillery(int32 EntryPoint);
}; // Size: 0x990

#endif
