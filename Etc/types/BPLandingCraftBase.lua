---@meta

---@class ABPLandingCraftBase_C : ALandingCraft
---@field UberGraphFrame FPointerToUberGraphFrame
---@field BoatHull UBoatHullComponent
---@field PassengerSeat1 UVehicleSeatComponent
---@field DriverSeat0 UVehicleSeatComponent
---@field PassengerExit USeatExitComponent
---@field DriverExit0 USeatExitComponent
---@field PassengerTrigger USeatTriggerComponent
---@field DriverTrigger USeatTriggerComponent
---@field BPWaterStencilComponent UBPWaterStencilComponent_C
---@field Idle UAudioComponent
---@field Camera UCameraComponent
ABPLandingCraftBase_C = {}

---@param IsOn boolean
function ABPLandingCraftBase_C:BPOnVehicleOn(IsOn) end
---@param EntryPoint int32
function ABPLandingCraftBase_C:ExecuteUbergraph_BPLandingCraftBase(EntryPoint) end


