#ifndef UE4SS_SDK_BPFacilityTransferCrate_HPP
#define UE4SS_SDK_BPFacilityTransferCrate_HPP

class ABPFacilityTransferCrate_C : public AResourceTransferStation
{
    class UStaticMeshComponent* FacilityTransferCrate;                                // 0x07F0 (size: 0x8)
    class UBPBuildFootprintBoxComponent_C* BPBuildFootprintBoxComponent;              // 0x07F8 (size: 0x8)
    class UBPLoadingAreaBox_C* BPLoadingAreaBox;                                      // 0x0800 (size: 0x8)
    class UDecalComponent* FoundationDecal;                                           // 0x0808 (size: 0x8)

}; // Size: 0x810

#endif
