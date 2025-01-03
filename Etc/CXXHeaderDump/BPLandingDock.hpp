#ifndef UE4SS_SDK_BPLandingDock_HPP
#define UE4SS_SDK_BPLandingDock_HPP

class ABPLandingDock_C : public AVehicleFactory
{
    class UMultiplexedStaticMeshComponent* MultiplexedStaticMesh;                     // 0x0810 (size: 0x8)
    class UDockComponent* DockingVolume;                                              // 0x0818 (size: 0x8)
    class UStaticMeshComponent* Factory;                                              // 0x0820 (size: 0x8)

}; // Size: 0x828

#endif
