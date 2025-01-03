#ifndef UE4SS_SDK_ABP_Rocket_HPP
#define UE4SS_SDK_ABP_Rocket_HPP

class UABP_Rocket_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0270 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root_90E824104DC6503F8AB67C93D20EE1D9;               // 0x0278 (size: 0x30)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_C5C3CEF0433E2D750603B0BC300C096C; // 0x02A8 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_7EA682CE451A2EFD4A1F37980E6CFFF2; // 0x02D0 (size: 0x28)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_1B99656145BD857B455618A84389CDB3; // 0x02F8 (size: 0x78)
    FAnimNode_StateResult AnimGraphNode_StateResult_5D9C734D4EBB32245E61B386838756BB; // 0x0370 (size: 0x30)
    FAnimNode_StateResult AnimGraphNode_StateResult_61B9A37A4B4D5243B20E44A4CBE01722; // 0x03A0 (size: 0x30)
    FAnimNode_StateMachine AnimGraphNode_StateMachine_C8DDA712416562CC3C3AAB8D96EF35CE; // 0x03D0 (size: 0xB0)
    bool rocketIsLaunched;                                                            // 0x0480 (size: 0x1)

    void AnimGraph(FPoseLink& AnimGraph);
    void ExecuteUbergraph_ABP_Rocket(int32 EntryPoint);
}; // Size: 0x481

#endif
