#ifndef UE4SS_SDK_ABP_LightMachineGun_HPP
#define UE4SS_SDK_ABP_LightMachineGun_HPP

class UABP_LightMachineGun_C : public UWeaponAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0280 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root_AFD77C444EEF84C2A9EAE18881F8BEEA;               // 0x0288 (size: 0x30)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_B4B901FF451B6781DEFE22AE1557FAB3; // 0x02B8 (size: 0x78)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_CC8ED5E646568964C35F83B95615FFAF; // 0x0330 (size: 0x78)
    FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum_FCC2EA9041763623ECCB34BEECD13C8D; // 0x03A8 (size: 0xB0)

    void AnimGraph(FPoseLink& AnimGraph);
    void ExecuteUbergraph_ABP_LightMachineGun(int32 EntryPoint);
}; // Size: 0x458

#endif
