#ifndef UE4SS_SDK_ClothingSystemRuntimeCommon_HPP
#define UE4SS_SDK_ClothingSystemRuntimeCommon_HPP

class UClothLODDataBase : public UObject
{
    class UClothPhysicalMeshDataBase* PhysicalMeshData;                               // 0x0028 (size: 0x8)
    FClothCollisionData CollisionData;                                                // 0x0030 (size: 0x40)

}; // Size: 0x90

class UClothingAssetCommon : public UClothingAssetBase
{
    class UPhysicsAsset* PhysicsAsset;                                                // 0x0048 (size: 0x8)
    class UClothConfigBase* ClothSimConfig;                                           // 0x0050 (size: 0x8)
    TArray<class UClothLODDataBase*> ClothLODData;                                    // 0x0058 (size: 0x10)
    TArray<int32> LodMap;                                                             // 0x0068 (size: 0x10)
    TArray<FName> UsedBoneNames;                                                      // 0x0078 (size: 0x10)
    TArray<int32> UsedBoneIndices;                                                    // 0x0088 (size: 0x10)
    int32 ReferenceBoneIndex;                                                         // 0x0098 (size: 0x4)
    class UClothingAssetCustomData* CustomData;                                       // 0x00A0 (size: 0x8)

}; // Size: 0xA8

class UClothingAssetCustomData : public UObject
{
}; // Size: 0x28

#endif
