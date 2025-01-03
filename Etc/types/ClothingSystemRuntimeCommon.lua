---@meta

---@class UClothLODDataBase : UObject
---@field PhysicalMeshData UClothPhysicalMeshDataBase
---@field CollisionData FClothCollisionData
UClothLODDataBase = {}



---@class UClothingAssetCommon : UClothingAssetBase
---@field PhysicsAsset UPhysicsAsset
---@field ClothSimConfig UClothConfigBase
---@field ClothLODData TArray<UClothLODDataBase>
---@field LodMap TArray<int32>
---@field UsedBoneNames TArray<FName>
---@field UsedBoneIndices TArray<int32>
---@field ReferenceBoneIndex int32
---@field CustomData UClothingAssetCustomData
UClothingAssetCommon = {}



---@class UClothingAssetCustomData : UObject
UClothingAssetCustomData = {}


