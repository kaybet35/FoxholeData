#ifndef UE4SS_SDK_ABP_LargeShipNeutralEngine_HPP
#define UE4SS_SDK_ABP_LargeShipNeutralEngine_HPP

class UABP_LargeShipNeutralEngine_C : public ULargeShipEngineAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0280 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root_0695B0EE408BE820FE0BC2ACFC24D448;               // 0x0288 (size: 0x30)
    FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_03443BED4E41301A7331DFA9AFD73B1A; // 0x02B8 (size: 0xC0)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_7903B9CC496206840F8C21A6CBC05A29; // 0x0378 (size: 0x78)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_6B73DF3F4BA231AA41A39F9E50A32305; // 0x03F0 (size: 0x78)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_9994B9EC4E19E7F77DF96786268E9E7A; // 0x0468 (size: 0x78)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_59E0517B40FBB8C9736DCCA01EF517C7; // 0x04E0 (size: 0x78)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_234B040649B23BB410B0FAA668DF11C1; // 0x0558 (size: 0x78)

    void AnimGraph(FPoseLink& AnimGraph);
    void ExecuteUbergraph_ABP_LargeShipNeutralEngine(int32 EntryPoint);
}; // Size: 0x5D0

#endif
