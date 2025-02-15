#ifndef UE4SS_SDK_ABP_FieldMortarC_HPP
#define UE4SS_SDK_ABP_FieldMortarC_HPP

class UABP_FieldMortarC_C : public USimVehicleGunnerSupportAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0300 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root_2ACBC1FA4385665502F10689130D448A;               // 0x0308 (size: 0x30)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3ADD8F014173079A9380968EACA1DA75; // 0x0338 (size: 0x78)
    FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_771E87EF440968E3725476804889685C; // 0x03B0 (size: 0xC0)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_9E1EB5FC49B517F326C7D6B3A7971A30; // 0x0470 (size: 0xE0)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_01FDC4974E1986B7B3F9799D3501F70E; // 0x0550 (size: 0x78)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_DD791DCB4BD5416608D2FD8230102239; // 0x05C8 (size: 0x78)
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_4E5EE9E0492717F0AE433C8A979A7C15; // 0x0640 (size: 0xA0)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_B97B38CA4384FF0AA0B5EA949C8F9814; // 0x06E0 (size: 0xE0)
    int32 WheelRotationSpeedFactor;                                                   // 0x07C0 (size: 0x4)

    void AnimGraph(FPoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FieldMortarC_AnimGraphNode_BlendSpacePlayer_9E1EB5FC49B517F326C7D6B3A7971A30();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FieldMortarC_AnimGraphNode_SequencePlayer_3ADD8F014173079A9380968EACA1DA75();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FieldMortarC_AnimGraphNode_SequencePlayer_01FDC4974E1986B7B3F9799D3501F70E();
    void ExecuteUbergraph_ABP_FieldMortarC(int32 EntryPoint);
}; // Size: 0x7C4

#endif
