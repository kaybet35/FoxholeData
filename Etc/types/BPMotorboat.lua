---@meta

---@class ABPMotorboat_C : AMotorboat
---@field UberGraphFrame FPointerToUberGraphFrame
---@field BPWaterStencilComponent UBPWaterStencilComponent_C
---@field FrontSeat UVehicleSeatComponent
---@field CenterSeat UVehicleSeatComponent
---@field DriverSeat0 UVehicleSeatComponent
---@field FrontExit USeatExitComponent
---@field CenterExit USeatExitComponent
---@field DriverExit0 USeatExitComponent
---@field FrontTrigger USeatTriggerComponent
---@field CenterTrigger USeatTriggerComponent
---@field DriverTrigger USeatTriggerComponent
---@field WorkVolume UBoxComponent
---@field idle UAudioComponent
---@field Camera UCameraComponent
local ABPMotorboat_C = {}

---@param IsOn boolean
function ABPMotorboat_C:BPOnVehicleOn(IsOn) end
---@param EntryPoint int32
function ABPMotorboat_C:ExecuteUbergraph_BPMotorboat(EntryPoint) end


