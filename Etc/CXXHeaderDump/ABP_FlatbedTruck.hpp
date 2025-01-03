#ifndef UE4SS_SDK_ABP_FlatbedTruck_HPP
#define UE4SS_SDK_ABP_FlatbedTruck_HPP

class UABP_FlatbedTruck_C : public USimVehicleAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02A0 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root_FC16771C4E056E530E138CAE0E9136BF;               // 0x02A8 (size: 0x30)
    FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_240598E141B6DC13E56ED7AFFAA4C546; // 0x02D8 (size: 0xC0)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3DD7A19E44F78D3B2B6CB9ACD3CC685A; // 0x0398 (size: 0x78)
    FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_EC762770428A8B081F50FF9BFDED6290; // 0x0410 (size: 0x188)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_E455904D429429E54158C79D30828127; // 0x0598 (size: 0x78)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2ABB177D4488252186D7FDA366319E4C; // 0x0610 (size: 0x78)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_5B9017F54E62919189BC108143A26DC9; // 0x0688 (size: 0x78)
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_989EDE264878235E6F003AB4C18BCB95; // 0x0700 (size: 0xA0)

    void AnimGraph(FPoseLink& AnimGraph);
    void ExecuteUbergraph_ABP_FlatbedTruck(int32 EntryPoint);
}; // Size: 0x7A0

#endif
