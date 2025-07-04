---@meta

---@class ABPDestroyerTankBaseW_C : ABattleTank
---@field UberGraphFrame FPointerToUberGraphFrame
---@field Camera UCameraComponent
---@field CommanderSeat2 UVehicleSeatComponent
---@field CommanderExit USeatExitComponent
---@field GunnerExit USeatExitComponent
---@field DriverExit USeatExitComponent
---@field CommanderTrigger USeatTriggerComponent
---@field GunnerTrigger USeatTriggerComponent
---@field DriverTrigger USeatTriggerComponent
---@field Exhaust UParticleSystemComponent
---@field SpotLightTurret USpotLightComponent
---@field LightTurret UStaticMeshComponent
---@field GunnerSeat1 UVehicleSeatComponent
---@field DriverSeat0 UVehicleSeatComponent
local ABPDestroyerTankBaseW_C = {}

---@param IsOn boolean
function ABPDestroyerTankBaseW_C:BPOnVehicleOn(IsOn) end
---@param EntryPoint int32
function ABPDestroyerTankBaseW_C:ExecuteUbergraph_BPDestroyerTankBaseW(EntryPoint) end


