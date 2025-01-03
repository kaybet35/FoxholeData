#ifndef UE4SS_SDK_ABP_MortarTankCol_HPP
#define UE4SS_SDK_ABP_MortarTankCol_HPP

class UABP_MortarTankCol_C : public USimVehicleGunnerSupportAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0300 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root_37F422254529B3DB985E05B64DE32276;               // 0x0308 (size: 0x30)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_CFA6FF9A4DD54DBAF9C222873D6103E8; // 0x0338 (size: 0xE0)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_8EE242254C39D33BBB2368B8E620AD18; // 0x0418 (size: 0xE0)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_CCF3DA8F42829E2BEC92E993E7C21BF5; // 0x04F8 (size: 0x78)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_7D3FA6FA4D0ED17A785F21BA0D4F942C; // 0x0570 (size: 0x78)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_A44E32E84AC502D5D0D511AAD2F22A3C; // 0x05E8 (size: 0x78)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_69E52FA1448096977F10EA9E309A76B9; // 0x0660 (size: 0x78)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_7E434A4D4B28ED32EBCA6997527438C1; // 0x06D8 (size: 0x78)
    FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_F4DAC801492ABC1D297E1FAC6DD88607; // 0x0750 (size: 0xC0)
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_0B1506E94D607BB5854A2DAA8E7937EF; // 0x0810 (size: 0xA0)
    FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_56E425344AC61C89120F6DA0210EDD4C; // 0x08B0 (size: 0xC0)
    FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_372815B24DF68C95646CD4B85F884859; // 0x0970 (size: 0xC0)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_F1CB8B6646A71739B7ED14B337B3053F; // 0x0A30 (size: 0x78)
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_5C3B8F874EC8CBA958EE4686927C16AC; // 0x0AA8 (size: 0xA0)
    FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_8AA5FA404500A7C01D266E893B87095F; // 0x0B48 (size: 0x188)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_7725DDAB484EC0C8149310AE198427E0; // 0x0CD0 (size: 0x78)
    FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_AE1599F44097A5A99FB4F88F428F3637; // 0x0D48 (size: 0xC8)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_EFA950CF4EDDE6871D5CFF9D67906AA3; // 0x0E10 (size: 0xE0)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_B78F3E054B24D99A00D4799D7FA54747; // 0x0EF0 (size: 0xE0)
    FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_47F25A1D4B216DDEAC91558399AE1455; // 0x0FD0 (size: 0xC0)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_6E6C5F344C79BD51CE971F865846085B; // 0x1090 (size: 0xE0)
    FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_28D174B0402B1A8F4893EA8C6BC1AB67; // 0x1170 (size: 0xC0)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_F62C0FD547531601C51E7681291CE18D; // 0x1230 (size: 0xE0)

    void AnimGraph(FPoseLink& AnimGraph);
    void ExecuteUbergraph_ABP_MortarTankCol(int32 EntryPoint);
}; // Size: 0x1310

#endif
