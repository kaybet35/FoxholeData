#ifndef UE4SS_SDK_ABP_ObservationTower_HPP
#define UE4SS_SDK_ABP_ObservationTower_HPP

class UABP_ObservationTower_C : public UWatchTowerAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0270 (size: 0x8)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_B40FF502446C7955A32B8F8508C18A04; // 0x0278 (size: 0xE0)
    FAnimNode_Root AnimGraphNode_Root_D4066C9F4E20AF0842984BB564AAA3F2;               // 0x0358 (size: 0x30)

    void AnimGraph(FPoseLink& AnimGraph);
    void ExecuteUbergraph_ABP_ObservationTower(int32 EntryPoint);
}; // Size: 0x388

#endif
