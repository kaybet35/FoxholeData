#ifndef UE4SS_SDK_ABP_TrainInfantry_HPP
#define UE4SS_SDK_ABP_TrainInfantry_HPP

class UABP_TrainInfantry_C : public UInfantryRailVehicleAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02F0 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root_3B91924B4CD314E8442212BF3486D3B0;               // 0x02F8 (size: 0x30)
    FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_0BE44367494EEAFAC08056BE1222B061; // 0x0328 (size: 0xC0)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_1310B1EA470345279DB492950A671EBC; // 0x03E8 (size: 0xE0)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_B7A4C3CF4D14922EC558D6A8F946832A; // 0x04C8 (size: 0xE0)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_CDCC8F76491D9BAE2692AE918A8891BD; // 0x05A8 (size: 0x78)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_88C33645488313B8EAEE319ABA494E12; // 0x0620 (size: 0x78)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3638F9FA4F8577B0435634BB90C83F53; // 0x0698 (size: 0x78)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_ED947A4A434F42CBA6A8AAA7A001F081; // 0x0710 (size: 0x78)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_CBD792714F55F0D5C524DE811A239650; // 0x0788 (size: 0xE0)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_6221E64343561BA1DA30B2AA964D7E57; // 0x0868 (size: 0xE0)
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_13F4A9F345FDD997CD5AEDA6AF9AD254; // 0x0948 (size: 0xA0)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_DA10F43B47B9344639FDEDB16018A119; // 0x09E8 (size: 0xE0)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_98D504444E053DDEB77C17B0F5C723FF; // 0x0AC8 (size: 0xE0)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_B8FD98CE4F59595102BF438F0D7EAB39; // 0x0BA8 (size: 0xE0)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_3B50FFD44ED998F63676DABD6ED5756C; // 0x0C88 (size: 0xE0)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_1AC08A2A4118B64F4B0C449889E2B29C; // 0x0D68 (size: 0x78)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_FBD3E0D64D22F51A9543FFAFBA757922; // 0x0DE0 (size: 0x78)
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_51793D554824FF92F9C6DB821AF8DE65; // 0x0E58 (size: 0xA0)
    FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_8498B17D46AC45B63614DABCE5320289; // 0x0EF8 (size: 0xC8)
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_F58120154814F7FE05C0629CC02D426B; // 0x0FC0 (size: 0xA0)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_4616BF304C80A4DB4E96B2BF23A8B27B; // 0x1060 (size: 0x78)

    void AnimGraph(FPoseLink& AnimGraph);
    void ExecuteUbergraph_ABP_TrainInfantry(int32 EntryPoint);
}; // Size: 0x10D8

#endif
