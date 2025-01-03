#ifndef UE4SS_SDK_ABP_DestroyerW_HPP
#define UE4SS_SDK_ABP_DestroyerW_HPP

class UABP_DestroyerW_C : public ULargeShipAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0370 (size: 0x8)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_B8BA1EA441196EE368B27AB899958080; // 0x0378 (size: 0xE0)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_250802684794D872EE5B378EF2C2125B; // 0x0458 (size: 0xE0)
    FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_EB72EC604ACF4CF02AEBE997303EC096; // 0x0538 (size: 0xC0)
    FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_198D152B46F910839723D18C8962E758; // 0x05F8 (size: 0xC0)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_E6BC497F479F40C3DDC4D5A4669CBA8D; // 0x06B8 (size: 0xE0)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_CDFB5DE649EC754C6A448FB455E69A1A; // 0x0798 (size: 0xE0)
    FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_D0DF2F7844CC0308562C148B5D72C0CE; // 0x0878 (size: 0xC0)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_36B8560143F6838177BD368345EE0665; // 0x0938 (size: 0xE0)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_3FCAD0D045339E8D1463D8BD5C221674; // 0x0A18 (size: 0xE0)
    FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_A696658843FDC611DF0DADB2AD9C2ADA; // 0x0AF8 (size: 0xC0)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_0F17EE15435DE25F359DA9A0245A94B5; // 0x0BB8 (size: 0xE0)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_A6832E854E6429165C53B18AC8259502; // 0x0C98 (size: 0xE0)
    FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_FCB8574F44DB8D8F85C53EBA1F77CF6A; // 0x0D78 (size: 0xC0)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_FC4F60D14884C73ADA79E7AB02E92601; // 0x0E38 (size: 0xE0)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_8240597A47904B396DE3D7B358DAF0B2; // 0x0F18 (size: 0xE0)
    FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_FBCA7ABD4767F38DB92E4D84E7CBE600; // 0x0FF8 (size: 0xC0)
    FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_42F6BD1942A18BB610D965B15090AD72; // 0x10B8 (size: 0xC0)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_3791F2E8442A4E04083264B72C12E998; // 0x1178 (size: 0xE0)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_F6581CA64DA3B59F7E3169A9091064FD; // 0x1258 (size: 0xE0)
    FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_218B028B45C38CD8C2605BBFF24BE2B2; // 0x1338 (size: 0xC0)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_AA54927F4B0C4A068ECCD8A4F1A5D674; // 0x13F8 (size: 0xE0)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_D446F0964F1F527413A7C79582B07022; // 0x14D8 (size: 0xE0)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_9F861D0742543F53B6F8EE8B5C7D8950; // 0x15B8 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_E973DAA9423B04CD357882AFA99BE088; // 0x15E0 (size: 0x28)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_E5E6130A4AED78C2981CD2A442ED67C2; // 0x1608 (size: 0x78)
    FAnimNode_StateResult AnimGraphNode_StateResult_55D654E3442A398DC037D1B8110A052E; // 0x1680 (size: 0x30)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_331E3A004F1BFC99615582A7BEF4D0BF; // 0x16B0 (size: 0x78)
    FAnimNode_StateResult AnimGraphNode_StateResult_783A8A30401C075050E95AAA68DB3AFA; // 0x1728 (size: 0x30)
    FAnimNode_StateMachine AnimGraphNode_StateMachine_D0AB8D2C47ED84F7D79469BA48B009C6; // 0x1758 (size: 0xB0)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_818554504037B77EB9CAC2AB24F00285; // 0x1808 (size: 0xE0)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_0789DD3841D312A83D79BEB211FB020E; // 0x18E8 (size: 0x78)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_1B0117954A266D88A7E40E8DBEDF3AF8; // 0x1960 (size: 0xE0)
    FAnimNode_Root AnimGraphNode_Root_C86BA8DA4EA0BC6D8CED28A121289CAB;               // 0x1A40 (size: 0x30)

    void AnimGraph(FPoseLink& AnimGraph);
    void ExecuteUbergraph_ABP_DestroyerW(int32 EntryPoint);
}; // Size: 0x1A70

#endif
