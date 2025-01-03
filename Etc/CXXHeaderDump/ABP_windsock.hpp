#ifndef UE4SS_SDK_ABP_windsock_HPP
#define UE4SS_SDK_ABP_windsock_HPP

class UABP_windsock_C : public UWindsockAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0270 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root_8AE5F4084B17BCAA0EF80BA8133E9AC9;               // 0x0278 (size: 0x30)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_3762DB79449D75AED76F1AA1C88DBE22; // 0x02A8 (size: 0xE0)

    void AnimGraph(FPoseLink& AnimGraph);
    void ExecuteUbergraph_ABP_windsock(int32 EntryPoint);
}; // Size: 0x388

#endif
