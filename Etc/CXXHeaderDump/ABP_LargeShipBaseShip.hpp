#ifndef UE4SS_SDK_ABP_LargeShipBaseShip_HPP
#define UE4SS_SDK_ABP_LargeShipBaseShip_HPP

class UABP_LargeShipBaseShip_C : public ULargeShipAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0370 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root_FE0E5941489868A713B9A086F578B595;               // 0x0378 (size: 0x30)
    FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_FC766B9144B043D65DBCBEA4C19D2CEC; // 0x03A8 (size: 0xC0)
    FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_3BE34B2748AE0DE4FB67C6AD0F743E98; // 0x0468 (size: 0xC0)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_7EEF058D49905343F86F78BDCB566EDC; // 0x0528 (size: 0xE0)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_C750B11245D675A5566AFFAF66C04A81; // 0x0608 (size: 0x78)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_43BEE956455CAFCC5EABCC932170C8A2; // 0x0680 (size: 0xE0)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_BF6FCEED4C435B6ABE67A58D01BE457E; // 0x0760 (size: 0xE0)
    FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_548A3FBE4AEE2158A083589228001F02; // 0x0840 (size: 0xC0)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_7D6AB3CE415597C42A34E79D75EF80A6; // 0x0900 (size: 0xE0)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_D1B3813F45B87DFB77755DA6AFF3C435; // 0x09E0 (size: 0xE0)
    FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_0F2EE175465784BCE9BB44BD6904F8CE; // 0x0AC0 (size: 0xC0)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_986B277A4BE58A50CBCCF993055C8A42; // 0x0B80 (size: 0xE0)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_5180C83141347C45596BBAA928553147; // 0x0C60 (size: 0xE0)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_5D414E48431813D0C03FFF92A465C888; // 0x0D40 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_C4E8D90940F62D40135567A37985AC8F; // 0x0D68 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_AE0FB9FF4672B1A53E3150ACDEA75434; // 0x0D90 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2D62B4CE49CA73CE7A4CE3B5E0112093; // 0x0DB8 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_6CD4A33846470500CD533282F916EE84; // 0x0DE0 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_5DF71BC848DE24A473CA1EA7772E78B0; // 0x0E08 (size: 0x28)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_28C3B8514522980F00B2AAA22AAE1888; // 0x0E30 (size: 0x78)
    FAnimNode_StateResult AnimGraphNode_StateResult_B43D0E8C4389813B833F60B32F94F6DC; // 0x0EA8 (size: 0x30)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3361EC614D981C3B118E4D8247CA2157; // 0x0ED8 (size: 0x78)
    FAnimNode_StateResult AnimGraphNode_StateResult_1E5646454A4E838B2DB00AB13FD8AA9B; // 0x0F50 (size: 0x30)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_521997A14676D7F2976A508C8374587E; // 0x0F80 (size: 0x78)
    FAnimNode_StateResult AnimGraphNode_StateResult_8D049DF7428D006A7863A0AC26DF938B; // 0x0FF8 (size: 0x30)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_7E152EB547CA1CD8E73F72AAF795C5E9; // 0x1028 (size: 0x78)
    FAnimNode_StateResult AnimGraphNode_StateResult_0C243C63413BC99DE23E689C6FE5AC92; // 0x10A0 (size: 0x30)
    FAnimNode_StateMachine AnimGraphNode_StateMachine_B22BE2E745D1708EBD23629EFF2E5538; // 0x10D0 (size: 0xB0)

    void AnimGraph(FPoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_LargeShipBaseShip_AnimGraphNode_TransitionResult_2D62B4CE49CA73CE7A4CE3B5E0112093();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_LargeShipBaseShip_AnimGraphNode_TransitionResult_AE0FB9FF4672B1A53E3150ACDEA75434();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_LargeShipBaseShip_AnimGraphNode_TransitionResult_6CD4A33846470500CD533282F916EE84();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_LargeShipBaseShip_AnimGraphNode_TransitionResult_C4E8D90940F62D40135567A37985AC8F();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_LargeShipBaseShip_AnimGraphNode_TransitionResult_5D414E48431813D0C03FFF92A465C888();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_LargeShipBaseShip_AnimGraphNode_TransitionResult_5DF71BC848DE24A473CA1EA7772E78B0();
    void ExecuteUbergraph_ABP_LargeShipBaseShip(int32 EntryPoint);
}; // Size: 0x1180

#endif
