#ifndef UE4SS_SDK_ABP_ScoutTankW_HPP
#define UE4SS_SDK_ABP_ScoutTankW_HPP

class UABP_ScoutTankW_C : public USimVehicleGunnerSupportAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0300 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root_DB6445164975074D7DD36F8A9DA5EF9D;               // 0x0308 (size: 0x30)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_7798405B439AF884FA8FE6AA74FE99A3; // 0x0338 (size: 0xE0)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_9FE5539645994B61EB5E1EA4DE4FA086; // 0x0418 (size: 0xE0)
    FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_B4BDAC46405718688115B88D4610ADAB; // 0x04F8 (size: 0xC0)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_311C1D6B43E94FE2C8D82392CE70904C; // 0x05B8 (size: 0x78)
    FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_CF66A0854CB3FDE3321F7AA853E6626C; // 0x0630 (size: 0xC0)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_99D845894BD58BA17E758DB54757176F; // 0x06F0 (size: 0x78)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_DACB45024EB1D9A7AE5DD2BB63B79BC5; // 0x0768 (size: 0x78)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_BD856DD34613085C44A30794C190E6D4; // 0x07E0 (size: 0x78)
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_48E244874A16E247D2C451A8E9D25416; // 0x0858 (size: 0xA0)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_8876B0EA4C4C27159F48D2B7EF485FC5; // 0x08F8 (size: 0x78)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_0E5F79B74E49F8687D0EF3AA3E9C1367; // 0x0970 (size: 0x78)
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_8365C9AC47679F780CE5CB9C39069419; // 0x09E8 (size: 0xA0)
    FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_700718A4481DE3F117436FA334C8FF15; // 0x0A88 (size: 0xC8)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3BA83D9642A034A89131019D55F1D4FA; // 0x0B50 (size: 0x78)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_7A0E1F444604B1F450A146900289DBF6; // 0x0BC8 (size: 0x78)
    FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_9F5580EA41BB5C92B5CB1897F9913BCE; // 0x0C40 (size: 0x188)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_6F77BAB84740CB700B15F4967F008DE2; // 0x0DC8 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_B38FD9E94AC68200CD43268CC43D7BD4; // 0x0DF0 (size: 0x28)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_D3B39D7745CA242EED285A9A16800DC5; // 0x0E18 (size: 0x78)
    FAnimNode_StateResult AnimGraphNode_StateResult_F8E542C741EAC2894840038B184707C0; // 0x0E90 (size: 0x30)
    FAnimNode_StateResult AnimGraphNode_StateResult_D1DC63E942BB90150DCCC190CA702FA8; // 0x0EC0 (size: 0x30)
    FAnimNode_StateMachine AnimGraphNode_StateMachine_53CF41914C6EF7CB073DD699FA3956DC; // 0x0EF0 (size: 0xB0)
    FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_7311E8414A9DBD197612C2AE2A3C4442; // 0x0FA0 (size: 0xC0)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_7E50C1E9493353A8B9D4C49F9B0F59F2; // 0x1060 (size: 0xE0)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_C5F1E396485CE5D877D24FA0FF6476FA; // 0x1140 (size: 0x78)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_D031EDB842C1AE1E7CC9F6B8568014AD; // 0x11B8 (size: 0x78)
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_C63C2D8C409B462C7F6512BA59AE5A1F; // 0x1230 (size: 0xA0)

    void AnimGraph(FPoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ScoutTankW_AnimGraphNode_TransitionResult_6F77BAB84740CB700B15F4967F008DE2();
    void ExecuteUbergraph_ABP_ScoutTankW(int32 EntryPoint);
}; // Size: 0x12D0

#endif
