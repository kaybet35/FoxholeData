#ifndef UE4SS_SDK_ABP_ArmoredCarDefensive_tankette_HPP
#define UE4SS_SDK_ABP_ArmoredCarDefensive_tankette_HPP

class UABP_ArmoredCarDefensive_tankette_C : public USimVehicleGunnerSupportAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0300 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root_82047ACB41C738CD34E78F8279D6967E;               // 0x0308 (size: 0x30)
    FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_0448AE98482A5858B2996ABDE4B02160; // 0x0338 (size: 0x188)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_A87A95314833727D907FEB89CC3970DF; // 0x04C0 (size: 0xE0)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_A2B70DB641EC45011C70469778650349; // 0x05A0 (size: 0xE0)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_EDAC411F4E9B185C5D9DC0BC33131E05; // 0x0680 (size: 0x78)
    FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_59DB987D44037015B6568B86EBCC84D2; // 0x06F8 (size: 0xC0)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_6198400846455148BE430E9EBF96DEB7; // 0x07B8 (size: 0x78)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_F35DA447430CC17737DBB3BEB4DE1C62; // 0x0830 (size: 0x78)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_18726BCE45FA79A322E04AA5F36A9EA0; // 0x08A8 (size: 0x78)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_821217864522D313AFFFE9B5A2E6DB65; // 0x0920 (size: 0x78)
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_DEA628FF42426460F407B78470B3D247; // 0x0998 (size: 0xA0)
    FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_D60A232342ABEEA54B12339894F42700; // 0x0A38 (size: 0xC8)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_225C356D45E5A21B426921BC82B66D30; // 0x0B00 (size: 0x78)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_CA66859145589A1A7696DDB0F498643A; // 0x0B78 (size: 0x78)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_D77FB98C4C64912EBE915B8B73853E4D; // 0x0BF0 (size: 0x78)
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_FBEB48BD4ACF04C6F66991A24AE1753C; // 0x0C68 (size: 0xA0)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_D3FF113D4A415EAD10EDA99A49FA84BF; // 0x0D08 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_0A29B8264385A747D828B58A43152FB2; // 0x0D30 (size: 0x28)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_4FA604654643C493AAA46E8F5C895C54; // 0x0D58 (size: 0x78)
    FAnimNode_StateResult AnimGraphNode_StateResult_05C8BE664C81839477B18988F3650581; // 0x0DD0 (size: 0x30)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_7215186F4BEE04FF5D64799F980D277E; // 0x0E00 (size: 0x78)
    FAnimNode_StateResult AnimGraphNode_StateResult_061E00924F4CB10A278E87860828CB8F; // 0x0E78 (size: 0x30)
    FAnimNode_StateMachine AnimGraphNode_StateMachine_A4E537154DD7C635E13831895FEDF5E8; // 0x0EA8 (size: 0xB0)
    FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_CDCD30384111DE71FE9C80A3578BAB9B; // 0x0F58 (size: 0xC0)

    void AnimGraph(FPoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ArmoredCarDefensive_tankette_AnimGraphNode_TransitionResult_D3FF113D4A415EAD10EDA99A49FA84BF();
    void ExecuteUbergraph_ABP_ArmoredCarDefensive_tankette(int32 EntryPoint);
}; // Size: 0x1018

#endif
