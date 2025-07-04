---@meta

---@class ABPMediumTank2C_C : ABPMediumTank2BaseC_C
---@field UberGraphFrame FPointerToUberGraphFrame
---@field SpotLightBodyTurret USpotLightComponent
---@field LightBodyTurret UStaticMeshComponent
---@field SpotLightBodyLeft USpotLightComponent
---@field LightBodyLeft UStaticMeshComponent
---@field GunnerSeat2 UVehicleSeatComponent
local ABPMediumTank2C_C = {}

---@param IsOn boolean
function ABPMediumTank2C_C:BPOnVehicleOn(IsOn) end
---@param EntryPoint int32
function ABPMediumTank2C_C:ExecuteUbergraph_BPMediumTank2C(EntryPoint) end


