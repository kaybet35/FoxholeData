#ifndef UE4SS_SDK_ABP_HalftrackMultiW_HPP
#define UE4SS_SDK_ABP_HalftrackMultiW_HPP

class UABP_HalftrackMultiW_C : public USimVehicleGunnerSupportAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0300 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root_EBA27E65490C3D4604E214A350DA253D;               // 0x0308 (size: 0x30)
    FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_69E9E517434C0515E80889B603DF17BE; // 0x0338 (size: 0xC0)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_00C075FD483480F129F6B2BFCB8944DD; // 0x03F8 (size: 0xE0)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_6269C11145F747566FF040BE50032D80; // 0x04D8 (size: 0xE0)
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_B8F3B4554FFAF9EC4681F79B501518E0; // 0x05B8 (size: 0xA0)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_82EB9C6043345C49ADB4628C2D3C5B27; // 0x0658 (size: 0x78)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_796430DB4568695320DA2CAB036B97F7; // 0x06D0 (size: 0x78)
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_0776DCA54C2EC622F4F2E5938AA74333; // 0x0748 (size: 0xA0)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_029E29CD454A3ECB627592B3F30337FA; // 0x07E8 (size: 0x78)
    FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_D79F6B2F4BCF64277438E9AD5801A1D9; // 0x0860 (size: 0xC0)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_14EE95C443D15282D5528ABF82F6B767; // 0x0920 (size: 0x78)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_D7D6CD824A1AF4D06C48EDACDAA512C6; // 0x0998 (size: 0x78)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_9B7D4A57441A8927124646B502F2CC85; // 0x0A10 (size: 0x78)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_9EA1635D4CE4A60F78209BBFD1B0A5E4; // 0x0A88 (size: 0x78)
    FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_79F8227C457A060D11E043A187931854; // 0x0B00 (size: 0x188)
    FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_A2D7DFB1464F113ED1905CAF6D55D98A; // 0x0C88 (size: 0x188)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_F7588CA04EAE0A86541EEFBD6A1E1321; // 0x0E10 (size: 0x78)
    FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_ED7482A94B2C4976DFAB57B7967007EA; // 0x0E88 (size: 0xC8)

    void AnimGraph(FPoseLink& AnimGraph);
    void ExecuteUbergraph_ABP_HalftrackMultiW(int32 EntryPoint);
}; // Size: 0xF50

#endif
