#ifndef UE4SS_SDK_BPLandingCraftBaseC_HPP
#define UE4SS_SDK_BPLandingCraftBaseC_HPP

class ABPLandingCraftBaseC_C : public ABPLandingCraftBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x1368 (size: 0x8)
    class USpotLightComponent* SpotLight1;                                            // 0x1370 (size: 0x8)
    class UStaticMeshComponent* StaticMesh1;                                          // 0x1378 (size: 0x8)
    class USpotLightComponent* SpotLight;                                             // 0x1380 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x1388 (size: 0x8)

    void BPOnVehicleOn(bool IsOn);
    void ExecuteUbergraph_BPLandingCraftBaseC(int32 EntryPoint);
}; // Size: 0x1390

#endif
