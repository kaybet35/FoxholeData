#ifndef UE4SS_SDK_BPTankStopSplineT3_HPP
#define UE4SS_SDK_BPTankStopSplineT3_HPP

class ABPTankStopSplineT3_C : public AConcreteWall
{
    class ULocationMultiplexedMeshComponent* LocationMultiplexedMesh;                 // 0x0800 (size: 0x8)
    class UTemplateComponent* TankStopSplineCommon;                                   // 0x0808 (size: 0x8)
    class USplineConnectorComponent* SplineConnector;                                 // 0x0810 (size: 0x8)

}; // Size: 0x818

#endif
