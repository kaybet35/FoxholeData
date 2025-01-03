#ifndef UE4SS_SDK_BPMaterialPlatform_HPP
#define UE4SS_SDK_BPMaterialPlatform_HPP

class ABPMaterialPlatform_C : public AMaterialPlatform
{
    class UMultiplexedStaticMeshComponent* MultiplexedStaticMesh;                     // 0x07E0 (size: 0x8)
    class UInstancedStaticMeshComponent* InstancedStaticMesh;                         // 0x07E8 (size: 0x8)
    class UItemGroupRenderComponent* ItemGroupRender;                                 // 0x07F0 (size: 0x8)

}; // Size: 0x7F8

#endif
