#ifndef UE4SS_SDK_ClothingSystemRuntimeNv_HPP
#define UE4SS_SDK_ClothingSystemRuntimeNv_HPP

#include "ClothingSystemRuntimeNv_enums.hpp"

struct FClothConfig
{
    EClothingWindMethod WindMethod;                                                   // 0x0000 (size: 0x1)
    FClothConstraintSetup VerticalConstraintConfig;                                   // 0x0004 (size: 0x10)
    FClothConstraintSetup HorizontalConstraintConfig;                                 // 0x0014 (size: 0x10)
    FClothConstraintSetup BendConstraintConfig;                                       // 0x0024 (size: 0x10)
    FClothConstraintSetup ShearConstraintConfig;                                      // 0x0034 (size: 0x10)
    float SelfCollisionRadius;                                                        // 0x0044 (size: 0x4)
    float SelfCollisionStiffness;                                                     // 0x0048 (size: 0x4)
    float SelfCollisionCullScale;                                                     // 0x004C (size: 0x4)
    FVector Damping;                                                                  // 0x0050 (size: 0xC)
    float Friction;                                                                   // 0x005C (size: 0x4)
    float WindDragCoefficient;                                                        // 0x0060 (size: 0x4)
    float WindLiftCoefficient;                                                        // 0x0064 (size: 0x4)
    FVector LinearDrag;                                                               // 0x0068 (size: 0xC)
    FVector AngularDrag;                                                              // 0x0074 (size: 0xC)
    FVector LinearInertiaScale;                                                       // 0x0080 (size: 0xC)
    FVector AngularInertiaScale;                                                      // 0x008C (size: 0xC)
    FVector CentrifugalInertiaScale;                                                  // 0x0098 (size: 0xC)
    float SolverFrequency;                                                            // 0x00A4 (size: 0x4)
    float StiffnessFrequency;                                                         // 0x00A8 (size: 0x4)
    float GravityScale;                                                               // 0x00AC (size: 0x4)
    FVector GravityOverride;                                                          // 0x00B0 (size: 0xC)
    bool bUseGravityOverride;                                                         // 0x00BC (size: 0x1)
    float TetherStiffness;                                                            // 0x00C0 (size: 0x4)
    float TetherLimit;                                                                // 0x00C4 (size: 0x4)
    float CollisionThickness;                                                         // 0x00C8 (size: 0x4)
    float AnimDriveSpringStiffness;                                                   // 0x00CC (size: 0x4)
    float AnimDriveDamperStiffness;                                                   // 0x00D0 (size: 0x4)

}; // Size: 0xD4

struct FClothConstraintSetup
{
    float Stiffness;                                                                  // 0x0000 (size: 0x4)
    float StiffnessMultiplier;                                                        // 0x0004 (size: 0x4)
    float StretchLimit;                                                               // 0x0008 (size: 0x4)
    float CompressionLimit;                                                           // 0x000C (size: 0x4)

}; // Size: 0x10

struct FClothLODData
{
    FClothPhysicalMeshData PhysicalMeshData;                                          // 0x0000 (size: 0xA8)
    FClothCollisionData CollisionData;                                                // 0x00A8 (size: 0x40)

}; // Size: 0x108

struct FClothParameterMask_PhysMesh
{
    FName MaskName;                                                                   // 0x0000 (size: 0x8)
    MaskTarget_PhysMesh CurrentTarget;                                                // 0x0008 (size: 0x1)
    float MaxValue;                                                                   // 0x000C (size: 0x4)
    float MinValue;                                                                   // 0x0010 (size: 0x4)
    TArray<float> Values;                                                             // 0x0018 (size: 0x10)
    bool bEnabled;                                                                    // 0x0028 (size: 0x1)

}; // Size: 0x30

