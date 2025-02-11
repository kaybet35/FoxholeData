#ifndef UE4SS_SDK_ABP_BannerTW_HPP
#define UE4SS_SDK_ABP_BannerTW_HPP

class UABP_BannerTW_C : public UBannerAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0270 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root_99ABAC334BF1C7E7188B8EA20DE3908E;               // 0x0278 (size: 0x30)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_61796B9645C9D8FF1EE450891D054266; // 0x02A8 (size: 0xE0)

    void AnimGraph(FPoseLink& AnimGraph);
    void ExecuteUbergraph_ABP_BannerTW(int32 EntryPoint);
}; // Size: 0x388

#endif
