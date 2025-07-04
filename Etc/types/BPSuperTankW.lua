---@meta

---@class ABPSuperTankW_C : ABPSuperTankBaseW_C
---@field UberGraphFrame FPointerToUberGraphFrame
---@field SpotLightBodyR USpotLightComponent
---@field SpotLightTurret USpotLightComponent
---@field LightBodyR UStaticMeshComponent
---@field LightTurret UStaticMeshComponent
---@field EngineerExit USeatExitComponent
---@field EngineerTrigger4 USeatTriggerComponent
---@field Gunner3Exit USeatExitComponent
---@field Gunner3Trigger USeatTriggerComponent
---@field EngineerSeat4 UVehicleSeatComponent
---@field GunnerSeat3 UVehicleSeatComponent
---@field CommanderSeat5 UVehicleSeatComponent
local ABPSuperTankW_C = {}

---@param IsOn boolean
function ABPSuperTankW_C:BPOnVehicleOn(IsOn) end
---@param EntryPoint int32
function ABPSuperTankW_C:ExecuteUbergraph_BPSuperTankW(EntryPoint) end


