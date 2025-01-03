#ifndef UE4SS_SDK_ABP_TrainCombatC_HPP
#define UE4SS_SDK_ABP_TrainCombatC_HPP

class UABP_TrainCombatC_C : public UInfantryRailVehicleAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02F0 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root_D4FFB54546C23C7ADB977F9CAEBF3519;               // 0x02F8 (size: 0x30)
    FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_1CC4D9364E76FD7D6B4F709DA96C008D; // 0x0328 (size: 0xC0)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_512DC5F4404C3867638A8A89D18B2D5A; // 0x03E8 (size: 0xE0)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2E68D9374A6B52509AC462807B59F9D3; // 0x04C8 (size: 0x78)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_344B2B294D82EEF81BDA2792D876A3AA; // 0x0540 (size: 0x78)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_2235F2C54D55CFBAD3C5BDAFBBD50FA0; // 0x05B8 (size: 0xE0)
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_806394094A4013126325BD9C963EE7F9; // 0x0698 (size: 0xA0)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_F3E82DED46DB593A75E7129D22B0B391; // 0x0738 (size: 0xE0)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_216E13F24E5AD168D2672794FAB520D8; // 0x0818 (size: 0xE0)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_9C254C9E491BAE79A67C389F8C042601; // 0x08F8 (size: 0xE0)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_39C8F1B943F764C9050DD285FCFB9BC3; // 0x09D8 (size: 0xE0)
    FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_828FD89045958E0DB4823CB1E3FE82FA; // 0x0AB8 (size: 0xC8)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_BEB9F87841CDBAAEF372A29D064ED54A; // 0x0B80 (size: 0xE0)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_6EF84E6945B5977B6989A2B71B84E515; // 0x0C60 (size: 0xE0)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_E5CADBF044A39AE8B8D2FFA2F661B47C; // 0x0D40 (size: 0x78)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_DCDC55FE47F8FB233A9FCB97C9151A95; // 0x0DB8 (size: 0x78)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_8CA0E88B4C62E0A1CBD40C91A64118EA; // 0x0E30 (size: 0xE0)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_07B39E654A6A3FBC5B8766A7E14D6B4D; // 0x0F10 (size: 0xE0)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_D4E56C5F42F8C1402AA2A09AF2F66026; // 0x0FF0 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_39A571AE4A24B434E977189E0135209D; // 0x1018 (size: 0x28)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_C8147D354AA56245D48E56BE02E875D7; // 0x1040 (size: 0x78)
    FAnimNode_StateResult AnimGraphNode_StateResult_346DA6E54E1727C47172C7A80C461F26; // 0x10B8 (size: 0x30)
    FAnimNode_StateResult AnimGraphNode_StateResult_45D1886B466C923EC0D65D83871D96AC; // 0x10E8 (size: 0x30)
    FAnimNode_StateMachine AnimGraphNode_StateMachine_1F42FA5645F120AD802BAC81B0392467; // 0x1118 (size: 0xB0)
    FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_80F145974129AD110764EAB86E4FAB5B; // 0x11C8 (size: 0xC0)
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_B6213D184312695B69B2B0B6A02AEEB3; // 0x1288 (size: 0xA0)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_F45A6BA94EDCED2683B5BB8E31184726; // 0x1328 (size: 0x78)

    void AnimGraph(FPoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_TrainCombatC_AnimGraphNode_TransitionResult_D4E56C5F42F8C1402AA2A09AF2F66026();
    void ExecuteUbergraph_ABP_TrainCombatC(int32 EntryPoint);
}; // Size: 0x13A0

#endif
