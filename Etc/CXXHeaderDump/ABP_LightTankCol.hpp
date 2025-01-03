#ifndef UE4SS_SDK_ABP_LightTankCol_HPP
#define UE4SS_SDK_ABP_LightTankCol_HPP

class UABP_LightTankCol_C : public USimVehicleGunnerSupportAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0300 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root_54D3131142A0816543479D95285806F9;               // 0x0308 (size: 0x30)
    FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_E8F3DD724E89EBA669CB6387BFB98DA3; // 0x0338 (size: 0xC0)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_908B7DF2462056E6523FE58B4DB8B365; // 0x03F8 (size: 0xE0)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_DD887D1F42DB1FB3FBC79E9FBBF39B4B; // 0x04D8 (size: 0x78)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_6EDFB13C413C01A6F1E0CC90B736BC15; // 0x0550 (size: 0x78)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_5A3BF2E54ECAC0E025B38BBA9E94D625; // 0x05C8 (size: 0x78)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_E64BF0A64F9A601617613DA3F1D0BBBD; // 0x0640 (size: 0x78)
    FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_BD0E029D4F687E6988C65EBFAD2D3116; // 0x06B8 (size: 0x188)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_5AC5D5E94A858CD0CFDC4B815305725C; // 0x0840 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_967D187F41F1BA88F24EA4AE6EE69AB6; // 0x0868 (size: 0x28)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_115A31B840A68609428A91866E38375C; // 0x0890 (size: 0x78)
    FAnimNode_StateResult AnimGraphNode_StateResult_8DF8842D4B686BDFE3B5AA8AA2A854F2; // 0x0908 (size: 0x30)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_9071F94346EB947DBAAD719DE609BAC1; // 0x0938 (size: 0x78)
    FAnimNode_StateResult AnimGraphNode_StateResult_318BDF434C613F90B08B76A720BA7F8E; // 0x09B0 (size: 0x30)
    FAnimNode_StateMachine AnimGraphNode_StateMachine_CB936C66455CE79B225109A38CA4AD35; // 0x09E0 (size: 0xB0)
    FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_2F3BC3E24C0FAE0B976DDF9F7B8642C3; // 0x0A90 (size: 0x188)
    FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_D64B27FC464ADCCDF135F6920468DC49; // 0x0C18 (size: 0x188)
    FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_8B9DEAC2454F55168FA5298E388A920F; // 0x0DA0 (size: 0x188)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_CF8B228546D54627C8A381AA4A35E86D; // 0x0F28 (size: 0x78)
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_3379A7C541D8082FAD38B2AD47849875; // 0x0FA0 (size: 0xA0)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_195B0F59485B0079C3CD31A15452CA83; // 0x1040 (size: 0x78)
    FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_69CDC84A4D65DC08E2E2AAA61CB960F2; // 0x10B8 (size: 0xC8)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_61B665A042BA9E42179301A0F0167C35; // 0x1180 (size: 0xE0)

    void AnimGraph(FPoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_LightTankCol_AnimGraphNode_RotationOffsetBlendSpace_2F3BC3E24C0FAE0B976DDF9F7B8642C3();
    void ExecuteUbergraph_ABP_LightTankCol(int32 EntryPoint);
}; // Size: 0x1260

#endif
