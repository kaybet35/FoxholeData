#ifndef UE4SS_SDK_ABP_GunboatC_HPP
#define UE4SS_SDK_ABP_GunboatC_HPP

class UABP_GunboatC_C : public USimVehicleGunnerSupportAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0300 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root_60C9E6E3467E335A7A1B668A354718C1;               // 0x0308 (size: 0x30)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_8925EF7648002957E68C0B926BFB91B9; // 0x0338 (size: 0x78)
    FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_E502949540B541B2C2E7C189CD5E68E2; // 0x03B0 (size: 0xC0)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_85B7797146253D5FEAFDF6B28EAE3E11; // 0x0470 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_9D90F64A4C63C666865B7D83428BEB5B; // 0x0498 (size: 0x28)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_E3354F00455ED307FFEB6A9DA6D3559A; // 0x04C0 (size: 0x78)
    FAnimNode_StateResult AnimGraphNode_StateResult_37D921A9478726289318A09E08CCFCA9; // 0x0538 (size: 0x30)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_CF76C51845C76218AD74028D86D8194A; // 0x0568 (size: 0x78)
    FAnimNode_StateResult AnimGraphNode_StateResult_D721354D46B378311F59D7BDF2A8CBDC; // 0x05E0 (size: 0x30)
    FAnimNode_StateMachine AnimGraphNode_StateMachine_17041FA3458EB5723E45C3B1CC09B577; // 0x0610 (size: 0xB0)
    FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_B5848CB844E832D4010CBF84A018E61A; // 0x06C0 (size: 0xC0)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_A4CDD4B04EDB21099796AD99F68B883C; // 0x0780 (size: 0xE0)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_A181D51C441062E9473F23AC26E6BACA; // 0x0860 (size: 0xE0)
    FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_C897284B4277131540F81093F8A791BC; // 0x0940 (size: 0xC0)
    FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_BA2FA02A4972562E054F9F870B2A20AE; // 0x0A00 (size: 0xC0)
    FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_EF4C747741217061AC9C89B2E8FBA18F; // 0x0AC0 (size: 0x188)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_342D6FDC46B618E62EF35DB94C81CDFB; // 0x0C48 (size: 0xE0)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_1A01A135428A63FB31E27696AD1BF370; // 0x0D28 (size: 0xE0)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_40816A0646139C9C90E21DA2A379F7D2; // 0x0E08 (size: 0xE0)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_BA83FBC4443B8F7C9DECC989DCB656A4; // 0x0EE8 (size: 0xE0)

    void AnimGraph(FPoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_GunboatC_AnimGraphNode_TransitionResult_85B7797146253D5FEAFDF6B28EAE3E11();
    void ExecuteUbergraph_ABP_GunboatC(int32 EntryPoint);
}; // Size: 0xFC8

#endif
