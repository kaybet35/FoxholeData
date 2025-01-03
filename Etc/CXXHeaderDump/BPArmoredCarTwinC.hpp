#ifndef UE4SS_SDK_BPArmoredCarTwinC_HPP
#define UE4SS_SDK_BPArmoredCarTwinC_HPP

class ABPArmoredCarTwinC_C : public ABPArmoredCarBaseC_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x13A8 (size: 0x8)
    class UPayloadStaticMeshComponent* PayloadStaticMesh1;                            // 0x13B0 (size: 0x8)
    class UPayloadStaticMeshComponent* PayloadStaticMesh0;                            // 0x13B8 (size: 0x8)

    void BPOnVehicleOn(bool IsOn);
    void ExecuteUbergraph_BPArmoredCarTwinC(int32 EntryPoint);
}; // Size: 0x13C0

#endif
