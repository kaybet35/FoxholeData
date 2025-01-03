#ifndef UE4SS_SDK_ABP_GunBoatW_HPP
#define UE4SS_SDK_ABP_GunBoatW_HPP

class UABP_GunBoatW_C : public USimVehicleGunnerSupportAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0300 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root_66739B25442B44E9B92B0698571DB689;               // 0x0308 (size: 0x30)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_707A483C4E91F2D30FCE25BA7699C2F6; // 0x0338 (size: 0x78)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_477102874B41D6B38DBD509272AF5D32; // 0x03B0 (size: 0xE0)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_2016FFE248316AF95D02ABB028851F5B; // 0x0490 (size: 0xE0)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_A5A16CAB4D0DAB3D8821C6928565B26F; // 0x0570 (size: 0xE0)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_C5F4FAF54E0D2B0195AF34B05D870655; // 0x0650 (size: 0xE0)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_32C547984AB0FA69C27F7A8ECF1B490B; // 0x0730 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_7FEA7100453F07933FD3AABD23418B6F; // 0x0758 (size: 0x28)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_61FC8F1D44C64D13894A97B3799E2021; // 0x0780 (size: 0x78)
    FAnimNode_StateResult AnimGraphNode_StateResult_1E31CE184DFF7BF998243B9D48A704C7; // 0x07F8 (size: 0x30)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_4EDD9E2C4BF6B045AE21CA8151FB5B13; // 0x0828 (size: 0x78)
    FAnimNode_StateResult AnimGraphNode_StateResult_9362188748B4E96A14D118B9273365D5; // 0x08A0 (size: 0x30)
    FAnimNode_StateMachine AnimGraphNode_StateMachine_74937C954070383D18843A93BDFB6165; // 0x08D0 (size: 0xB0)
    FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_277E34F844BC618E5A9C1CBBE9887E90; // 0x0980 (size: 0xC0)
    FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_F1A1945D4216F21DA349C8870BE18E7C; // 0x0A40 (size: 0xC0)
    FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_204344F745E34FAB37EDCF8672DC7F37; // 0x0B00 (size: 0xC0)
    FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_2723CB2343E9383474D6DBB5C1ACEAC7; // 0x0BC0 (size: 0xC0)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_941ABEF64185324E967495BE856C37C0; // 0x0C80 (size: 0xE0)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_1638C2D343E501472DF3D287C7CA2539; // 0x0D60 (size: 0xE0)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_A4B3385740D72B723CCC998CB91A7739; // 0x0E40 (size: 0xE0)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_30ABF1C2485AA8AD24E9E6A8567B8A4F; // 0x0F20 (size: 0x78)
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_CE31E36F417DB890ABB9D39CBAB91296; // 0x0F98 (size: 0xA0)

    void AnimGraph(FPoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_GunBoatW_AnimGraphNode_TransitionResult_32C547984AB0FA69C27F7A8ECF1B490B();
    void ExecuteUbergraph_ABP_GunBoatW(int32 EntryPoint);
}; // Size: 0x1038

#endif
