#ifndef UE4SS_SDK_BPFacilityTransferLiquid_HPP
#define UE4SS_SDK_BPFacilityTransferLiquid_HPP

class ABPFacilityTransferLiquid_C : public ALiquidTransferStation
{
    class UBPBuildFootprintBoxComponent_C* BPBuildFootprintBoxComponent;              // 0x0880 (size: 0x8)
    class UBPLoadingAreaBox_C* BPLoadingAreaBox;                                      // 0x0888 (size: 0x8)
    class UMultiplexedStaticMeshComponent* MultiplexedStaticMesh;                     // 0x0890 (size: 0x8)
    class UDecalComponent* OutputDecal0;                                              // 0x0898 (size: 0x8)
    class UDecalComponent* InputDecal0;                                               // 0x08A0 (size: 0x8)
    class UBPStructurePipelineOutput_C* PipeOutput0;                                  // 0x08A8 (size: 0x8)
    class UDecalComponent* FoundationDecal;                                           // 0x08B0 (size: 0x8)
    class UTemplateComponent* FuelLightTemplate;                                      // 0x08B8 (size: 0x8)
    class UBPStructurePipelineInput_C* PipeInput0;                                    // 0x08C0 (size: 0x8)
    class UStaticMeshComponent* MainMesh;                                             // 0x08C8 (size: 0x8)

}; // Size: 0x8D0

#endif
