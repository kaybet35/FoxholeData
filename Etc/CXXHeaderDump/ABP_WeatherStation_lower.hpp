#ifndef UE4SS_SDK_ABP_WeatherStation_lower_HPP
#define UE4SS_SDK_ABP_WeatherStation_lower_HPP

class UABP_WeatherStation_lower_C : public UWeatherStationBaseAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0270 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root_8CE1EE9F43B98B50ECE1528B13A893A1;               // 0x0278 (size: 0x30)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_BB52958843AB9D47005726A728314450; // 0x02A8 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_C2944CE4419095FEC3C3FFB271A0BDBC; // 0x02D0 (size: 0x28)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_223B41C34A1C03AFF1C0F089CB2057BF; // 0x02F8 (size: 0x78)
    FAnimNode_StateResult AnimGraphNode_StateResult_D7B611C04F747EEBC03EF19B0146E6A2; // 0x0370 (size: 0x30)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_CDE30CA048B9216E41632FB2CF37B476; // 0x03A0 (size: 0x78)
    FAnimNode_StateResult AnimGraphNode_StateResult_528CD49F4BAF3BC7429B9D90BF1FABAA; // 0x0418 (size: 0x30)
    FAnimNode_StateMachine AnimGraphNode_StateMachine_2283DE9E41F7BD0D92B1B495B6BC459E; // 0x0448 (size: 0xB0)

    void AnimGraph(FPoseLink& AnimGraph);
    void ExecuteUbergraph_ABP_WeatherStation_lower(int32 EntryPoint);
}; // Size: 0x4F8

#endif
