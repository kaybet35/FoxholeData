#ifndef UE4SS_SDK_ABP_ArmoredCar_HPP
#define UE4SS_SDK_ABP_ArmoredCar_HPP

class UABP_ArmoredCar_C : public USimVehicleGunnerSupportAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0300 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root_3B64C1EC48607C431CE963B40DE61D5B;               // 0x0308 (size: 0x30)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_DFB636B8421FB0D3EA7145B340C3D429; // 0x0338 (size: 0x78)
    FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_F52AFE044934EB526AD94C9C8D8C3C83; // 0x03B0 (size: 0x188)
    FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_EAB0C6B94AB81FE01A5934904FCAD25C; // 0x0538 (size: 0x188)
    FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_A0903B6A43C4715631F691AB3DC9ADEE; // 0x06C0 (size: 0x188)
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_A1EBE9C14379E1D4118862B554BE47DA; // 0x0848 (size: 0xA0)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_BDFE916C4BFD6891484BB583A4AF6176; // 0x08E8 (size: 0x78)
    FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_61C451BB48160AFA4974F39B9CE78602; // 0x0960 (size: 0x188)

    void AnimGraph(FPoseLink& AnimGraph);
    void ExecuteUbergraph_ABP_ArmoredCar(int32 EntryPoint);
}; // Size: 0xAE8

#endif
