---@meta

---@class ABPMediumTank2W_C : ABPMediumTank2BaseW_C
---@field UberGraphFrame FPointerToUberGraphFrame
---@field GunnerSeat2 UVehicleSeatComponent
---@field SpotLightTurret USpotLightComponent
---@field LightTurret UStaticMeshComponent
---@field Exhaust2 UParticleSystemComponent
local ABPMediumTank2W_C = {}

---@param IsOn boolean
function ABPMediumTank2W_C:BPOnVehicleOn(IsOn) end
---@param EntryPoint int32
function ABPMediumTank2W_C:ExecuteUbergraph_BPMediumTank2W(EntryPoint) end


