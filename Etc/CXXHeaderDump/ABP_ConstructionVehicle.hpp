#ifndef UE4SS_SDK_ABP_ConstructionVehicle_HPP
#define UE4SS_SDK_ABP_ConstructionVehicle_HPP

class UABP_ConstructionVehicle_C : public UConstructionVehicleAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02B0 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root_55FF20954D2E7F4D01B62E8E4435EE61;               // 0x02B8 (size: 0x30)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_479C53C145A776E473860E83299E3D94; // 0x02E8 (size: 0x78)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_D102ED70458266A6006CA5945F8CB3CD; // 0x0360 (size: 0x78)
    FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_01C32CBC4BD9E05FEEBDA09B8CC0E38E; // 0x03D8 (size: 0xC0)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_5C8E1B14449BED91C0473EAA6301B2C8; // 0x0498 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_5E80AE6C4F7F9AADCC7881B1CC43F673; // 0x04C0 (size: 0x28)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_4D149B90485D5F19516A23B1D184E53F; // 0x04E8 (size: 0x78)
    FAnimNode_StateResult AnimGraphNode_StateResult_3FF70D52477CD98C1FBD57ABA304DF32; // 0x0560 (size: 0x30)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_6DDE9F484AC78C700005068E8F05643E; // 0x0590 (size: 0xE0)
    FAnimNode_StateResult AnimGraphNode_StateResult_E9CCD87448AF5083A06318B5F5C30933; // 0x0670 (size: 0x30)
    FAnimNode_StateMachine AnimGraphNode_StateMachine_7FF28EDE495271C6A3F31994E4995077; // 0x06A0 (size: 0xB0)
    FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_B18F18234A495F82B86B4298BA7F1D68; // 0x0750 (size: 0x188)
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_895BDA984428A5CC8844D3A6F2CF016F; // 0x08D8 (size: 0xA0)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_BCEF608F44F6E8CD7C755D838868CB24; // 0x0978 (size: 0x78)

    void AnimGraph(FPoseLink& AnimGraph);
    void ExecuteUbergraph_ABP_ConstructionVehicle(int32 EntryPoint);
}; // Size: 0x9F0

#endif
