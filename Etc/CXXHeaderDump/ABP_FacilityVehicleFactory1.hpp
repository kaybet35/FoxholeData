#ifndef UE4SS_SDK_ABP_FacilityVehicleFactory1_HPP
#define UE4SS_SDK_ABP_FacilityVehicleFactory1_HPP

class UABP_FacilityVehicleFactory1_C : public UBuildArmAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0320 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root_3649745A417AC21DA8C5BFB2738EB0E4;               // 0x0328 (size: 0x30)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_96AC52944BB097AE9DFDC0975B060689; // 0x0358 (size: 0x78)
    FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_40A7689D443E1A7A4D04FAA63A106FD7; // 0x03D0 (size: 0xC0)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_EEF62242476E2C7907647F9578FE7A8A; // 0x0490 (size: 0xE0)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_B41768B84103D77E2D18BA80C1F56CE5; // 0x0570 (size: 0xE0)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_B4449D4D42BEE0D70CE896A16898CC31; // 0x0650 (size: 0xE0)

    void AnimGraph(FPoseLink& AnimGraph);
    void ExecuteUbergraph_ABP_FacilityVehicleFactory1(int32 EntryPoint);
}; // Size: 0x730

#endif
