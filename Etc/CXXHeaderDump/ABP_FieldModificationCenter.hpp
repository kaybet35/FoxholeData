#ifndef UE4SS_SDK_ABP_FieldModificationCenter_HPP
#define UE4SS_SDK_ABP_FieldModificationCenter_HPP

class UABP_FieldModificationCenter_C : public UBuildArmAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0320 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root_5E230739427833958B7B36986EA9AC69;               // 0x0328 (size: 0x30)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3D475A9A40C92E195A4DB19A7C9D75D6; // 0x0358 (size: 0x78)
    FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_389335DC4A0DB63CCEAA1495A258A9A0; // 0x03D0 (size: 0xC0)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_EC673E2F42DBE56ADDC0398127BD4CD3; // 0x0490 (size: 0xE0)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_C900A17A43B9C18A6EC7809DD702FE01; // 0x0570 (size: 0xE0)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_1782206A44C6DDCA5F99AC8239AC4031; // 0x0650 (size: 0xE0)

    void AnimGraph(FPoseLink& AnimGraph);
    void ExecuteUbergraph_ABP_FieldModificationCenter(int32 EntryPoint);
}; // Size: 0x730

#endif
