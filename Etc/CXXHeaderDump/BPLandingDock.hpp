#ifndef UE4SS_SDK_BPLandingDock_HPP
#define UE4SS_SDK_BPLandingDock_HPP

class ABPLandingDock_C : public AVehicleFactory
{
    class UMultiplexedStaticMeshComponent* MultiplexedStaticMesh;                     // 0x0860 (size: 0x8)
    class UDockComponent* DockingVolume;                                              // 0x0868 (size: 0x8)
    class UStaticMeshComponent* Factory;                                              // 0x0870 (size: 0x8)

}; // Size: 0x878

#endif
