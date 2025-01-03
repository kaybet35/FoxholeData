#ifndef UE4SS_SDK_ABP_TrainCoal_HPP
#define UE4SS_SDK_ABP_TrainCoal_HPP

class UABP_TrainCoal_C : public URailVehicleAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02C0 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root_89F8CCBF4437C20EBAB533936F34F950;               // 0x02C8 (size: 0x30)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_63424880456028FBE70211A9A1964A99; // 0x02F8 (size: 0x78)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_4B9F24F54F0B5851477C9787B57D2361; // 0x0370 (size: 0xE0)
    FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_0689274F49FA1E6A69DE748BFF588654; // 0x0450 (size: 0xC0)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_4D25CBE34154818FCEBCA5BFED60E656; // 0x0510 (size: 0xE0)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_0F3DD88B4A953F03E73212905335D137; // 0x05F0 (size: 0xE0)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_E08435BD42C8F191B8EEAF98D7DB10B7; // 0x06D0 (size: 0xE0)
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_5E70B9E4486FA5A92EEA9BB9D43681EF; // 0x07B0 (size: 0xA0)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_6D995B4E43BAE3AEEE6C2D88915A3B62; // 0x0850 (size: 0x78)

    void AnimGraph(FPoseLink& AnimGraph);
    void ExecuteUbergraph_ABP_TrainCoal(int32 EntryPoint);
}; // Size: 0x8C8

#endif
