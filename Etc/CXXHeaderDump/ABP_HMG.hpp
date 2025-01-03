#ifndef UE4SS_SDK_ABP_HMG_HPP
#define UE4SS_SDK_ABP_HMG_HPP

class UABP_HMG_C : public UWeaponAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0280 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root_5C03F877434072E46FB8F8B1DE8E987D;               // 0x0288 (size: 0x30)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_1E024BA3453F20B2BEC7BA81ED158F58; // 0x02B8 (size: 0xE0)
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_BC18345140424EDB26BD9A901BB22461; // 0x0398 (size: 0xA0)

    void AnimGraph(FPoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HMG_AnimGraphNode_BlendListByBool_BC18345140424EDB26BD9A901BB22461();
    void ExecuteUbergraph_ABP_HMG(int32 EntryPoint);
}; // Size: 0x438

#endif
