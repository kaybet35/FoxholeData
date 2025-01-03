---@meta

---@class ABPSuperTankBase_C : ABattleTank
---@field UberGraphFrame FPointerToUberGraphFrame
---@field Exhaust UParticleSystemComponent
---@field GunnerSeat1 UVehicleSeatComponent
---@field DriverSeat0 UVehicleSeatComponent
---@field CommanderExit USeatExitComponent
---@field GunnerExit USeatExitComponent
---@field DriverExit USeatExitComponent
---@field CommanderTrigger USeatTriggerComponent
---@field GunnerTrigger USeatTriggerComponent
---@field DriverTrigger USeatTriggerComponent
---@field Camera UCameraComponent
ABPSuperTankBase_C = {}

---@param IsOn boolean
function ABPSuperTankBase_C:BPOnVehicleOn(IsOn) end
---@param EntryPoint int32
function ABPSuperTankBase_C:ExecuteUbergraph_BPSuperTankBase(EntryPoint) end


