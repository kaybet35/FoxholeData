#ifndef UE4SS_SDK_ABP_PrototypeScoutVehicleCol_HPP
#define UE4SS_SDK_ABP_PrototypeScoutVehicleCol_HPP

class UABP_PrototypeScoutVehicleCol_C : public USimVehicleGunnerSupportAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0300 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root_4DB57FD245B8EDBB95A669BBA8F21950;               // 0x0308 (size: 0x30)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_B651935E45E4629FA2BA82B942DED26F; // 0x0338 (size: 0xE0)
    FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_7CBFCBD54A9EF92112E436B10E62C475; // 0x0418 (size: 0x188)
    FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_80D97B6949D60C235B33C794B251AB54; // 0x05A0 (size: 0x188)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_96C4D07B4721237B3F4CE9BF95F7D10B; // 0x0728 (size: 0x78)
    FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_C010A14249F3DE0E938064ABAF481AD0; // 0x07A0 (size: 0xC0)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_B6ABBE584C464BD92AA957B383D4AC94; // 0x0860 (size: 0xE0)
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_E3ADD3F84A6D3C3F9855F8A8307F67BC; // 0x0940 (size: 0xA0)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_BF59BA6D41BC9209E425F8AA3234929F; // 0x09E0 (size: 0x78)
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_260785B54765BE80A06C93A6786731AE; // 0x0A58 (size: 0xA0)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_D45CE65F4F79DB67660505BBE11CEB0E; // 0x0AF8 (size: 0x78)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_F156F87E4DD515B44A48C18C9A16569D; // 0x0B70 (size: 0x78)

    void AnimGraph(FPoseLink& AnimGraph);
    void ExecuteUbergraph_ABP_PrototypeScoutVehicleCol(int32 EntryPoint);
}; // Size: 0xBE8

#endif
