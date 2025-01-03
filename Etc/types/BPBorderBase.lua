---@meta

---@class ABPBorderBase_C : ABorderBase
---@field UberGraphFrame FPointerToUberGraphFrame
---@field SpawnPoint15 USpawnPointComponent
---@field SpawnPoint14 USpawnPointComponent
---@field SpawnPoint13 USpawnPointComponent
---@field SpawnPoint12 USpawnPointComponent
---@field SpawnPoint11 USpawnPointComponent
---@field SpawnPoint10 USpawnPointComponent
---@field SpawnPoint9 USpawnPointComponent
---@field SpawnPoint USpawnPointComponent
---@field PointLight UPointLightComponent
---@field PointLight1 UPointLightComponent
---@field Light1 UStaticMeshComponent
---@field Light UStaticMeshComponent
---@field NoBuildVolume UBoxComponent
---@field ViewTargetCamera UCameraComponent
---@field MultiplexedStaticMesh UMultiplexedStaticMeshComponent
---@field Decal UDecalComponent
---@field FlagMesh UStaticMeshComponent
ABPBorderBase_C = {}

---@param VisualTeamId int32
function ABPBorderBase_C:BPSetTeamVisuals(VisualTeamId) end
---@param EntryPoint int32
function ABPBorderBase_C:ExecuteUbergraph_BPBorderBase(EntryPoint) end


