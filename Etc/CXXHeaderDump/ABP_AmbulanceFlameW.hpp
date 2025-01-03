#ifndef UE4SS_SDK_ABP_AmbulanceFlameW_HPP
#define UE4SS_SDK_ABP_AmbulanceFlameW_HPP

class UABP_AmbulanceFlameW_C : public USimVehicleGunnerSupportAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0300 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root_FE97B32C4842AB47380F3D8E13E63913;               // 0x0308 (size: 0x30)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_6B4CECAD423B05E7B530E6AF370BDADB; // 0x0338 (size: 0xE0)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_707724254CB6CF0FDA9821A30A55B86F; // 0x0418 (size: 0xE0)
    FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_8DD944F243035311EA640D9C04F9BE33; // 0x04F8 (size: 0xC0)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3FECA0D04F64825D9D1C8ABF626546DA; // 0x05B8 (size: 0x78)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_D38F3E344B3615BA521BF580A006C081; // 0x0630 (size: 0x78)
    FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_7F0DF13B4A17D654B2A37D80E688D2A3; // 0x06A8 (size: 0x188)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_647E1865427D94A128817AAF9B597114; // 0x0830 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_A2DE153C4709505296D846B50D5AFC86; // 0x0858 (size: 0x28)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_365C8B07495E97928B95CFAEFF9CDF2C; // 0x0880 (size: 0x78)
    FAnimNode_StateResult AnimGraphNode_StateResult_4AEAD9884EE7387A59A6D19FF6FD084D; // 0x08F8 (size: 0x30)
    FAnimNode_StateResult AnimGraphNode_StateResult_75E42CE647C248ACD026439D8348A736; // 0x0928 (size: 0x30)
    FAnimNode_StateMachine AnimGraphNode_StateMachine_40209A28440DA3591B60A68AED29A1C7; // 0x0958 (size: 0xB0)

    void AnimGraph(FPoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_AmbulanceFlameW_AnimGraphNode_TransitionResult_647E1865427D94A128817AAF9B597114();
    void ExecuteUbergraph_ABP_AmbulanceFlameW(int32 EntryPoint);
}; // Size: 0xA08

#endif
