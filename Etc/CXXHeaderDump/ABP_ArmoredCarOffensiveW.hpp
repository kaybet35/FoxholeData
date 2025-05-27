#ifndef UE4SS_SDK_ABP_ArmoredCarOffensiveW_HPP
#define UE4SS_SDK_ABP_ArmoredCarOffensiveW_HPP

class UABP_ArmoredCarOffensiveW_C : public USimVehicleGunnerSupportAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0300 (size: 0x8)
    FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_5C1D4C7C408740D0A9171995D6EC704F; // 0x0308 (size: 0xC0)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_002F77A84BA84212F68D2995F5CDBCCE; // 0x03C8 (size: 0xE0)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_987AA41043520A24C586399ADCD2E979; // 0x04A8 (size: 0xE0)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_4BECBB7A480BF05356E1D6A1BADFB9E0; // 0x0588 (size: 0xE0)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_D5099E2A4B1BC394F1F22EA2CC0B3845; // 0x0668 (size: 0x78)
    FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_7A7D6A6A461A0996320E95BB5F151B6A; // 0x06E0 (size: 0x188)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_017B02E54EDAE7861EC379B18C1FF22D; // 0x0868 (size: 0x78)
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_157089624761BFC723A5DD861089E740; // 0x08E0 (size: 0xA0)
    FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_59DB113940BFA9983B710EAE8E65A965; // 0x0980 (size: 0xC0)
    FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_5CDF01174D34F2A9B94DCDA184053FB3; // 0x0A40 (size: 0x188)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_08BD0713456E19F2EAF510BB5CF8C39B; // 0x0BC8 (size: 0xE0)
    FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_104BC20A41EFF9815E1D4CA5D7FB0532; // 0x0CA8 (size: 0xC0)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_EF84A6104B057DD536BFE5BD2518C690; // 0x0D68 (size: 0xE0)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_1673EED04AB7B52F7E7B5A8D8716F6DD; // 0x0E48 (size: 0xE0)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_81E5302F4F3760FA5C3A2CA9D6E81894; // 0x0F28 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_4874711F4C5F2F4821E04083FD5818B0; // 0x0F50 (size: 0x28)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_A2AC20114651C2812BC85AA044FE9CDF; // 0x0F78 (size: 0x78)
    FAnimNode_StateResult AnimGraphNode_StateResult_7B14E94F44535CB111807A9CD7F92E2B; // 0x0FF0 (size: 0x30)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_379FE99F448AAE3073BB52A06BB2442C; // 0x1020 (size: 0x78)
    FAnimNode_StateResult AnimGraphNode_StateResult_5072E6DC4897619D1B01B8B3E236FB3D; // 0x1098 (size: 0x30)
    FAnimNode_StateMachine AnimGraphNode_StateMachine_D8242D4B4B1C090EF30F73AEBA479648; // 0x10C8 (size: 0xB0)
    FAnimNode_Root AnimGraphNode_Root_39FAB641409FC10F391FBDA334304B7A;               // 0x1178 (size: 0x30)
    float TurretElevation;                                                            // 0x11A8 (size: 0x4)

    void AnimGraph(FPoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ArmoredCarOffensiveW_AnimGraphNode_TransitionResult_81E5302F4F3760FA5C3A2CA9D6E81894();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ArmoredCarOffensiveW_AnimGraphNode_TransitionResult_4874711F4C5F2F4821E04083FD5818B0();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ArmoredCarOffensiveW_AnimGraphNode_BlendSpacePlayer_4BECBB7A480BF05356E1D6A1BADFB9E0();
    void ExecuteUbergraph_ABP_ArmoredCarOffensiveW(int32 EntryPoint);
}; // Size: 0x11AC

#endif
