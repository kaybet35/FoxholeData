#ifndef UE4SS_SDK_ABP_MechWarden_HPP
#define UE4SS_SDK_ABP_MechWarden_HPP

class UABP_MechWarden_C : public USpiderMechAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02B0 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root_4AF667934B86F6CFC998F4A628F64324;               // 0x02B8 (size: 0x30)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_11A9F2E547F7D8EBBB2FA79CCD90130F; // 0x02E8 (size: 0x78)
    FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_8112D34C4A7B47620D8A09A5037126D1; // 0x0360 (size: 0xC0)
    FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_931F111E4662E1453A5876AA3B9A0BED; // 0x0420 (size: 0xC0)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_F13DE3C24A78B4BE2EDB2889C4434579; // 0x04E0 (size: 0xE0)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_3C63958C4B3E4886F6C6418A4458727F; // 0x05C0 (size: 0xE0)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_351C15734CB12CB95665A38729DFCD6A; // 0x06A0 (size: 0xE0)
    FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_B61BBD01461570B1B1F477A7CEEB3340; // 0x0780 (size: 0x188)
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_792D43714D458E8A13AB95AE1D0FBF3F; // 0x0908 (size: 0xA0)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_5E5B47D544764EBB0B7B3DB789550F5D; // 0x09A8 (size: 0x78)

    void AnimGraph(FPoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MechWarden_AnimGraphNode_SequencePlayer_11A9F2E547F7D8EBBB2FA79CCD90130F();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MechWarden_AnimGraphNode_RotationOffsetBlendSpace_B61BBD01461570B1B1F477A7CEEB3340();
    void ExecuteUbergraph_ABP_MechWarden(int32 EntryPoint);
}; // Size: 0xA20

#endif
