#ifndef UE4SS_SDK_BPFacilityTransferMaterial_HPP
#define UE4SS_SDK_BPFacilityTransferMaterial_HPP

class ABPFacilityTransferMaterial_C : public AResourceTransferStation
{
    class UBPBuildFootprintBoxComponent_C* BPBuildFootprintBoxComponent;              // 0x0850 (size: 0x8)
    class UBPLoadingAreaBox_C* BPLoadingAreaBox;                                      // 0x0858 (size: 0x8)
    class UMultiplexedStaticMeshComponent* MultiplexedStaticMesh;                     // 0x0860 (size: 0x8)
    class UDecalComponent* FoundationDecal;                                           // 0x0868 (size: 0x8)
    class UInstancedStaticMeshComponent* InstancedStaticMesh3;                        // 0x0870 (size: 0x8)
    class UStaticMeshComponent* MaterialTransferStation;                              // 0x0878 (size: 0x8)
    class UInstancedStaticMeshComponent* InstancedStaticMesh2;                        // 0x0880 (size: 0x8)
    class UInstancedStaticMeshComponent* InstancedStaticMesh1;                        // 0x0888 (size: 0x8)
    class UInstancedStaticMeshComponent* InstancedStaticMesh;                         // 0x0890 (size: 0x8)
    class UItemGroupRenderComponent* ItemGroupRender;                                 // 0x0898 (size: 0x8)

}; // Size: 0x8A0

#endif
