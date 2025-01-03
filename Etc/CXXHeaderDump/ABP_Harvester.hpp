#ifndef UE4SS_SDK_ABP_Harvester_HPP
#define UE4SS_SDK_ABP_Harvester_HPP

class UABP_Harvester_C : public UHarvesterAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02A0 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root_8FC9289E4971084B5D5D64A4FF0BBE9E;               // 0x02A8 (size: 0x30)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_9E217E9849DB572D889B3E9B3589F2B5; // 0x02D8 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_FE97B69649FE27E8CB4D64B7569C0677; // 0x0300 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_BADE1C674C475F338BBE9D81016A9B0B; // 0x0328 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_D3FCF955453FFAF2224FDC8455E73A28; // 0x0350 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_FF0B4DE645167ACD831B1B9A4EFADD6A; // 0x0378 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_07FC1E52459B29086185EEA64128095F; // 0x03A0 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2B058D24457D0508554FC8B1872E8EEE; // 0x03C8 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_1C76EE034CFC2D378A670DBA0B3777E3; // 0x03F0 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_BAE5C818425B498E4944D08C690452E3; // 0x0418 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_D70756C84BB37163556F2D98FF0C4754; // 0x0440 (size: 0x28)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_83498E68438C6275CB63CA813C28DDEA; // 0x0468 (size: 0x78)
    FAnimNode_StateResult AnimGraphNode_StateResult_7FCB43F1499C63EE262B98BC2DA49338; // 0x04E0 (size: 0x30)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_84D1A2DB4F0306BB403D8ABFE8321522; // 0x0510 (size: 0x78)
    FAnimNode_StateResult AnimGraphNode_StateResult_BAECD188474489E590FE0296D214F95F; // 0x0588 (size: 0x30)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_51C3BF7348613500229D4A853022D728; // 0x05B8 (size: 0x78)
    FAnimNode_StateResult AnimGraphNode_StateResult_FB1B1CE6494120D883569BAEECC9E8FA; // 0x0630 (size: 0x30)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_FD6F8A9B4B9175296DCFD3BFE15D9C1C; // 0x0660 (size: 0x78)
    FAnimNode_StateResult AnimGraphNode_StateResult_DC447885496EF7577AB52A95B5D48B07; // 0x06D8 (size: 0x30)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_E42485C34A9DA8A4275F7AAF9EC085DD; // 0x0708 (size: 0x78)
    FAnimNode_StateResult AnimGraphNode_StateResult_AAE26CE54C3478DEC670EA9B51E4720E; // 0x0780 (size: 0x30)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_B7BD49074BDABDB1A43D799E64C6F815; // 0x07B0 (size: 0x78)
    FAnimNode_StateResult AnimGraphNode_StateResult_91C033344AE89B9B06F17FA3BDE2DFF7; // 0x0828 (size: 0x30)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_B74AB46E4CEF2EB2FEE07C91B25B46F3; // 0x0858 (size: 0x78)
    FAnimNode_StateResult AnimGraphNode_StateResult_AF926EB0462F15D3D1EEB7BF4AC8440D; // 0x08D0 (size: 0x30)
    FAnimNode_StateMachine AnimGraphNode_StateMachine_1E1B42FE4F1F9B8C588E009A254D6357; // 0x0900 (size: 0xB0)

    void AnimGraph(FPoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Harvester_AnimGraphNode_TransitionResult_FE97B69649FE27E8CB4D64B7569C0677();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Harvester_AnimGraphNode_TransitionResult_07FC1E52459B29086185EEA64128095F();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Harvester_AnimGraphNode_TransitionResult_9E217E9849DB572D889B3E9B3589F2B5();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Harvester_AnimGraphNode_TransitionResult_FF0B4DE645167ACD831B1B9A4EFADD6A();
    void ExecuteUbergraph_ABP_Harvester(int32 EntryPoint);
}; // Size: 0x9B0

#endif
