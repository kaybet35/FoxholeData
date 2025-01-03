#ifndef UE4SS_SDK_BPFacilitySiloOil_HPP
#define UE4SS_SDK_BPFacilitySiloOil_HPP

class ABPFacilitySiloOil_C : public AFuelSilo
{
    class UBPBuildFootprintBoxComponent_C* BPBuildFootprintBoxComponent;              // 0x0820 (size: 0x8)
    class UMultiplexedStaticMeshComponent* MultiplexedStaticMesh;                     // 0x0828 (size: 0x8)
    class UTemplateComponent* BPFuelLightTemplate;                                    // 0x0830 (size: 0x8)
    class UDecalComponent* OutputDecal0;                                              // 0x0838 (size: 0x8)
    class UDecalComponent* InputDecal0;                                               // 0x0840 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x0848 (size: 0x8)

}; // Size: 0x850

#endif
