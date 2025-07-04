---@meta

---@class AMediumTankBaseW_C : ABPMediumTankBase_C
---@field UberGraphFrame FPointerToUberGraphFrame
---@field GunnerSeat1 UVehicleSeatComponent
---@field DriverSeat0 UVehicleSeatComponent
---@field ExhaustR UParticleSystemComponent
---@field Gunner2Exit USeatExitComponent
---@field Gunner2Trigger USeatTriggerComponent
---@field GunnerSeat2 UVehicleSeatComponent
local AMediumTankBaseW_C = {}

---@param IsOn boolean
function AMediumTankBaseW_C:BPOnVehicleOn(IsOn) end
---@param EntryPoint int32
function AMediumTankBaseW_C:ExecuteUbergraph_MediumTankBaseW(EntryPoint) end


