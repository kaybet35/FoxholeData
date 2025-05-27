#ifndef UE4SS_SDK_ABP_ConstructionEquipment_HPP
#define UE4SS_SDK_ABP_ConstructionEquipment_HPP

class UABP_ConstructionEquipment_C : public UConstructionEquipmentAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0280 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root_7E3D7AD943DCA302D23C0BA2F5FD8398;               // 0x0288 (size: 0x30)
    FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_D71272F2401E3983279F1BB6339D3EB1; // 0x02B8 (size: 0xC0)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_A48C3A3641E36177EF24A796E3511288; // 0x0378 (size: 0xE0)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_2BA5077C4C185A4A932903B66FCCF963; // 0x0458 (size: 0xE0)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_010893D6442C72120224348F80D4585F; // 0x0538 (size: 0xE0)
    FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_EE0739B04A127FD72C7E2197D7C8B09B; // 0x0618 (size: 0x188)
    float NewVar_0;                                                                   // 0x07A0 (size: 0x4)
    float NewVar_1;                                                                   // 0x07A4 (size: 0x4)
    float NewVar_2;                                                                   // 0x07A8 (size: 0x4)
    float NewVar_3;                                                                   // 0x07AC (size: 0x4)

    void AnimGraph(FPoseLink& AnimGraph);
    void ExecuteUbergraph_ABP_ConstructionEquipment(int32 EntryPoint);
}; // Size: 0x7B0

#endif
