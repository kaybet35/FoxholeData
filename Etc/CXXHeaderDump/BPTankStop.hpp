#ifndef UE4SS_SDK_BPTankStop_HPP
#define UE4SS_SDK_BPTankStop_HPP

class ABPTankStop_C : public ABarbedWire
{
    class UBuildSocketComponent* LandscapeCheckSocket2;                               // 0x0820 (size: 0x8)
    class UBuildSocketComponent* LandscapeCheckSocket1;                               // 0x0828 (size: 0x8)
    class UBuildSocketComponent* LandscapeCheckSocket;                                // 0x0830 (size: 0x8)
    class UBoxComponent* CollisionBox;                                                // 0x0838 (size: 0x8)
    class UMultiplexedStaticMeshComponent* MultiplexedStaticMesh;                     // 0x0840 (size: 0x8)
    class UStaticMeshComponent* TankStopMesh;                                         // 0x0848 (size: 0x8)

}; // Size: 0x850

#endif
