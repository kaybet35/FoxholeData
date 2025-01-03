#ifndef UE4SS_SDK_ABP_EmplacementMortar_HPP
#define UE4SS_SDK_ABP_EmplacementMortar_HPP

class UABP_EmplacementMortar_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0270 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root_9EA9C1534ED8CAAC30194CBC28570ACB;               // 0x0278 (size: 0x30)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_D01A3E694F0CBA181F40009323872EAB; // 0x02A8 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_D95C8780487E68B324FAD1B73AA73797; // 0x02D0 (size: 0x28)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_1E5D19BB419F767F865A76B4BFFC25D8; // 0x02F8 (size: 0x78)
    FAnimNode_StateResult AnimGraphNode_StateResult_1F1BB747484E8071B9BC62A46E09DB15; // 0x0370 (size: 0x30)
    FAnimNode_StateResult AnimGraphNode_StateResult_6F516D664848085F5BDA2297798CF9B4; // 0x03A0 (size: 0x30)
    FAnimNode_StateMachine AnimGraphNode_StateMachine_27FFCBB24B143B9C92BD31B6C60A2BBD; // 0x03D0 (size: 0xB0)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_BC199F2A4A9EE8B4B37CE3AFC8A3892C; // 0x0480 (size: 0xE0)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_F6C9EEE5482F02B46B55B2947B56BB8A; // 0x0560 (size: 0xE0)
    FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_7DE253EA4385328A6E06FCBB1C26DB68; // 0x0640 (size: 0xC0)
    bool isCannonCrankMoving;                                                         // 0x0700 (size: 0x1)
    float CannonYaw;                                                                  // 0x0704 (size: 0x4)
    float CannonPitch;                                                                // 0x0708 (size: 0x4)

    void AnimGraph(FPoseLink& AnimGraph);
    void BlueprintUpdateAnimation(float DeltaTimeX);
    void ExecuteUbergraph_ABP_EmplacementMortar(int32 EntryPoint);
}; // Size: 0x70C

#endif
