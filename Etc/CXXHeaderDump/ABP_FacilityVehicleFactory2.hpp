#ifndef UE4SS_SDK_ABP_FacilityVehicleFactory2_HPP
#define UE4SS_SDK_ABP_FacilityVehicleFactory2_HPP

class UABP_FacilityVehicleFactory2_C : public UBuildArmAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0320 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root_11F48EAF4C498EA0C15AB1B7ED5F4B85;               // 0x0328 (size: 0x30)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_F07C0E1546182B163C34FAB4AA753BD2; // 0x0358 (size: 0x78)
    FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_49EE32A54FF425822B1099BAA5D8F06F; // 0x03D0 (size: 0xC0)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_2CBAC3DC40D8405054B91482A9FB770A; // 0x0490 (size: 0xE0)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_6636DE8641929992628628AF40D57A29; // 0x0570 (size: 0xE0)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_66FCF8614D0872AC3C9C6AB4523299DD; // 0x0650 (size: 0xE0)

    void AnimGraph(FPoseLink& AnimGraph);
    void ExecuteUbergraph_ABP_FacilityVehicleFactory2(int32 EntryPoint);
}; // Size: 0x730

#endif
