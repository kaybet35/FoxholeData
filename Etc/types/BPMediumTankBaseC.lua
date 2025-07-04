---@meta

---@class ABPMediumTankBaseC_C : ABPMediumTankBase_C
---@field UberGraphFrame FPointerToUberGraphFrame
---@field GunnerSeat1 UVehicleSeatComponent
---@field DriverSeat0 UVehicleSeatComponent
---@field SpotlightTurretL USpotLightComponent
---@field LightTurretL UStaticMeshComponent
---@field ExhaustR UParticleSystemComponent
---@field LightBodyR UStaticMeshComponent
---@field SpotLightBodyR USpotLightComponent
---@field CommanderSeat2 UVehicleSeatComponent
---@field Gunner2Exit USeatExitComponent
---@field Gunner2Trigger USeatTriggerComponent
local ABPMediumTankBaseC_C = {}

---@param IsOn boolean
function ABPMediumTankBaseC_C:BPOnVehicleOn(IsOn) end
---@param EntryPoint int32
function ABPMediumTankBaseC_C:ExecuteUbergraph_BPMediumTankBaseC(EntryPoint) end


