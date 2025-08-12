#ifndef UE4SS_SDK_BPMaterialPlatform_HPP
#define UE4SS_SDK_BPMaterialPlatform_HPP

class ABPMaterialPlatform_C : public AMaterialPlatform
{
    class UMultiplexedStaticMeshComponent* MultiplexedStaticMesh;                     // 0x0820 (size: 0x8)
    class UInstancedStaticMeshComponent* InstancedStaticMesh;                         // 0x0828 (size: 0x8)
    class UItemGroupRenderComponent* ItemGroupRender;                                 // 0x0830 (size: 0x8)

}; // Size: 0x838

#endif
