#ifndef UE4SS_SDK_ABP_Motorcycle_HPP
#define UE4SS_SDK_ABP_Motorcycle_HPP

class UABP_Motorcycle_C : public USimVehicleGunnerSupportAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0300 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root_E8C680E442F1A07CF8331AB9E4758E4C;               // 0x0308 (size: 0x30)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_992B2AFD4EA22F359FFCC1AE4196F04D; // 0x0338 (size: 0x78)
    FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_96B4A81449CB5371A85DD29817A22536; // 0x03B0 (size: 0x188)
    FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_51EAE36443B975E35E79008D1B406ECC; // 0x0538 (size: 0x188)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_75764F4F4C1D0AE2CEE1C9A5DB0C2EB2; // 0x06C0 (size: 0xE0)
    FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_721EDF93462D25CBD4B585A015A63989; // 0x07A0 (size: 0xC0)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_824C4AE041A1B780C1A9FB97B2CD2C73; // 0x0860 (size: 0x78)
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_9FF7A19F447EE0C3BBDB6C980395B287; // 0x08D8 (size: 0xA0)

    void AnimGraph(FPoseLink& AnimGraph);
    void ExecuteUbergraph_ABP_Motorcycle(int32 EntryPoint);
}; // Size: 0x978

#endif
