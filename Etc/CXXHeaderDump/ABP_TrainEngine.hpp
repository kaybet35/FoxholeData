#ifndef UE4SS_SDK_ABP_TrainEngine_HPP
#define UE4SS_SDK_ABP_TrainEngine_HPP

class UABP_TrainEngine_C : public URailVehicleAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02C0 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root_60B7E3AF470F3EAEE1AD9298BEAA23D3;               // 0x02C8 (size: 0x30)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_18501A304A855546AF131D9F64946F70; // 0x02F8 (size: 0x78)
    FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_51E3A4014A3A665D12443F8C6A3166A7; // 0x0370 (size: 0x188)
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_E728639640A658DF92E77F92E2181AAD; // 0x04F8 (size: 0xA0)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_F91C2BB942516193F9D6B5B69E0C881B; // 0x0598 (size: 0x78)

    void AnimGraph(FPoseLink& AnimGraph);
    void ExecuteUbergraph_ABP_TrainEngine(int32 EntryPoint);
}; // Size: 0x610

#endif
