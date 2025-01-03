#ifndef UE4SS_SDK_ABP_PrototypeScoutVehicleWar_HPP
#define UE4SS_SDK_ABP_PrototypeScoutVehicleWar_HPP

class UABP_PrototypeScoutVehicleWar_C : public USimVehicleGunnerSupportAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0300 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root_4A8216FD42F9BC1DE96235B21B4BF8C4;               // 0x0308 (size: 0x30)
    FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_B3F0823C4CE57E05DA140D84B432D408; // 0x0338 (size: 0xC0)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_4D141A764F721F63859072A9F4B07DF5; // 0x03F8 (size: 0xE0)
    FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_9BC15D6E471FBF80B059FEA051E1A79D; // 0x04D8 (size: 0x188)
    FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_1E45B20140935521C9147CBCA83A2370; // 0x0660 (size: 0x188)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_5B16527041B39FEB0E94E090C6E5924C; // 0x07E8 (size: 0x78)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_B41A47D74669E14799B6A98FE3B2BF83; // 0x0860 (size: 0xE0)
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_3AF95B294F50427D851A0CB435007C92; // 0x0940 (size: 0xA0)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_49B953A2410101C9ED13FD94CA70D15A; // 0x09E0 (size: 0x78)

    void AnimGraph(FPoseLink& AnimGraph);
    void ExecuteUbergraph_ABP_PrototypeScoutVehicleWar(int32 EntryPoint);
}; // Size: 0xA58

#endif
