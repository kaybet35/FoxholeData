---@meta

---@class ABPHospital_C : AHospital
---@field UberGraphFrame FPointerToUberGraphFrame
---@field Spawn7 USpawnPointComponent
---@field Spawn6 USpawnPointComponent
---@field Spawn5 USpawnPointComponent
---@field Spawn4 USpawnPointComponent
---@field Spawn3 USpawnPointComponent
---@field Spawn2 USpawnPointComponent
---@field Spawn1 USpawnPointComponent
---@field SpotLight1 USpotLightComponent
---@field SpotLight USpotLightComponent
---@field StaticMesh2 UStaticMeshComponent
---@field StaticMesh8 UStaticMeshComponent
---@field StaticMesh7 UStaticMeshComponent
---@field StaticMesh6 UStaticMeshComponent
---@field StaticMesh5 UStaticMeshComponent
---@field StaticMesh4 UStaticMeshComponent
---@field StaticMesh3 UStaticMeshComponent
---@field Curtains USceneComponent
---@field StaticMesh1 UStaticMeshComponent
---@field StaticMesh UStaticMeshComponent
---@field MultiplexedRoof UMultiplexedStaticMeshComponent
---@field Flag2 UStaticMeshComponent
---@field Flag UStaticMeshComponent
---@field MultiplexedBase UMultiplexedStaticMeshComponent
---@field Bed8 UStaticMeshComponent
---@field Bed7 UStaticMeshComponent
---@field Bed6 UStaticMeshComponent
---@field Bed5 UStaticMeshComponent
---@field Bed4 UStaticMeshComponent
---@field Bed3 UStaticMeshComponent
---@field Bed2 UStaticMeshComponent
---@field Bed1 UStaticMeshComponent
---@field VisibilityToggleArea UVisibilityToggleAreaComponent
---@field HospitalRoof UStaticMeshComponent
---@field Hospital UStaticMeshComponent
ABPHospital_C = {}

---@param VisualTeamId int32
function ABPHospital_C:BPSetTeamVisuals(VisualTeamId) end
---@param EntryPoint int32
function ABPHospital_C:ExecuteUbergraph_BPHospital(EntryPoint) end


