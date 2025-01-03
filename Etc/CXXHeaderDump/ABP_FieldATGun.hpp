#ifndef UE4SS_SDK_ABP_FieldATGun_HPP
#define UE4SS_SDK_ABP_FieldATGun_HPP

class UABP_FieldATGun_C : public USimVehicleGunnerSupportAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0300 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root_7E8509FD453E1A9A87B5919531B8E9D6;               // 0x0308 (size: 0x30)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_5351E42C4000C64B2282E88984143A7D; // 0x0338 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_192C3C43478B06187A336FBA5791042E; // 0x0360 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_D31C5DC9405CB969B6B0F2AAF51C79DC; // 0x0388 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_655E13F243E03CC4980F11B9BED5DC46; // 0x03B0 (size: 0x28)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_DADB913D448BF4E84F6858AD152F94A1; // 0x03D8 (size: 0x78)
    FAnimNode_StateResult AnimGraphNode_StateResult_8EB6DBBB42376D6A0681AABA9DEB8F27; // 0x0450 (size: 0x30)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_BA06C9624E5729D536BE7D847E33DD99; // 0x0480 (size: 0x78)
    FAnimNode_StateResult AnimGraphNode_StateResult_91628FFD41B4CA34245D3A944C51060D; // 0x04F8 (size: 0x30)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_69315BD2454E6BFDD7835782AC624116; // 0x0528 (size: 0xE0)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_7D29805444131161AA036CB7F6EF4AFB; // 0x0608 (size: 0x78)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_5C454A2B4F8E7B9F9853ACAA23702425; // 0x0680 (size: 0x78)
    FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_BD33A46F4C75EEEA2B036EBAF3C62B8F; // 0x06F8 (size: 0xC0)
    FAnimNode_StateResult AnimGraphNode_StateResult_71A379144A782B0C5D5A7F8FBE5CE8B7; // 0x07B8 (size: 0x30)
    FAnimNode_StateMachine AnimGraphNode_StateMachine_29AA58134C165944AE3A099D627376FE; // 0x07E8 (size: 0xB0)
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_525E75E14E94C66ECC81A0ADC94027DC; // 0x0898 (size: 0xA0)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_DF3493484491762FCBE7219874728B90; // 0x0938 (size: 0x78)
    FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_165620824E08B7B7728BFF9E0087F21F; // 0x09B0 (size: 0x188)
    int32 WheelRotationSpeedFactor;                                                   // 0x0B38 (size: 0x4)

    void AnimGraph(FPoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FieldATGun_AnimGraphNode_SequencePlayer_5C454A2B4F8E7B9F9853ACAA23702425();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FieldATGun_AnimGraphNode_SequencePlayer_7D29805444131161AA036CB7F6EF4AFB();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FieldATGun_AnimGraphNode_BlendSpacePlayer_69315BD2454E6BFDD7835782AC624116();
    void ExecuteUbergraph_ABP_FieldATGun(int32 EntryPoint);
}; // Size: 0xB3C

#endif
