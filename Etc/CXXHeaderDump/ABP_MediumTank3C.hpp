#ifndef UE4SS_SDK_ABP_MediumTank3C_HPP
#define UE4SS_SDK_ABP_MediumTank3C_HPP

class UABP_MediumTank3C_C : public USimVehicleGunnerSupportAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0300 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root_CBA5C3EC454DC822C16A36BC65C81D3E;               // 0x0308 (size: 0x30)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_677ACFDE4095D17DE86725980890FE12; // 0x0338 (size: 0x78)
    FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_47EBCE104565F7326D554A9B9B23D19A; // 0x03B0 (size: 0x188)
    FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_794DDD5741ABD05ECCC5C9A1870C0F14; // 0x0538 (size: 0x188)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_C985B9E044ED498FFD2F4598C6836327; // 0x06C0 (size: 0xE0)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_4B1C82BB4C2592B50B8DD7B61BF70610; // 0x07A0 (size: 0xE0)
    FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_43965CD84DFB63B040C0519EB68279EB; // 0x0880 (size: 0xC0)
    FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_74AF54574BFF9DA9DAB90FB4CEC8B6BA; // 0x0940 (size: 0xC0)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_63AD8B164830C30E46302984F71C8F9B; // 0x0A00 (size: 0xE0)
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_7A3FAC184FEDF56F228FC3B53021F390; // 0x0AE0 (size: 0xA0)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_DC42F5504D96059BB864318FC1C025E1; // 0x0B80 (size: 0x78)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_1EAFC996440B21BCC33C35A7D72056A4; // 0x0BF8 (size: 0x78)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_36F4195644AA6EEFC51AA892A6B7C51A; // 0x0C70 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_21E7A2254774F8BCC8EBC7864D53B0E1; // 0x0C98 (size: 0x28)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_9F30D10945F52E26CF3D2B8B810277C3; // 0x0CC0 (size: 0x78)
    FAnimNode_StateResult AnimGraphNode_StateResult_6364118C4CEEB6653661B69956DA2D46; // 0x0D38 (size: 0x30)
    FAnimNode_StateResult AnimGraphNode_StateResult_D88E5DCB4B38C5813612689E2E0BA129; // 0x0D68 (size: 0x30)
    FAnimNode_StateMachine AnimGraphNode_StateMachine_9E6E032A42921400B0704E969C6AD681; // 0x0D98 (size: 0xB0)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_D1F7B9574349EB7999D3959E60A160EA; // 0x0E48 (size: 0x78)
    FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_D9ED063E4C8FE1A70F5C008E33AE4852; // 0x0EC0 (size: 0xC8)
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_DB98573A4444C505512AD5A57B37BD8F; // 0x0F88 (size: 0xA0)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_718BF95C41E75AF59D63299AD14172DC; // 0x1028 (size: 0x78)

    void AnimGraph(FPoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MediumTank3C_AnimGraphNode_TransitionResult_36F4195644AA6EEFC51AA892A6B7C51A();
    void ExecuteUbergraph_ABP_MediumTank3C(int32 EntryPoint);
}; // Size: 0x10A0

#endif