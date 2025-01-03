#ifndef UE4SS_SDK_ABP_TrainLRArtillery_HPP
#define UE4SS_SDK_ABP_TrainLRArtillery_HPP

class UABP_TrainLRArtillery_C : public ULRArtilleryCarAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02F0 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root_178B9EE8415CEAE5D05754B29E953D0E;               // 0x02F8 (size: 0x30)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_1DEDDF2F4755C8F177C4C7904F892AAB; // 0x0328 (size: 0x78)
    FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_F39069D943C1B15F840253880A91D7D2; // 0x03A0 (size: 0xC0)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_73C0706247B944B0DF626590E0CB699D; // 0x0460 (size: 0xE0)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_4D2F42D149376CA6E29DDDA1FCFE713C; // 0x0540 (size: 0xE0)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_AD4F7E0A4CCADFB090E89185D03EB2EE; // 0x0620 (size: 0xE0)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_997F75104C9D170EB1A24FB53AC85B57; // 0x0700 (size: 0xE0)
    FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_653B8D26444803367A3B3880E16E85A3; // 0x07E0 (size: 0xC0)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_4A15017E4DAA29F48E8F2A8BB8D7F876; // 0x08A0 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_AFE9606C4659E620D0B2B18C5019C33B; // 0x08C8 (size: 0x28)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_9876296A488A10ED99DEB48C5CCF887A; // 0x08F0 (size: 0x78)
    FAnimNode_StateResult AnimGraphNode_StateResult_FE8AF20D43948801C3B3EB9D8B040613; // 0x0968 (size: 0x30)
    FAnimNode_StateResult AnimGraphNode_StateResult_2EFB6EE84B1516A0A02E838FE5661AC8; // 0x0998 (size: 0x30)
    FAnimNode_StateMachine AnimGraphNode_StateMachine_D7D816B54852D01D3B4EE1937BEB24C0; // 0x09C8 (size: 0xB0)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_69BE72E946C37E5BC6A7AD8664E82F21; // 0x0A78 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2FCF6797414BD557D6CDD2A92BF45950; // 0x0AA0 (size: 0x28)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_A81A060A444D3D6BD0C096BE1F589758; // 0x0AC8 (size: 0x78)
    FAnimNode_StateResult AnimGraphNode_StateResult_E7EE669E427586F4443F1D8DE9808F50; // 0x0B40 (size: 0x30)
    FAnimNode_StateResult AnimGraphNode_StateResult_CA83B4E4466698F8EDF0A0B9DF14BC5A; // 0x0B70 (size: 0x30)
    FAnimNode_StateMachine AnimGraphNode_StateMachine_F47E9D0A421158713C8F9EB981C44EDD; // 0x0BA0 (size: 0xB0)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_5BF626424CC5F7FA4D74DE9F430BD464; // 0x0C50 (size: 0xE0)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_143BC0E5418344C217E7E495714FE0EB; // 0x0D30 (size: 0xE0)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_F0B5ED344D13D1B09EF5DC8D8D47AE82; // 0x0E10 (size: 0xE0)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_63C16EB3435C64E594B712B2378F0CAC; // 0x0EF0 (size: 0xE0)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_35EA9DCB42993804ADB3D5A6BABC4C73; // 0x0FD0 (size: 0x78)
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_9EF5FBA1459ABF317D8E79AC5712E24F; // 0x1048 (size: 0xA0)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_F0F43AB94F13EBFDC3D517A742245B5D; // 0x10E8 (size: 0x78)

    void AnimGraph(FPoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_TrainLRArtillery_AnimGraphNode_TransitionResult_4A15017E4DAA29F48E8F2A8BB8D7F876();
    void ExecuteUbergraph_ABP_TrainLRArtillery(int32 EntryPoint);
}; // Size: 0x1160

#endif
