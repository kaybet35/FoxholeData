#ifndef UE4SS_SDK_ABP_PrototypeTruckCol_HPP
#define UE4SS_SDK_ABP_PrototypeTruckCol_HPP

class UABP_PrototypeTruckCol_C : public USimVehicleGunnerSupportAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0300 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root_E42BBE0A400F12CD38451C9FBA296F52;               // 0x0308 (size: 0x30)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_0C3DDB3B46D5A49AEDD83FB04CDC44CA; // 0x0338 (size: 0x78)
    FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_F8617C61434ED1E5A90EC9A25BDA820B; // 0x03B0 (size: 0x188)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_73AA42B5412AB768FFCF92A07009029C; // 0x0538 (size: 0xE0)
    FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_F3C89D5A4C88CC55FA54BC98F08C9DB7; // 0x0618 (size: 0x188)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_401E0F2A439BA45EB481D79B50CF54C0; // 0x07A0 (size: 0xE0)
    FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_88CCCB16444B62DADD5548AE037BE469; // 0x0880 (size: 0xC0)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_5A05C33F4F5CA9274DF9E896CE81DEDD; // 0x0940 (size: 0x78)
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_8C056DA344988443F05581B1B7C44806; // 0x09B8 (size: 0xA0)

    void AnimGraph(FPoseLink& AnimGraph);
    void ExecuteUbergraph_ABP_PrototypeTruckCol(int32 EntryPoint);
}; // Size: 0xA58

#endif
