#ifndef UE4SS_SDK_ABP_HeavyArtilleryW_HPP
#define UE4SS_SDK_ABP_HeavyArtilleryW_HPP

class UABP_HeavyArtilleryW_C : public UEmplacedWeaponAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0280 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root_FF909B0C412B2B8F94881EA0F0037033;               // 0x0288 (size: 0x30)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_F9706FF84C3534A9FB427185ABC13891; // 0x02B8 (size: 0xE0)
    FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_FCF9681A4884C39F9232ABBEEB0FDAB6; // 0x0398 (size: 0xC0)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_D26B17774E17DF1A8094D7A0E1E74E65; // 0x0458 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_8F85AC3B4B9D0B97043C609BA52E4514; // 0x0480 (size: 0x28)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3934F8934F87CBD5FA368A8E3815CB9A; // 0x04A8 (size: 0x78)
    FAnimNode_StateResult AnimGraphNode_StateResult_14A0F0C64DFD1EB7E9B372824B77136B; // 0x0520 (size: 0x30)
    FAnimNode_StateResult AnimGraphNode_StateResult_32FC17F04B9580346DCDA5B74FCDA201; // 0x0550 (size: 0x30)
    FAnimNode_StateMachine AnimGraphNode_StateMachine_A26370804999E1796B3C8184D7BDABE2; // 0x0580 (size: 0xB0)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_099C08B84C582BB030615A8CA2DBE203; // 0x0630 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_80AED9664558FECB70A201931035EA77; // 0x0658 (size: 0x28)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_73A67DF2446DCC19140238A1B070F304; // 0x0680 (size: 0x78)
    FAnimNode_StateResult AnimGraphNode_StateResult_B8BD7CCF432767E94A787DAEA826E4EF; // 0x06F8 (size: 0x30)
    FAnimNode_StateResult AnimGraphNode_StateResult_A310079B4C91EF089AABEFA61DED691A; // 0x0728 (size: 0x30)
    FAnimNode_StateMachine AnimGraphNode_StateMachine_612C8B434EB895088A43379CCE18BFCF; // 0x0758 (size: 0xB0)
    FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_4DFFFCFD434323989009E79A81A48872; // 0x0808 (size: 0x188)

    void AnimGraph(FPoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HeavyArtilleryW_AnimGraphNode_TransitionResult_D26B17774E17DF1A8094D7A0E1E74E65();
    void ExecuteUbergraph_ABP_HeavyArtilleryW(int32 EntryPoint);
}; // Size: 0x990

#endif
