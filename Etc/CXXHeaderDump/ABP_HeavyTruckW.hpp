#ifndef UE4SS_SDK_ABP_HeavyTruckW_HPP
#define UE4SS_SDK_ABP_HeavyTruckW_HPP

class UABP_HeavyTruckW_C : public USimVehicleAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02A0 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root_01DACBE6454794541B01B2B8A07C049E;               // 0x02A8 (size: 0x30)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_B7D9C05941511D9C52EBA8A928B56AC2; // 0x02D8 (size: 0x78)
    FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_B0FBE5AB431E2C4C2EFA14A547035CE1; // 0x0350 (size: 0x188)
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_32D06D034F5ED9DAD63036865284D2B7; // 0x04D8 (size: 0xA0)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_974A6DB64C9CE4DD5580FEB374581EEE; // 0x0578 (size: 0x78)
    FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_8F77D209412767A0B657558F1322BA1F; // 0x05F0 (size: 0x188)

    void AnimGraph(FPoseLink& AnimGraph);
    void ExecuteUbergraph_ABP_HeavyTruckW(int32 EntryPoint);
}; // Size: 0x778

#endif
