#ifndef UE4SS_SDK_BPTankStop_HPP
#define UE4SS_SDK_BPTankStop_HPP

class ABPTankStop_C : public ABarbedWire
{
    class UBuildSocketComponent* LandscapeCheckSocket2;                               // 0x07D0 (size: 0x8)
    class UBuildSocketComponent* LandscapeCheckSocket1;                               // 0x07D8 (size: 0x8)
    class UBuildSocketComponent* LandscapeCheckSocket;                                // 0x07E0 (size: 0x8)
    class UBoxComponent* CollisionBox;                                                // 0x07E8 (size: 0x8)
    class UMultiplexedStaticMeshComponent* MultiplexedStaticMesh;                     // 0x07F0 (size: 0x8)
    class UStaticMeshComponent* TankStopMesh;                                         // 0x07F8 (size: 0x8)

}; // Size: 0x800

#endif
