#ifndef UE4SS_SDK_BPFacilityTransferCrate_HPP
#define UE4SS_SDK_BPFacilityTransferCrate_HPP

class ABPFacilityTransferCrate_C : public AResourceTransferStation
{
    class UStaticMeshComponent* FacilityTransferCrate;                                // 0x0800 (size: 0x8)
    class UBPBuildFootprintBoxComponent_C* BPBuildFootprintBoxComponent;              // 0x0808 (size: 0x8)
    class UBPLoadingAreaBox_C* BPLoadingAreaBox;                                      // 0x0810 (size: 0x8)
    class UDecalComponent* FoundationDecal;                                           // 0x0818 (size: 0x8)

}; // Size: 0x820

#endif
