#ifndef UE4SS_SDK_ABP_TruckCol_HPP
#define UE4SS_SDK_ABP_TruckCol_HPP

class UABP_TruckCol_C : public USimVehicleAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02A0 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root_C6291C92430341C8D52C27862D8AB9F1;               // 0x02A8 (size: 0x30)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_78405A9041FF77B23F18FAAF5E76BB11; // 0x02D8 (size: 0x78)
    FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_7C96EA0147E707AA44CCB39A54E60D86; // 0x0350 (size: 0x188)

    void AnimGraph(FPoseLink& AnimGraph);
    void ExecuteUbergraph_ABP_TruckCol(int32 EntryPoint);
}; // Size: 0x4D8

#endif
