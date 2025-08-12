#ifndef UE4SS_SDK_BPLandingCraftBaseW_HPP
#define UE4SS_SDK_BPLandingCraftBaseW_HPP

class ABPLandingCraftBaseW_C : public ABPLandingCraftBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x1368 (size: 0x8)
    class USpotLightComponent* SpotLight;                                             // 0x1370 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x1378 (size: 0x8)

    void BPOnVehicleOn(bool IsOn);
    void ExecuteUbergraph_BPLandingCraftBaseW(int32 EntryPoint);
}; // Size: 0x1380

#endif
