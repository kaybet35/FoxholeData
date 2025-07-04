---@meta

---@class ABPMediumTank2MultiW_C : ABPMediumTank2BaseW_C
---@field UberGraphFrame FPointerToUberGraphFrame
---@field SpotLightTurret_L USpotLightComponent
---@field SpotLightTurret_R USpotLightComponent
---@field TurretLight_L UStaticMeshComponent
---@field TurretLight_R UStaticMeshComponent
---@field Exhaust2 UParticleSystemComponent
---@field GunnerSeat2 UVehicleSeatComponent
local ABPMediumTank2MultiW_C = {}

---@param IsOn boolean
function ABPMediumTank2MultiW_C:BPOnVehicleOn(IsOn) end
---@param EntryPoint int32
function ABPMediumTank2MultiW_C:ExecuteUbergraph_BPMediumTank2MultiW(EntryPoint) end


