#ifndef UE4SS_SDK_ABP_BannerTC_HPP
#define UE4SS_SDK_ABP_BannerTC_HPP

class UABP_BannerTC_C : public UBannerAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0270 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root_6274C3BE43BB8050A81F51BF895B32A2;               // 0x0278 (size: 0x30)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_698A127E4C8F8BF1EDDEE6A4782D1FF4; // 0x02A8 (size: 0xE0)

    void AnimGraph(FPoseLink& AnimGraph);
    void ExecuteUbergraph_ABP_BannerTC(int32 EntryPoint);
}; // Size: 0x388

#endif
