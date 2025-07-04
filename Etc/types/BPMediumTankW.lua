---@meta

---@class ABPMediumTankW_C : AMediumTankBaseW_C
---@field UberGraphFrame FPointerToUberGraphFrame
---@field CommanderSeat3 UVehicleSeatComponent
---@field SpotLightTurret USpotLightComponent
---@field LightTurret UStaticMeshComponent
---@field chassis_0 USkeletalMeshComponent
local ABPMediumTankW_C = {}

---@param IsOn boolean
function ABPMediumTankW_C:BPOnVehicleOn(IsOn) end
---@param EntryPoint int32
function ABPMediumTankW_C:ExecuteUbergraph_BPMediumTankW(EntryPoint) end


