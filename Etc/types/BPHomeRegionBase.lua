---@meta

---@class ABPHomeRegionBase_C : AHomeRegionBase
---@field UberGraphFrame FPointerToUberGraphFrame
---@field SpawnPoint10 USpawnPointComponent
---@field SpawnPoint9 USpawnPointComponent
---@field SpawnPoint8 USpawnPointComponent
---@field SpawnPoint7 USpawnPointComponent
---@field SpawnPoint6 USpawnPointComponent
---@field SpawnPoint5 USpawnPointComponent
---@field SpawnPoint4 USpawnPointComponent
---@field SpawnPoint3 USpawnPointComponent
---@field SpawnPoint2 USpawnPointComponent
---@field SpawnPoint1 USpawnPointComponent
---@field SpawnPoint USpawnPointComponent
---@field Camera UCameraComponent
---@field ParticleSystem UParticleSystemComponent
---@field PointLight UPointLightComponent
---@field Light UStaticMeshComponent
---@field StaticMesh10 UStaticMeshComponent
---@field StaticMesh9 UStaticMeshComponent
---@field StaticMesh8 UStaticMeshComponent
---@field StaticMesh7 UStaticMeshComponent
---@field StaticMesh6 UStaticMeshComponent
---@field StaticMesh5 UStaticMeshComponent
---@field StaticMesh4 UStaticMeshComponent
---@field StaticMesh3 UStaticMeshComponent
---@field StaticMesh2 UStaticMeshComponent
---@field StaticMesh1 UStaticMeshComponent
---@field StaticMesh UStaticMeshComponent
---@field Timeline_2_Intensity_D46A184A499B36ECF5473A8929BF58DD float
---@field Timeline_2__Direction_D46A184A499B36ECF5473A8929BF58DD ETimelineDirection::Type
---@field Timeline_2 UTimelineComponent
---@field Timeline_0_Emissive_2817AA6448D8119AC585B0BC2FC5BCEF float
---@field Timeline_0__Direction_2817AA6448D8119AC585B0BC2FC5BCEF ETimelineDirection::Type
---@field Timeline_0 UTimelineComponent
local ABPHomeRegionBase_C = {}

function ABPHomeRegionBase_C:Timeline_0__FinishedFunc() end
function ABPHomeRegionBase_C:Timeline_0__UpdateFunc() end
function ABPHomeRegionBase_C:Timeline_2__FinishedFunc() end
function ABPHomeRegionBase_C:Timeline_2__UpdateFunc() end
function ABPHomeRegionBase_C:ReceiveBeginPlay() end
function ABPHomeRegionBase_C:UpdateLights() end
---@param EntryPoint int32
function ABPHomeRegionBase_C:ExecuteUbergraph_BPHomeRegionBase(EntryPoint) end


