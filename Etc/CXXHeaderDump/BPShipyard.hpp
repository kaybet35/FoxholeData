#ifndef UE4SS_SDK_BPShipyard_HPP
#define UE4SS_SDK_BPShipyard_HPP

class ABPShipyard_C : public AVehicleFactory
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0810 (size: 0x8)
    class UBoxComponent* KillVolume1;                                                 // 0x0818 (size: 0x8)
    class UTemperatureModifierBoxComponent* TemperatureModifierBox1;                  // 0x0820 (size: 0x8)
    class UTemperatureModifierBoxComponent* TemperatureModifierBox;                   // 0x0828 (size: 0x8)
    class UStaticMeshComponent* Flag;                                                 // 0x0830 (size: 0x8)
    class UAudioComponent* Audio;                                                     // 0x0838 (size: 0x8)
    class UPointLightComponent* PointLight4;                                          // 0x0840 (size: 0x8)
    class UMultiplexedStaticMeshComponent* MultiplexedStaticMesh;                     // 0x0848 (size: 0x8)
    class UDockComponent* DockingVolume;                                              // 0x0850 (size: 0x8)
    class UStaticMeshComponent* Factory;                                              // 0x0858 (size: 0x8)

    void BPSetTeamVisuals(const int32 VisualTeamId);
    void ExecuteUbergraph_BPShipyard(int32 EntryPoint);
}; // Size: 0x860

#endif
