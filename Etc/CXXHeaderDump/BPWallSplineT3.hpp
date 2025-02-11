#ifndef UE4SS_SDK_BPWallSplineT3_HPP
#define UE4SS_SDK_BPWallSplineT3_HPP

class ABPWallSplineT3_C : public AConcreteWall
{
    class UStaticMeshComponent* FrontPillar;                                          // 0x07D0 (size: 0x8)
    class UStaticMeshComponent* BackPIllar;                                           // 0x07D8 (size: 0x8)
    class UTemplateComponent* WallSplineCommon;                                       // 0x07E0 (size: 0x8)
    class USceneComponent* WallTarget;                                                // 0x07E8 (size: 0x8)
    class USplineConnectorComponent* Wall;                                            // 0x07F0 (size: 0x8)

}; // Size: 0x7F8

#endif
