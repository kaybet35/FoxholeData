#ifndef UE4SS_SDK_BPMaterialPlatform_HPP
#define UE4SS_SDK_BPMaterialPlatform_HPP

class ABPMaterialPlatform_C : public AMaterialPlatform
{
    class UMultiplexedStaticMeshComponent* MultiplexedStaticMesh;                     // 0x0840 (size: 0x8)
    class UInstancedStaticMeshComponent* InstancedStaticMesh;                         // 0x0848 (size: 0x8)
    class UItemGroupRenderComponent* ItemGroupRender;                                 // 0x0850 (size: 0x8)

}; // Size: 0x858

#endif
