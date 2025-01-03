#ifndef UE4SS_SDK_ABP_PrototypeTruckWar_HPP
#define UE4SS_SDK_ABP_PrototypeTruckWar_HPP

class UABP_PrototypeTruckWar_C : public USimVehicleAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02A0 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root_F4CE6B1C4F3E5A430BF44FBC0902CA63;               // 0x02A8 (size: 0x30)
    FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_8CB3FA4146F9DB1B8474ECB9D880EA1C; // 0x02D8 (size: 0x188)
    FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_900E99184AEAB4A8302E9089C1B86559; // 0x0460 (size: 0x188)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_BBA0C61046EB6C00671663800FC751B9; // 0x05E8 (size: 0xE0)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_42AA89DE4819741C9D2B59857E805EB8; // 0x06C8 (size: 0x78)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_084792BC4C299DCDF85C7E9412C68C8B; // 0x0740 (size: 0x78)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_CE990C0943A8BCB527DC4FBFF2302190; // 0x07B8 (size: 0x78)
    FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_797F155046A1C20C570C7BBA454242C0; // 0x0830 (size: 0xC0)
    FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_6ADFBA434C722B1E3766EE9D05E7984D; // 0x08F0 (size: 0xC0)
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_D659A1AC486E986B06C65E88225A71BD; // 0x09B0 (size: 0xA0)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3CE988934761CAF4E3E9A699A01A61AF; // 0x0A50 (size: 0x78)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_F84C9F934E663F87B379AE9FD04BDD32; // 0x0AC8 (size: 0x78)
    FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_BCE93B204ECB37986EB13AAF70BDDEE9; // 0x0B40 (size: 0xC8)

    void AnimGraph(FPoseLink& AnimGraph);
    void ExecuteUbergraph_ABP_PrototypeTruckWar(int32 EntryPoint);
}; // Size: 0xC08

#endif
