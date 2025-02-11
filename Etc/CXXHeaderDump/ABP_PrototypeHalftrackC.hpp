#ifndef UE4SS_SDK_ABP_PrototypeHalftrackC_HPP
#define UE4SS_SDK_ABP_PrototypeHalftrackC_HPP

class UABP_PrototypeHalftrackC_C : public USimVehicleGunnerSupportAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0300 (size: 0x8)
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_57C19C564ABB37015E3B3883BCB585EC; // 0x0308 (size: 0xA0)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_C12710BC4E266DC0D7FF5BA9B7B8D9F4; // 0x03A8 (size: 0x78)
    FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_5224C27B478CA0E92978A08470F2CB9F; // 0x0420 (size: 0x188)
    FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_A2F45A04468FA2FA33CB4D8D6F475913; // 0x05A8 (size: 0xC0)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_CA75F51B406789D9DABDCDA2FDAA6F65; // 0x0668 (size: 0x78)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_237B49694A829F242B4703A34731B365; // 0x06E0 (size: 0x78)
    FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_5A404CAE4FA95F1CA8B100B3853004B1; // 0x0758 (size: 0x188)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_C6D3558F4423EECF6F26DBA0C2CB6999; // 0x08E0 (size: 0x78)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_C1176D584BD881FDC94EB28C123D74BF; // 0x0958 (size: 0xE0)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_D94FA6C94A123625DFC6608BB15191E2; // 0x0A38 (size: 0x78)
    FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_405EB2DC4F7B60F05CCD2D97FC9E5512; // 0x0AB0 (size: 0xC8)
    FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_02205A2645F614A9D50509A190D79A45; // 0x0B78 (size: 0xC0)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_377C341B40E19F5AFF1A9BAA8B2B4B80; // 0x0C38 (size: 0xE0)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_86759DFB461B72687C2BB2A3D70E2FAD; // 0x0D18 (size: 0xE0)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_01FC134148F5C156052A5CB5C7F9ADC6; // 0x0DF8 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_558E9E5F49FBCA000419869E76F1EC0F; // 0x0E20 (size: 0x28)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_4D78BD1049992BEF35A39982F02708E3; // 0x0E48 (size: 0x78)
    FAnimNode_StateResult AnimGraphNode_StateResult_3B8F444E43ADF9857345B3AAB8A27125; // 0x0EC0 (size: 0x30)
    FAnimNode_StateResult AnimGraphNode_StateResult_CA0F7E5545C9192EB85E299A2554C330; // 0x0EF0 (size: 0x30)
    FAnimNode_StateMachine AnimGraphNode_StateMachine_853A6C8B48A3585591483D989B1551E4; // 0x0F20 (size: 0xB0)
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_5EC2333F47863D4C841FB498D796436C; // 0x0FD0 (size: 0xA0)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_17ACB5764C59AA94AE13AD80B41275A8; // 0x1070 (size: 0x78)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_B396A39F47675A941C65DA91E7F2968C; // 0x10E8 (size: 0x78)
    FAnimNode_Root AnimGraphNode_Root_3A0F14A64E68A99F29D714BABEC45121;               // 0x1160 (size: 0x30)

    void AnimGraph(FPoseLink& AnimGraph);
    void ExecuteUbergraph_ABP_PrototypeHalftrackC(int32 EntryPoint);
}; // Size: 0x1190

#endif
