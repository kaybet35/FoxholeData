---@meta

---@class FClothCollisionData
---@field Spheres TArray<FClothCollisionPrim_Sphere>
---@field SphereConnections TArray<FClothCollisionPrim_SphereConnection>
---@field Convexes TArray<FClothCollisionPrim_Convex>
---@field Boxes TArray<FClothCollisionPrim_Box>
local FClothCollisionData = {}



---@class FClothCollisionPrim_Box
---@field BoneIndex int32
---@field LocalMin FVector
---@field LocalMax FVector
local FClothCollisionPrim_Box = {}



---@class FClothCollisionPrim_Convex
---@field Planes TArray<FPlane>
---@field BoneIndex int32
local FClothCollisionPrim_Convex = {}



---@class FClothCollisionPrim_Sphere
---@field BoneIndex int32
---@field Radius float
---@field LocalPosition FVector
local FClothCollisionPrim_Sphere = {}



---@class FClothCollisionPrim_SphereConnection
---@field SphereIndices int32
local FClothCollisionPrim_SphereConnection = {}



---@class FClothVertBoneData
---@field NumInfluences int32
---@field BoneIndices uint16
---@field BoneWeights float
local FClothVertBoneData = {}



---@class FPointWeightMap
---@field Name FName
---@field CurrentTarget uint8
---@field Values TArray<float>
---@field bEnabled boolean
local FPointWeightMap = {}



---@class UClothConfigBase : UObject
local UClothConfigBase = {}


---@class UClothPhysicalMeshDataBase : UObject
---@field Vertices TArray<FVector>
---@field Normals TArray<FVector>
---@field Indices TArray<uint32>
---@field InverseMasses TArray<float>
---@field BoneData TArray<FClothVertBoneData>
---@field NumFixedVerts int32
---@field MaxBoneWeights int32
---@field SelfCollisionIndices TArray<uint32>
local UClothPhysicalMeshDataBase = {}



---@class UClothingAssetBase : UObject
---@field ImportedFilePath FString
---@field AssetGuid FGuid
local UClothingAssetBase = {}



---@class UClothingSimulationFactory : UObject
local UClothingSimulationFactory = {}


---@class UClothingSimulationInteractor : UObject
local UClothingSimulationInteractor = {}

function UClothingSimulationInteractor:PhysicsAssetUpdated() end
function UClothingSimulationInteractor:ClothConfigUpdated() end


