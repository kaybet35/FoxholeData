#ifndef UE4SS_SDK_ABP_RelicMediumTankCol_HPP
#define UE4SS_SDK_ABP_RelicMediumTankCol_HPP

class UABP_RelicMediumTankCol_C : public USimVehicleGunnerSupportAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0300 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root_23668DD640D1AF0C97221BBA0D956893;               // 0x0308 (size: 0x30)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_B1B4D81249A0F1C608C2729CBC585F36; // 0x0338 (size: 0xE0)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_AD9731394EE532ED0BBA41AE00DF6224; // 0x0418 (size: 0xE0)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_60E6E0BB4368C0DBD69869B29457C0DB; // 0x04F8 (size: 0x78)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_4AC3D8AD4DF373F345AD0AAFA5A8C0D2; // 0x0570 (size: 0x78)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_9237A44D42417589CF49E8B658F672E5; // 0x05E8 (size: 0x78)
    FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_158D15A34386348FEF2D1EB6FD5EF293; // 0x0660 (size: 0xC0)
    FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_EDEE434C42B4CA6E49754587CD7504BB; // 0x0720 (size: 0xC0)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_BD94CC6B4B571FCD76990286CECD9545; // 0x07E0 (size: 0xE0)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_6F99EFB34B1B13B953BA4984639231B9; // 0x08C0 (size: 0xE0)
    FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_CB11D28143446B51910D03B2F0EF57B2; // 0x09A0 (size: 0xC0)
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_D35148F54F2FA6FA850EC8973B84CC94; // 0x0A60 (size: 0xA0)
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_13E8E03B4C080E54BE2F3E8F05A9B223; // 0x0B00 (size: 0xA0)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_AEB094064B5C06FF29543A9C97A5480D; // 0x0BA0 (size: 0x78)
    FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_343AF1D8496B63C97CB298B9294EA223; // 0x0C18 (size: 0xC8)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_43E06C6D4D00C506DD2DE5A33A1B6C76; // 0x0CE0 (size: 0x78)

    void AnimGraph(FPoseLink& AnimGraph);
    void ExecuteUbergraph_ABP_RelicMediumTankCol(int32 EntryPoint);
}; // Size: 0xD58

#endif
