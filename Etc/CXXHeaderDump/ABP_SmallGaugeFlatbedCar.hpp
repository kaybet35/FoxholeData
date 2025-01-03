#ifndef UE4SS_SDK_ABP_SmallGaugeFlatbedCar_HPP
#define UE4SS_SDK_ABP_SmallGaugeFlatbedCar_HPP

class UABP_SmallGaugeFlatbedCar_C : public UInfantryRailVehicleAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02F0 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root_2E7A0E7D452BC7EA18E461BF980D757A;               // 0x02F8 (size: 0x30)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_DC691760488F8AD0BDC58583B9602A54; // 0x0328 (size: 0x78)
    FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_69F83B154B07D344B830F9A4E7B499B8; // 0x03A0 (size: 0x188)
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_69F265FC4826D5092DAD69A93149687D; // 0x0528 (size: 0xA0)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_D3BFD4C046D818683B8CA1935F00E369; // 0x05C8 (size: 0x78)

    void AnimGraph(FPoseLink& AnimGraph);
    void ExecuteUbergraph_ABP_SmallGaugeFlatbedCar(int32 EntryPoint);
}; // Size: 0x640

#endif
