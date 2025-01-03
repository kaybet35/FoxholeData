#ifndef UE4SS_SDK_ABP_ArmoredCarCol_HPP
#define UE4SS_SDK_ABP_ArmoredCarCol_HPP

class UABP_ArmoredCarCol_C : public USimVehicleGunnerSupportAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0300 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root_052B06694FBEC4F39867098113480EF5;               // 0x0308 (size: 0x30)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_26EF0A4E44075407B350659388BF52A8; // 0x0338 (size: 0x78)
    FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_DC1CADAF43A38E03D118B7B59DB56B8F; // 0x03B0 (size: 0x188)
    FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_B58A027141DBAD243B38B9A7E35E07B0; // 0x0538 (size: 0x188)
    FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_EE4573B8435D6113DC2D72943BE0A428; // 0x06C0 (size: 0x188)
    FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_EC424FE24C1E40641E2D888462928E9A; // 0x0848 (size: 0x188)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_1E2135D1491A63257958EF98297A30BA; // 0x09D0 (size: 0x78)
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_D80A553E4F130175B864138D2DAAB514; // 0x0A48 (size: 0xA0)

    void AnimGraph(FPoseLink& AnimGraph);
    void ExecuteUbergraph_ABP_ArmoredCarCol(int32 EntryPoint);
}; // Size: 0xAE8

#endif
