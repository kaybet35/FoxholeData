#ifndef UE4SS_SDK_BPFacilityTransferLiquid_HPP
#define UE4SS_SDK_BPFacilityTransferLiquid_HPP

class ABPFacilityTransferLiquid_C : public ALiquidTransferStation
{
    class UBPBuildFootprintBoxComponent_C* BPBuildFootprintBoxComponent;              // 0x0850 (size: 0x8)
    class UBPLoadingAreaBox_C* BPLoadingAreaBox;                                      // 0x0858 (size: 0x8)
    class UMultiplexedStaticMeshComponent* MultiplexedStaticMesh;                     // 0x0860 (size: 0x8)
    class UDecalComponent* OutputDecal0;                                              // 0x0868 (size: 0x8)
    class UDecalComponent* InputDecal0;                                               // 0x0870 (size: 0x8)
    class UBPStructurePipelineOutput_C* PipeOutput0;                                  // 0x0878 (size: 0x8)
    class UDecalComponent* FoundationDecal;                                           // 0x0880 (size: 0x8)
    class UTemplateComponent* BPFuelLightTemplate;                                    // 0x0888 (size: 0x8)
    class UBPStructurePipelineInput_C* PipeInput0;                                    // 0x0890 (size: 0x8)
    class UStaticMeshComponent* MainMesh;                                             // 0x0898 (size: 0x8)

}; // Size: 0x8A0

#endif
