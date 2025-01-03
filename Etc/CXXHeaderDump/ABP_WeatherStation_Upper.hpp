#ifndef UE4SS_SDK_ABP_WeatherStation_Upper_HPP
#define UE4SS_SDK_ABP_WeatherStation_Upper_HPP

class UABP_WeatherStation_Upper_C : public UWeatherStationAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0280 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root_230FD54A4A86EC53E2EA5692913F9B9A;               // 0x0288 (size: 0x30)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_15D4938E46C88A2E99FBCC9D2F57E77C; // 0x02B8 (size: 0xE0)
    FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_BE7A2E53498B0E04CAF4BC9145BC3D33; // 0x0398 (size: 0xC0)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_A5E9A32946FDE5CC00276ABBD9B2F41D; // 0x0458 (size: 0x78)

    void AnimGraph(FPoseLink& AnimGraph);
    void ExecuteUbergraph_ABP_WeatherStation_Upper(int32 EntryPoint);
}; // Size: 0x4D0

#endif
