#ifndef UE4SS_SDK_ABP_Trackswitch_HPP
#define UE4SS_SDK_ABP_Trackswitch_HPP

class UABP_Trackswitch_C : public UTrackSwitchAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0270 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root_209DE730407A75BC3810F6A156D2F56C;               // 0x0278 (size: 0x30)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_B0DDA1E543E1DF8D531B8893CE74D170; // 0x02A8 (size: 0xE0)

    void AnimGraph(FPoseLink& AnimGraph);
    void ExecuteUbergraph_ABP_Trackswitch(int32 EntryPoint);
}; // Size: 0x388

#endif
