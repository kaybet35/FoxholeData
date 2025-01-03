#ifndef UE4SS_SDK_ABP_GateDoor_HPP
#define UE4SS_SDK_ABP_GateDoor_HPP

class UABP_GateDoor_C : public UGateAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0270 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root_97A4A02043A8CEC3A617638E363EB7B6;               // 0x0278 (size: 0x30)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_079CCC914081AF995121089B8D02A80B; // 0x02A8 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_6279826E4E64348F8D7D3996047B4EB2; // 0x02D0 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_B976E2524D801A87F13533B9E6A753DE; // 0x02F8 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_C28CA8A9412E7210B62B16AFFF2170EE; // 0x0320 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_4BE1CEBC4CC4B4B59B15F5B0CD4FDCE2; // 0x0348 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_A74F7A294CE760E7955FF1B03F491AE1; // 0x0370 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_BA40081E4E892D230103CA995A92CFBA; // 0x0398 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_0AF1A1D2463EADC4A5D0A8A614D55C29; // 0x03C0 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_65FC5AA14251A006F80399A45584A91C; // 0x03E8 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_7ABD07A94A059B446DA0D59A5F3BE363; // 0x0410 (size: 0x28)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_24FC57664280047923AD518247FC0F2B; // 0x0438 (size: 0x78)
    FAnimNode_StateResult AnimGraphNode_StateResult_D84A8F90426D04378B7872A6B49AF363; // 0x04B0 (size: 0x30)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_C535EDCD45E1EAAAC9FC96AAD793C014; // 0x04E0 (size: 0x78)
    FAnimNode_StateResult AnimGraphNode_StateResult_44AFD3E1465C629431E138AC4D10E229; // 0x0558 (size: 0x30)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_8A64EAD641A4A10D08EB848E5FFB3DBD; // 0x0588 (size: 0x78)
    FAnimNode_StateResult AnimGraphNode_StateResult_BC6E28784C00CAD331C05891F8FAEFB9; // 0x0600 (size: 0x30)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_4C9E9BA3439761865EBD7BBAE6B43179; // 0x0630 (size: 0x78)
    FAnimNode_StateResult AnimGraphNode_StateResult_EEB0A1514331829565A8EBA2760560AD; // 0x06A8 (size: 0x30)
    FAnimNode_StateResult AnimGraphNode_StateResult_B256C3A7474F137EFC97E7AEE79FDFAE; // 0x06D8 (size: 0x30)
    FAnimNode_StateMachine AnimGraphNode_StateMachine_9433427E443FA1FFA3605BA70A8ED454; // 0x0708 (size: 0xB0)

    void AnimGraph(FPoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_GateDoor_AnimGraphNode_TransitionResult_C28CA8A9412E7210B62B16AFFF2170EE();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_GateDoor_AnimGraphNode_TransitionResult_4BE1CEBC4CC4B4B59B15F5B0CD4FDCE2();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_GateDoor_AnimGraphNode_TransitionResult_A74F7A294CE760E7955FF1B03F491AE1();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_GateDoor_AnimGraphNode_TransitionResult_B976E2524D801A87F13533B9E6A753DE();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_GateDoor_AnimGraphNode_TransitionResult_BA40081E4E892D230103CA995A92CFBA();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_GateDoor_AnimGraphNode_TransitionResult_0AF1A1D2463EADC4A5D0A8A614D55C29();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_GateDoor_AnimGraphNode_TransitionResult_65FC5AA14251A006F80399A45584A91C();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_GateDoor_AnimGraphNode_TransitionResult_7ABD07A94A059B446DA0D59A5F3BE363();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_GateDoor_AnimGraphNode_TransitionResult_6279826E4E64348F8D7D3996047B4EB2();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_GateDoor_AnimGraphNode_TransitionResult_079CCC914081AF995121089B8D02A80B();
    void ExecuteUbergraph_ABP_GateDoor(int32 EntryPoint);
}; // Size: 0x7B8

#endif
