#ifndef UE4SS_SDK_BPFacilityTransferLiquid_HPP
#define UE4SS_SDK_BPFacilityTransferLiquid_HPP

class ABPFacilityTransferLiquid_C : public ALiquidTransferStation
{
    class UBPBuildFootprintBoxComponent_C* BPBuildFootprintBoxComponent;              // 0x0810 (size: 0x8)
    class UBPLoadingAreaBox_C* BPLoadingAreaBox;                                      // 0x0818 (size: 0x8)
    class UMultiplexedStaticMeshComponent* MultiplexedStaticMesh;                     // 0x0820 (size: 0x8)
    class UDecalComponent* OutputDecal0;                                              // 0x0828 (size: 0x8)
    class UDecalComponent* InputDecal0;                                               // 0x0830 (size: 0x8)
    class UBPStructurePipelineOutput_C* PipeOutput0;                                  // 0x0838 (size: 0x8)
    class UDecalComponent* FoundationDecal;                                           // 0x0840 (size: 0x8)
    class UTemplateComponent* BPFuelLightTemplate;                                    // 0x0848 (size: 0x8)
    class UBPStructurePipelineInput_C* PipeInput0;                                    // 0x0850 (size: 0x8)
    class UStaticMeshComponent* MainMesh;                                             // 0x0858 (size: 0x8)

}; // Size: 0x860

#endif
