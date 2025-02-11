#ifndef UE4SS_SDK_BPFacilityTransferMaterial_HPP
#define UE4SS_SDK_BPFacilityTransferMaterial_HPP

class ABPFacilityTransferMaterial_C : public AResourceTransferStation
{
    class UBPBuildFootprintBoxComponent_C* BPBuildFootprintBoxComponent;              // 0x07F0 (size: 0x8)
    class UBPLoadingAreaBox_C* BPLoadingAreaBox;                                      // 0x07F8 (size: 0x8)
    class UMultiplexedStaticMeshComponent* MultiplexedStaticMesh;                     // 0x0800 (size: 0x8)
    class UDecalComponent* FoundationDecal;                                           // 0x0808 (size: 0x8)
    class UInstancedStaticMeshComponent* InstancedStaticMesh3;                        // 0x0810 (size: 0x8)
    class UStaticMeshComponent* MaterialTransferStation;                              // 0x0818 (size: 0x8)
    class UInstancedStaticMeshComponent* InstancedStaticMesh2;                        // 0x0820 (size: 0x8)
    class UInstancedStaticMeshComponent* InstancedStaticMesh1;                        // 0x0828 (size: 0x8)
    class UInstancedStaticMeshComponent* InstancedStaticMesh;                         // 0x0830 (size: 0x8)
    class UItemGroupRenderComponent* ItemGroupRender;                                 // 0x0838 (size: 0x8)

}; // Size: 0x840

#endif
