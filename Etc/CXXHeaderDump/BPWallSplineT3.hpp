#ifndef UE4SS_SDK_BPWallSplineT3_HPP
#define UE4SS_SDK_BPWallSplineT3_HPP

class ABPWallSplineT3_C : public AConcreteWall
{
    class UStaticMeshComponent* FrontPillar;                                          // 0x0810 (size: 0x8)
    class UStaticMeshComponent* BackPIllar;                                           // 0x0818 (size: 0x8)
    class UTemplateComponent* WallSplineCommon;                                       // 0x0820 (size: 0x8)
    class USceneComponent* WallTarget;                                                // 0x0828 (size: 0x8)
    class USplineConnectorComponent* Wall;                                            // 0x0830 (size: 0x8)

}; // Size: 0x838

#endif
