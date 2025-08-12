#ifndef UE4SS_SDK_BPShipyard_HPP
#define UE4SS_SDK_BPShipyard_HPP

class ABPShipyard_C : public AVehicleFactory
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0840 (size: 0x8)
    class UBoxComponent* KillVolume1;                                                 // 0x0848 (size: 0x8)
    class UTemperatureModifierBoxComponent* TemperatureModifierBox1;                  // 0x0850 (size: 0x8)
    class UTemperatureModifierBoxComponent* TemperatureModifierBox;                   // 0x0858 (size: 0x8)
    class UStaticMeshComponent* Flag;                                                 // 0x0860 (size: 0x8)
    class UAudioComponent* Audio;                                                     // 0x0868 (size: 0x8)
    class UPointLightComponent* PointLight4;                                          // 0x0870 (size: 0x8)
    class UMultiplexedStaticMeshComponent* MultiplexedStaticMesh;                     // 0x0878 (size: 0x8)
    class UDockComponent* DockingVolume;                                              // 0x0880 (size: 0x8)
    class UStaticMeshComponent* Factory;                                              // 0x0888 (size: 0x8)

    void BPSetTeamVisuals(const int32 VisualTeamId);
    void ExecuteUbergraph_BPShipyard(int32 EntryPoint);
}; // Size: 0x890

#endif
