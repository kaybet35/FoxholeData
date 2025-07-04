---@meta

---@class FClothConfig
---@field WindMethod EClothingWindMethod
---@field VerticalConstraintConfig FClothConstraintSetup
---@field HorizontalConstraintConfig FClothConstraintSetup
---@field BendConstraintConfig FClothConstraintSetup
---@field ShearConstraintConfig FClothConstraintSetup
---@field SelfCollisionRadius float
---@field SelfCollisionStiffness float
---@field SelfCollisionCullScale float
---@field Damping FVector
---@field Friction float
---@field WindDragCoefficient float
---@field WindLiftCoefficient float
---@field LinearDrag FVector
---@field AngularDrag FVector
---@field LinearInertiaScale FVector
---@field AngularInertiaScale FVector
---@field CentrifugalInertiaScale FVector
---@field SolverFrequency float
---@field StiffnessFrequency float
---@field GravityScale float
---@field GravityOverride FVector
---@field bUseGravityOverride boolean
---@field TetherStiffness float
---@field TetherLimit float
---@field CollisionThickness float
---@field AnimDriveSpringStiffness float
---@field AnimDriveDamperStiffness float
local FClothConfig = {}



---@class FClothConstraintSetup
---@field Stiffness float
---@field StiffnessMultiplier float
---@field StretchLimit float
---@field CompressionLimit float
local FClothConstraintSetup = {}



---@class FClothLODData
---@field PhysicalMeshData FClothPhysicalMeshData
---@field CollisionData FClothCollisionData
local FClothLODData = {}



---@class FClothParameterMask_PhysMesh
---@field MaskName FName
---@field CurrentTarget MaskTarget_PhysMesh
---@field MaxValue float
---@field MinValue float
---@field Values TArray<float>
---@field bEnabled boolean
local FClothParameterMask_PhysMesh = {}



---@class FClothPhysicalMeshData
---@field Vertices TArray<FVector>
---@field Normals TArray<FVector>
---@field Indices TArray<uint32>
---@field MaxDistances TArray<float>
---@field BackstopDistances TArray<float>
---@field BackstopRadiuses TArray<float>
---@field AnimDriveMultipliers TArray<float>
---@field InverseMasses TArray<float>
---@field BoneData TArray<FClothVertBoneData>
---@field MaxBoneWeights int32
---@field NumFixedVerts int32
---@field SelfCollisionIndices TArray<uint32>
local FClothPhysicalMeshData = {}



---@class UClothConfigNv : UClothConfigBase
---@field WindMethod EClothingWindMethod
---@field VerticalConstraintConfig FClothConstraintSetup
---@field HorizontalConstraintConfig FClothConstraintSetup
---@field BendConstraintConfig FClothConstraintSetup
---@field ShearConstraintConfig FClothConstraintSetup
---@field SelfCollisionRadius float
---@field SelfCollisionStiffness float
---@field SelfCollisionCullScale float
---@field Damping FVector
---@field Friction float
---@field WindDragCoefficient float
---@field WindLiftCoefficient float
---@field LinearDrag FVector
---@field AngularDrag FVector
---@field LinearInertiaScale FVector
---@field AngularInertiaScale FVector
---@field CentrifugalInertiaScale FVector
---@field SolverFrequency float
---@field StiffnessFrequency float
---@field GravityScale float
---@field GravityOverride FVector
---@field bUseGravityOverride boolean
---@field TetherStiffness float
---@field TetherLimit float
---@field CollisionThickness float
---@field AnimDriveSpringStiffness float
---@field AnimDriveDamperStiffness float
local UClothConfigNv = {}



---@class UClothLODDataNv : UClothLODDataBase
local UClothLODDataNv = {}


---@class UClothPhysicalMeshDataNv : UClothPhysicalMeshDataBase
---@field MaxDistances TArray<float>
---@field BackstopDistances TArray<float>
---@field BackstopRadiuses TArray<float>
---@field AnimDriveMultipliers TArray<float>
local UClothPhysicalMeshDataNv = {}



---@class UClothingAssetNv : UClothingAssetCommon
---@field ClothConfig FClothConfig
---@field LODData TArray<FClothLODData>
local UClothingAssetNv = {}



---@class UClothingSimulationFactoryNv : UClothingSimulationFactory
local UClothingSimulationFactoryNv = {}


---@class UClothingSimulationInteractorNv : UClothingSimulationInteractor
local UClothingSimulationInteractorNv = {}

---@param InStiffness float
function UClothingSimulationInteractorNv:SetAnimDriveSpringStiffness(InStiffness) end
---@param InStiffness float
function UClothingSimulationInteractorNv:SetAnimDriveDamperStiffness(InStiffness) end
---@param InVector FVector
function UClothingSimulationInteractorNv:EnableGravityOverride(InVector) end
function UClothingSimulationInteractorNv:DisableGravityOverride() end


