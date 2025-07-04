---@meta

---@class ABPTanketteC_C : ABPTanketteBaseC_C
---@field UberGraphFrame FPointerToUberGraphFrame
---@field GunnerExit USeatExitComponent
---@field GunnerTrigger USeatTriggerComponent
---@field GunnerSeat1 UVehicleSeatComponent
---@field PassengerExit USeatExitComponent
---@field PassengerTrigger USeatTriggerComponent
---@field PassengerSeat3 UVehicleSeatComponent
---@field PassengerSeat2 UVehicleSeatComponent
local ABPTanketteC_C = {}

---@param IsOn boolean
function ABPTanketteC_C:BPOnVehicleOn(IsOn) end
---@param EntryPoint int32
function ABPTanketteC_C:ExecuteUbergraph_BPTanketteC(EntryPoint) end


