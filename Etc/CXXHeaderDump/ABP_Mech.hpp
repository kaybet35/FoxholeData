#ifndef UE4SS_SDK_ABP_Mech_HPP
#define UE4SS_SDK_ABP_Mech_HPP

class UABP_Mech_C : public UMechAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02B0 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root_C548DB0F48AF92697D6E5FB664790FB2;               // 0x02B8 (size: 0x30)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_7D1779FF4749C8B61E5D8E97573FE05E; // 0x02E8 (size: 0xE0)
    FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_86523B4A414A2015E84EA1AFCE12D929; // 0x03C8 (size: 0xC0)
    FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_3816C1604559B529BE07B986425CC327; // 0x0488 (size: 0xB8)
    FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_B9C6DBBA4A48B80B889D65B7D534AEDE; // 0x0540 (size: 0x28)
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_7026EF4641928A886CF327BC036F80CA; // 0x0568 (size: 0xA0)
    FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_BA1695DC4934A395C5C75CA90B17738F; // 0x0608 (size: 0x28)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_DFE48D6F44DFE2845E5A80A73A080E28; // 0x0630 (size: 0xE0)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_5C42D8B141A3B4C1DD9934A62B8A9C66; // 0x0710 (size: 0xE0)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_B28DE2B049C82220D2CDD5915FC706BB; // 0x07F0 (size: 0xE0)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_01AF4EA24CCAE1D0C70F3890B4D906FD; // 0x08D0 (size: 0xE0)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_B35DFD13405235BC70BF7CB2DBBFC091; // 0x09B0 (size: 0xE0)
    FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_C0F701D8413A7B3E13B150B847882A16; // 0x0A90 (size: 0xC0)
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_1A44C129461BC3D24F81BD99F6D1FE46; // 0x0B50 (size: 0xA0)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_106A38E04F8924ED85F396B6246AEB28; // 0x0BF0 (size: 0x78)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_16EB0A624C05C8ABDEBA9C9D5C80FD06; // 0x0C68 (size: 0x78)
    FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_071849C048E7D5EB10D41CA71C948DAD; // 0x0CE0 (size: 0x188)
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_FB09606B48FCB493EC964580620C9A2A; // 0x0E68 (size: 0xA0)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_43FBED9F49BD89FCCEAD7CBD2B49D5E7; // 0x0F08 (size: 0x78)

    void AnimGraph(FPoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Mech_AnimGraphNode_BlendSpacePlayer_7D1779FF4749C8B61E5D8E97573FE05E();
    void ExecuteUbergraph_ABP_Mech(int32 EntryPoint);
}; // Size: 0xF80

#endif
