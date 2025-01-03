#ifndef UE4SS_SDK_ClothingSystemRuntimeInterface_HPP
#define UE4SS_SDK_ClothingSystemRuntimeInterface_HPP

struct FClothCollisionData
{
    TArray<FClothCollisionPrim_Sphere> Spheres;                                       // 0x0000 (size: 0x10)
    TArray<FClothCollisionPrim_SphereConnection> SphereConnections;                   // 0x0010 (size: 0x10)
    TArray<FClothCollisionPrim_Convex> Convexes;                                      // 0x0020 (size: 0x10)
    TArray<FClothCollisionPrim_Box> Boxes;                                            // 0x0030 (size: 0x10)

}; // Size: 0x40

struct FClothCollisionPrim_Box
{
    int32 BoneIndex;                                                                  // 0x0000 (size: 0x4)
    FVector LocalMin;                                                                 // 0x0004 (size: 0xC)
    FVector LocalMax;                                                                 // 0x0010 (size: 0xC)

}; // Size: 0x1C

struct FClothCollisionPrim_Convex
{
    TArray<FPlane> Planes;                                                            // 0x0000 (size: 0x10)
    int32 BoneIndex;                                                                  // 0x0010 (size: 0x4)

}; // Size: 0x18

struct FClothCollisionPrim_Sphere
{
    int32 BoneIndex;                                                                  // 0x0000 (size: 0x4)
    float Radius;                                                                     // 0x0004 (size: 0x4)
    FVector LocalPosition;                                                            // 0x0008 (size: 0xC)

}; // Size: 0x14

struct FClothCollisionPrim_SphereConnection
{
    int32 SphereIndices;                                                              // 0x0000 (size: 0x8)

}; // Size: 0x8

struct FClothVertBoneData
{
    int32 NumInfluences;                                                              // 0x0000 (size: 0x4)
    uint16 BoneIndices;                                                               // 0x0004 (size: 0x10)
    float BoneWeights;                                                                // 0x0014 (size: 0x20)

}; // Size: 0x34

struct FPointWeightMap
{
    FName Name;                                                                       // 0x0000 (size: 0x8)
    uint8 CurrentTarget;                                                              // 0x0008 (size: 0x1)
    TArray<float> Values;                                                             // 0x0010 (size: 0x10)
    bool bEnabled;                                                                    // 0x0020 (size: 0x1)

}; // Size: 0x28

class UClothConfigBase : public UObject
{
}; // Size: 0x28

class UClothPhysicalMeshDataBase : public UObject
{
    TArray<FVector> Vertices;                                                         // 0x0028 (size: 0x10)
    TArray<FVector> Normals;                                                          // 0x0038 (size: 0x10)
    TArray<uint32> Indices;                                                           // 0x0048 (size: 0x10)
    TArray<float> InverseMasses;                                                      // 0x0058 (size: 0x10)
    TArray<FClothVertBoneData> BoneData;                                              // 0x0068 (size: 0x10)
    int32 NumFixedVerts;                                                              // 0x0078 (size: 0x4)
    int32 MaxBoneWeights;                                                             // 0x007C (size: 0x4)
    TArray<uint32> SelfCollisionIndices;                                              // 0x0080 (size: 0x10)

}; // Size: 0xE0

class UClothingAssetBase : public UObject
{
    FString ImportedFilePath;                                                         // 0x0028 (size: 0x10)
    FGuid AssetGuid;                                                                  // 0x0038 (size: 0x10)

}; // Size: 0x48

class UClothingSimulationFactory : public UObject
{
}; // Size: 0x28

class UClothingSimulationInteractor : public UObject
{

    void PhysicsAssetUpdated();
    void ClothConfigUpdated();
}; // Size: 0x30

#endif
