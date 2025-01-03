#ifndef UE4SS_SDK_ABP_SuperTankW_HPP
#define UE4SS_SDK_ABP_SuperTankW_HPP

class UABP_SuperTankW_C : public USimVehicleGunnerSupportAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0300 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root_7222C9E74B3181597B82EFBDD6CD4A31;               // 0x0308 (size: 0x30)
    FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_C742ED1049F2B349768F2E98CE4FEA23; // 0x0338 (size: 0x188)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_281814D94D243086BCF074841DA7A52C; // 0x04C0 (size: 0xE0)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_CA95EC53472BDD94F78DF59C340F9897; // 0x05A0 (size: 0xE0)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_7B78F873464D036D29AD368F88BC2D77; // 0x0680 (size: 0xE0)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_919F7193481004399A0549934C43B39B; // 0x0760 (size: 0xE0)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_6A0D2FC84E63C98358F97D8C9451EDAA; // 0x0840 (size: 0xE0)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_E08E24BE43A993C006591EACB12432CF; // 0x0920 (size: 0x78)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_111B34694182B491C4F99C8617BDE794; // 0x0998 (size: 0x78)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_C44260914BA6B730EE2FF89D98F14C27; // 0x0A10 (size: 0x78)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_50A8E0384E7282DFD795B19058D53CF3; // 0x0A88 (size: 0x78)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_990F8C224D7F9DBC8E0651ABA04E60A3; // 0x0B00 (size: 0x78)
    FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_793BC4414728CE31866D2B85FCBF4D50; // 0x0B78 (size: 0xC0)
    FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_119148CC430D6E943AF16F85678E2E4D; // 0x0C38 (size: 0xC0)
    FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_8975D8D449FA0BF887D9D79D8DA3F3A4; // 0x0CF8 (size: 0xC0)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_F51918ED46BE8F23D14C68AFD75FD3F9; // 0x0DB8 (size: 0x78)
    FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_54FF26004CE7BED0B8B6FD87A8CA82A4; // 0x0E30 (size: 0xC0)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_7BED895D47526AFB5024B499676C853A; // 0x0EF0 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_F547E2954CF7C0E93B97CB90B783E003; // 0x0F18 (size: 0x28)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2EE8806E46F49B0CDE7C948A6346E32E; // 0x0F40 (size: 0x78)
    FAnimNode_StateResult AnimGraphNode_StateResult_5A1DB241412E04066D9F56B64C60D178; // 0x0FB8 (size: 0x30)
    FAnimNode_StateResult AnimGraphNode_StateResult_734E8728462848204786DCA74EA1A269; // 0x0FE8 (size: 0x30)
    FAnimNode_StateMachine AnimGraphNode_StateMachine_83E1299F402EDB20B8B0039CCE5CE32C; // 0x1018 (size: 0xB0)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_5D7DF02E4608C2A794FCF9A8DD224D06; // 0x10C8 (size: 0xE0)
    FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_6E30E97C41C2D81271BB81A091672D63; // 0x11A8 (size: 0xC0)
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_B0FF96F74AA53B6B85DCD89F6E12AA95; // 0x1268 (size: 0xA0)
    FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_45829DB54D8B890F7EBCB2B47D8C195F; // 0x1308 (size: 0xC8)
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_0D0788534B620EEF31AEA5BCA3044D4C; // 0x13D0 (size: 0xA0)

    void AnimGraph(FPoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_SuperTankW_AnimGraphNode_TransitionResult_7BED895D47526AFB5024B499676C853A();
    void ExecuteUbergraph_ABP_SuperTankW(int32 EntryPoint);
}; // Size: 0x1470

#endif
