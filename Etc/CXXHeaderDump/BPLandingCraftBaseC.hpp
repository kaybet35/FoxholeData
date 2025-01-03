#ifndef UE4SS_SDK_BPLandingCraftBaseC_HPP
#define UE4SS_SDK_BPLandingCraftBaseC_HPP

class ABPLandingCraftBaseC_C : public ABPLandingCraftBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x1338 (size: 0x8)
    class USpotLightComponent* SpotLight1;                                            // 0x1340 (size: 0x8)
    class UStaticMeshComponent* StaticMesh1;                                          // 0x1348 (size: 0x8)
    class USpotLightComponent* SpotLight;                                             // 0x1350 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x1358 (size: 0x8)

    void BPOnVehicleOn(bool IsOn);
    void ExecuteUbergraph_BPLandingCraftBaseC(int32 EntryPoint);
}; // Size: 0x1360

#endif
