#ifndef UE4SS_SDK_ABP_FieldMortarW_HPP
#define UE4SS_SDK_ABP_FieldMortarW_HPP

class UABP_FieldMortarW_C : public USimVehicleGunnerSupportAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0300 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root_80F49D714C4380B96AC0418992D6762C;               // 0x0308 (size: 0x30)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_0A91DA55492B14CAD9E7FE905133E6CC; // 0x0338 (size: 0x78)
    FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_E693425546B24B5B8E8EB6B5E1F980C7; // 0x03B0 (size: 0xC0)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_993342604A94473BCE70F698D82C79FC; // 0x0470 (size: 0xE0)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_4B7CDDEF422B8A6DF1DA14B9F0E35694; // 0x0550 (size: 0xE0)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_C794192144EA0D22E04A5487C971B211; // 0x0630 (size: 0x78)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_FBD5AFAF4D3C59005D8A9C893755CDBB; // 0x06A8 (size: 0x78)
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_98D0EFB94A3168A63B153C89AB46A98B; // 0x0720 (size: 0xA0)
    int32 WheelRotationSpeedFactor;                                                   // 0x07C0 (size: 0x4)

    void AnimGraph(FPoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FieldMortarW_AnimGraphNode_BlendSpacePlayer_993342604A94473BCE70F698D82C79FC();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FieldMortarW_AnimGraphNode_SequencePlayer_0A91DA55492B14CAD9E7FE905133E6CC();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FieldMortarW_AnimGraphNode_SequencePlayer_C794192144EA0D22E04A5487C971B211();
    void ExecuteUbergraph_ABP_FieldMortarW(int32 EntryPoint);
}; // Size: 0x7C4

#endif
