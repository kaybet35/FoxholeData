#ifndef UE4SS_SDK_ABP_FortFlame_HPP
#define UE4SS_SDK_ABP_FortFlame_HPP

class UABP_FortFlame_C : public UFortFireSuppressionAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0270 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root_0C1B1E9F490A21BB5D678794CFF988E1;               // 0x0278 (size: 0x30)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_90A9995D47CE6424827117B2757E7B97; // 0x02A8 (size: 0x78)
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_5EDDA0374B69A30973AB878F0F242A65; // 0x0320 (size: 0xA0)

    void AnimGraph(FPoseLink& AnimGraph);
    void ExecuteUbergraph_ABP_FortFlame(int32 EntryPoint);
}; // Size: 0x3C0

#endif
