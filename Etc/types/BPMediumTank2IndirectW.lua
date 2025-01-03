---@meta

---@class ABPMediumTank2IndirectW_C : ABPMediumTank2BaseW_C
---@field UberGraphFrame FPointerToUberGraphFrame
---@field PayloadStaticMesh0 UPayloadStaticMeshComponent
---@field PayloadStaticMesh7 UPayloadStaticMeshComponent
---@field PayloadStaticMesh6 UPayloadStaticMeshComponent
---@field PayloadStaticMesh5 UPayloadStaticMeshComponent
---@field PayloadStaticMesh4 UPayloadStaticMeshComponent
---@field PayloadStaticMesh3 UPayloadStaticMeshComponent
---@field PayloadStaticMesh2 UPayloadStaticMeshComponent
---@field PayloadStaticMesh1 UPayloadStaticMeshComponent
---@field Exhaust2 UParticleSystemComponent
---@field SpotLightTurret USpotLightComponent
---@field LightTurret UStaticMeshComponent
---@field Gunner2Exit USeatExitComponent
---@field Gunner2Trigger USeatTriggerComponent
---@field GunnerSeat2 UVehicleSeatComponent
ABPMediumTank2IndirectW_C = {}

---@param IsOn boolean
function ABPMediumTank2IndirectW_C:BPOnVehicleOn(IsOn) end
---@param EntryPoint int32
function ABPMediumTank2IndirectW_C:ExecuteUbergraph_BPMediumTank2IndirectW(EntryPoint) end


