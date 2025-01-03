#ifndef UE4SS_SDK_ABP_EmplacedIndirectC_HPP
#define UE4SS_SDK_ABP_EmplacedIndirectC_HPP

class UABP_EmplacedIndirectC_C : public UEmplacedWeaponAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0280 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root_3FB6CF8A48DE169CACADC79F07CA1384;               // 0x0288 (size: 0x30)
    FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_86F20E5C49711FEAA38A0A91E0307CCF; // 0x02B8 (size: 0xC0)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_704DD34E47B4AF237C9E458962DCA77C; // 0x0378 (size: 0xE0)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_B416A5AA467255DF05B63AAED092C40B; // 0x0458 (size: 0xE0)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_08504D17491EC4D8BF6170B20C1FF167; // 0x0538 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_41D25B0D4E14E501B8A0CAA8A9DE321A; // 0x0560 (size: 0x28)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_10EFA39049AE7FF71C2198947AF96259; // 0x0588 (size: 0x78)
    FAnimNode_StateResult AnimGraphNode_StateResult_1D8B18F04F8E4A182D718A98B08B67F9; // 0x0600 (size: 0x30)
    FAnimNode_StateResult AnimGraphNode_StateResult_6757259942549ECD5E7BD7AF623EF1DB; // 0x0630 (size: 0x30)
    FAnimNode_StateMachine AnimGraphNode_StateMachine_C6113066481064FF58DFB09A3200595C; // 0x0660 (size: 0xB0)
    float EmplacedIndirectC;                                                          // 0x0710 (size: 0x4)

    void AnimGraph(FPoseLink& AnimGraph);
    void ExecuteUbergraph_ABP_EmplacedIndirectC(int32 EntryPoint);
}; // Size: 0x714

#endif
