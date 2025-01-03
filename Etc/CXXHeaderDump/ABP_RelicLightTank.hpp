#ifndef UE4SS_SDK_ABP_RelicLightTank_HPP
#define UE4SS_SDK_ABP_RelicLightTank_HPP

class UABP_RelicLightTank_C : public USimVehicleGunnerSupportAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0300 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root_D80FB5E74B782494957A969EE45AE817;               // 0x0308 (size: 0x30)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_45CF418A4F34A6F5B4795F9F6B7E299F; // 0x0338 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_474FE2594507C70B53286E8D5E7AEC84; // 0x0360 (size: 0x28)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_1DFC148349A8BAB93BB1DD8324E5437D; // 0x0388 (size: 0x78)
    FAnimNode_StateResult AnimGraphNode_StateResult_37EE42BB40B4F59EDBA38F821364CA03; // 0x0400 (size: 0x30)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_4C1CCCA346440F40ECBCC09F3C7A9C64; // 0x0430 (size: 0x78)
    FAnimNode_StateResult AnimGraphNode_StateResult_2C1F820A4E3610C19EC0E9996B9D1C5C; // 0x04A8 (size: 0x30)
    FAnimNode_StateMachine AnimGraphNode_StateMachine_53ADDE3147CC91BBB07CF4980063DB21; // 0x04D8 (size: 0xB0)
    FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_6566FAB04B4200EE67ECF0B68F514B7A; // 0x0588 (size: 0xC0)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_B0553ED54D8DB19E19DD47B5C2B237CD; // 0x0648 (size: 0x78)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_43AE278C41F4A3DE9BC333B6D3E6A2A9; // 0x06C0 (size: 0xE0)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_683942A841F77B7EB88A849522637E06; // 0x07A0 (size: 0xE0)
    FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_E4543AEA4170B4C2DFE45FBA95FB6618; // 0x0880 (size: 0xC0)
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_76E313524BB471B95A76D180A055F204; // 0x0940 (size: 0xA0)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_655E4BD6427B8227B2BFE5BA3A1ACEF8; // 0x09E0 (size: 0x78)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_B47D619B46869CEDCC06858953D0B274; // 0x0A58 (size: 0x78)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_87854E07480FA390F37CE5B3C8AFFEDC; // 0x0AD0 (size: 0x78)
    FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_8CD364C64D683DC517CE8D970CD696F4; // 0x0B48 (size: 0xC8)
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_0C6E94E64A86248547C4E0B7E4386909; // 0x0C10 (size: 0xA0)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_63FF8FBC4ED5A3EA82DEE79E0B0B4CE4; // 0x0CB0 (size: 0x78)

    void AnimGraph(FPoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RelicLightTank_AnimGraphNode_TransitionResult_474FE2594507C70B53286E8D5E7AEC84();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RelicLightTank_AnimGraphNode_TransitionResult_45CF418A4F34A6F5B4795F9F6B7E299F();
    void ExecuteUbergraph_ABP_RelicLightTank(int32 EntryPoint);
}; // Size: 0xD28

#endif
