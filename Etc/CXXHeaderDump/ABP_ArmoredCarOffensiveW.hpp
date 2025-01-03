#ifndef UE4SS_SDK_ABP_ArmoredCarOffensiveW_HPP
#define UE4SS_SDK_ABP_ArmoredCarOffensiveW_HPP

class UABP_ArmoredCarOffensiveW_C : public USimVehicleGunnerSupportAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0300 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root_39FAB641409FC10F391FBDA334304B7A;               // 0x0308 (size: 0x30)
    FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_5C1D4C7C408740D0A9171995D6EC704F; // 0x0338 (size: 0xC0)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_002F77A84BA84212F68D2995F5CDBCCE; // 0x03F8 (size: 0xE0)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_987AA41043520A24C586399ADCD2E979; // 0x04D8 (size: 0xE0)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_4BECBB7A480BF05356E1D6A1BADFB9E0; // 0x05B8 (size: 0xE0)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_D5099E2A4B1BC394F1F22EA2CC0B3845; // 0x0698 (size: 0x78)
    FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_7A7D6A6A461A0996320E95BB5F151B6A; // 0x0710 (size: 0x188)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_017B02E54EDAE7861EC379B18C1FF22D; // 0x0898 (size: 0x78)
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_157089624761BFC723A5DD861089E740; // 0x0910 (size: 0xA0)
    FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_59DB113940BFA9983B710EAE8E65A965; // 0x09B0 (size: 0xC0)
    FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_5CDF01174D34F2A9B94DCDA184053FB3; // 0x0A70 (size: 0x188)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_08BD0713456E19F2EAF510BB5CF8C39B; // 0x0BF8 (size: 0xE0)
    float TurretElevation;                                                            // 0x0CD8 (size: 0x4)

    void AnimGraph(FPoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ArmoredCarOffensiveW_AnimGraphNode_BlendSpacePlayer_4BECBB7A480BF05356E1D6A1BADFB9E0();
    void ExecuteUbergraph_ABP_ArmoredCarOffensiveW(int32 EntryPoint);
}; // Size: 0xCDC

#endif
