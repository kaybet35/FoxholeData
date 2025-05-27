#ifndef UE4SS_SDK_BPFacilityTransferMaterial_HPP
#define UE4SS_SDK_BPFacilityTransferMaterial_HPP

class ABPFacilityTransferMaterial_C : public AResourceTransferStation
{
    class UBPBuildFootprintBoxComponent_C* BPBuildFootprintBoxComponent;              // 0x0820 (size: 0x8)
    class UBPLoadingAreaBox_C* BPLoadingAreaBox;                                      // 0x0828 (size: 0x8)
    class UMultiplexedStaticMeshComponent* MultiplexedStaticMesh;                     // 0x0830 (size: 0x8)
    class UDecalComponent* FoundationDecal;                                           // 0x0838 (size: 0x8)
    class UInstancedStaticMeshComponent* InstancedStaticMesh3;                        // 0x0840 (size: 0x8)
    class UStaticMeshComponent* MaterialTransferStation;                              // 0x0848 (size: 0x8)
    class UInstancedStaticMeshComponent* InstancedStaticMesh2;                        // 0x0850 (size: 0x8)
    class UInstancedStaticMeshComponent* InstancedStaticMesh1;                        // 0x0858 (size: 0x8)
    class UInstancedStaticMeshComponent* InstancedStaticMesh;                         // 0x0860 (size: 0x8)
    class UItemGroupRenderComponent* ItemGroupRender;                                 // 0x0868 (size: 0x8)

}; // Size: 0x870

#endif
