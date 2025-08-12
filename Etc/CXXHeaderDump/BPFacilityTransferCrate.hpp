#ifndef UE4SS_SDK_BPFacilityTransferCrate_HPP
#define UE4SS_SDK_BPFacilityTransferCrate_HPP

class ABPFacilityTransferCrate_C : public AResourceTransferStation
{
    class UStaticMeshComponent* FacilityTransferCrate;                                // 0x0850 (size: 0x8)
    class UBPBuildFootprintBoxComponent_C* BPBuildFootprintBoxComponent;              // 0x0858 (size: 0x8)
    class UBPLoadingAreaBox_C* BPLoadingAreaBox;                                      // 0x0860 (size: 0x8)
    class UDecalComponent* FoundationDecal;                                           // 0x0868 (size: 0x8)

}; // Size: 0x870

#endif
