---@meta

---@class AScoutTankWBase_C : AScoutTank
---@field UberGraphFrame FPointerToUberGraphFrame
---@field ExhaustR UParticleSystemComponent
---@field LightTurret UStaticMeshComponent
---@field SpotLightTurret USpotLightComponent
---@field ExhaustL UParticleSystemComponent
---@field LightBody UStaticMeshComponent
---@field SpotLightBody USpotLightComponent
---@field CommanderSeat1 UVehicleSeatComponent
---@field DriverSeat0 UVehicleSeatComponent
---@field CommanderExit USeatExitComponent
---@field DriverExit USeatExitComponent
---@field CommanderTrigger USeatTriggerComponent
---@field DriverTrigger USeatTriggerComponent
---@field Camera UCameraComponent
local AScoutTankWBase_C = {}

---@param IsOn boolean
function AScoutTankWBase_C:BPOnVehicleOn(IsOn) end
---@param EntryPoint int32
function AScoutTankWBase_C:ExecuteUbergraph_ScoutTankWBase(EntryPoint) end


