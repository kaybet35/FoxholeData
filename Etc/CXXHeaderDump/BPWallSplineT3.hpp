#ifndef UE4SS_SDK_BPWallSplineT3_HPP
#define UE4SS_SDK_BPWallSplineT3_HPP

class ABPWallSplineT3_C : public AConcreteWall
{
    class UStaticMeshComponent* FrontPillar;                                          // 0x0830 (size: 0x8)
    class UStaticMeshComponent* BackPIllar;                                           // 0x0838 (size: 0x8)
    class UTemplateComponent* WallSplineCommon;                                       // 0x0840 (size: 0x8)
    class USceneComponent* WallTarget;                                                // 0x0848 (size: 0x8)
    class USplineConnectorComponent* Wall;                                            // 0x0850 (size: 0x8)

}; // Size: 0x858

#endif
