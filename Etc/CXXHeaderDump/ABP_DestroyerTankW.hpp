#ifndef UE4SS_SDK_ABP_DestroyerTankW_HPP
#define UE4SS_SDK_ABP_DestroyerTankW_HPP

class UABP_DestroyerTankW_C : public USimVehicleGunnerSupportAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0300 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root_343BDF974FD6D67DFAD9399BB7177899;               // 0x0308 (size: 0x30)
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_251EF743450FACBB3A78A0858827FC44; // 0x0338 (size: 0xA0)
    FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_23D5CA484852AFD20076A89FFB750EAB; // 0x03D8 (size: 0xC8)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_4ACBDF47476E2200DAA422A12165F5BB; // 0x04A0 (size: 0x78)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_A766BB2A423B6B90C562308EEE27ECDC; // 0x0518 (size: 0x78)
    FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_06FEF15E49F6C7F2A5E2DEA61C568FCA; // 0x0590 (size: 0x188)
    FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_4DF5A33B4C903C860E78C5A342EE9A1F; // 0x0718 (size: 0xC0)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_EE2D180D486FC984E96FEEA67A8581D4; // 0x07D8 (size: 0x78)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_28B10D024587465C53E9D0AFE229CC6C; // 0x0850 (size: 0xE0)
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_B29F27CD4A9FB90AF6CE49AB8981E29F; // 0x0930 (size: 0xA0)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_A621B0CA4DEEE8D8C49C2E90541D8815; // 0x09D0 (size: 0x78)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_A521202440EB651106FF4DBB41BE29A9; // 0x0A48 (size: 0x78)
    FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_88D7946F4B6CC37B8DB5AE8CEB194D65; // 0x0AC0 (size: 0xC0)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_CFD46676454C17B0F48810A396C08D02; // 0x0B80 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_20F088DD4B4338962EDAB5A9F984AA33; // 0x0BA8 (size: 0x28)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_A5DB1522403695818053CB839B3A4508; // 0x0BD0 (size: 0x78)
    FAnimNode_StateResult AnimGraphNode_StateResult_94602C9543CC2EB0E4F87DA1CCC13BD3; // 0x0C48 (size: 0x30)
    FAnimNode_StateResult AnimGraphNode_StateResult_BDE0F6354380D710AFC1B19A09944D57; // 0x0C78 (size: 0x30)
    FAnimNode_StateMachine AnimGraphNode_StateMachine_1C08E4D34332BFE148CCFD99B684EC87; // 0x0CA8 (size: 0xB0)

    void AnimGraph(FPoseLink& AnimGraph);
    void ExecuteUbergraph_ABP_DestroyerTankW(int32 EntryPoint);
}; // Size: 0xD58

#endif