struct FClothPhysicalMeshData
{
    TArray<FVector> Vertices;                                                         // 0x0000 (size: 0x10)
    TArray<FVector> Normals;                                                          // 0x0010 (size: 0x10)
    TArray<uint32> Indices;                                                           // 0x0020 (size: 0x10)
    TArray<float> MaxDistances;                                                       // 0x0030 (size: 0x10)
    TArray<float> BackstopDistances;                                                  // 0x0040 (size: 0x10)
    TArray<float> BackstopRadiuses;                                                   // 0x0050 (size: 0x10)
    TArray<float> AnimDriveMultipliers;                                               // 0x0060 (size: 0x10)
    TArray<float> InverseMasses;                                                      // 0x0070 (size: 0x10)
    TArray<FClothVertBoneData> BoneData;                                              // 0x0080 (size: 0x10)
    int32 MaxBoneWeights;                                                             // 0x0090 (size: 0x4)
    int32 NumFixedVerts;                                                              // 0x0094 (size: 0x4)
    TArray<uint32> SelfCollisionIndices;                                              // 0x0098 (size: 0x10)

}; // Size: 0xA8

class UClothConfigNv : public UClothConfigBase
{
    EClothingWindMethod WindMethod;                                                   // 0x0028 (size: 0x1)
    FClothConstraintSetup VerticalConstraintConfig;                                   // 0x002C (size: 0x10)
    FClothConstraintSetup HorizontalConstraintConfig;                                 // 0x003C (size: 0x10)
    FClothConstraintSetup BendConstraintConfig;                                       // 0x004C (size: 0x10)
    FClothConstraintSetup ShearConstraintConfig;                                      // 0x005C (size: 0x10)
    float SelfCollisionRadius;                                                        // 0x006C (size: 0x4)
    float SelfCollisionStiffness;                                                     // 0x0070 (size: 0x4)
    float SelfCollisionCullScale;                                                     // 0x0074 (size: 0x4)
    FVector Damping;                                                                  // 0x0078 (size: 0xC)
    float Friction;                                                                   // 0x0084 (size: 0x4)
    float WindDragCoefficient;                                                        // 0x0088 (size: 0x4)
    float WindLiftCoefficient;                                                        // 0x008C (size: 0x4)
    FVector LinearDrag;                                                               // 0x0090 (size: 0xC)
    FVector AngularDrag;                                                              // 0x009C (size: 0xC)
    FVector LinearInertiaScale;                                                       // 0x00A8 (size: 0xC)
    FVector AngularInertiaScale;                                                      // 0x00B4 (size: 0xC)
    FVector CentrifugalInertiaScale;                                                  // 0x00C0 (size: 0xC)
    float SolverFrequency;                                                            // 0x00CC (size: 0x4)
    float StiffnessFrequency;                                                         // 0x00D0 (size: 0x4)
    float GravityScale;                                                               // 0x00D4 (size: 0x4)
    FVector GravityOverride;                                                          // 0x00D8 (size: 0xC)
    bool bUseGravityOverride;                                                         // 0x00E4 (size: 0x1)
    float TetherStiffness;                                                            // 0x00E8 (size: 0x4)
    float TetherLimit;                                                                // 0x00EC (size: 0x4)
    float CollisionThickness;                                                         // 0x00F0 (size: 0x4)
    float AnimDriveSpringStiffness;                                                   // 0x00F4 (size: 0x4)
    float AnimDriveDamperStiffness;                                                   // 0x00F8 (size: 0x4)

}; // Size: 0x100

class UClothLODDataNv : public UClothLODDataBase
{
}; // Size: 0x90

class UClothPhysicalMeshDataNv : public UClothPhysicalMeshDataBase
{
    TArray<float> MaxDistances;                                                       // 0x00E0 (size: 0x10)
    TArray<float> BackstopDistances;                                                  // 0x00F0 (size: 0x10)
    TArray<float> BackstopRadiuses;                                                   // 0x0100 (size: 0x10)
    TArray<float> AnimDriveMultipliers;                                               // 0x0110 (size: 0x10)

}; // Size: 0x120

class UClothingAssetNv : public UClothingAssetCommon
{
    FClothConfig ClothConfig;                                                         // 0x00A8 (size: 0xD4)
    TArray<FClothLODData> LODData;                                                    // 0x0180 (size: 0x10)

}; // Size: 0x190

class UClothingSimulationFactoryNv : public UClothingSimulationFactory
{
}; // Size: 0x28

class UClothingSimulationInteractorNv : public UClothingSimulationInteractor
{

    void SetAnimDriveSpringStiffness(float InStiffness);
    void SetAnimDriveDamperStiffness(float InStiffness);
    void EnableGravityOverride(const FVector& InVector);
    void DisableGravityOverride();
}; // Size: 0x40

#endif
