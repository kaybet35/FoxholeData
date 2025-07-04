---@meta

---@class ABPMediumTankBase_C : ABattleTank
---@field UberGraphFrame FPointerToUberGraphFrame
---@field Exhaust UParticleSystemComponent
---@field SpotLightBody USpotLightComponent
---@field LightBody UStaticMeshComponent
---@field CommanderExit USeatExitComponent
---@field GunnerExit USeatExitComponent
---@field DriverExit USeatExitComponent
---@field CommanderTrigger USeatTriggerComponent
---@field GunnerTrigger USeatTriggerComponent
---@field DriverTrigger USeatTriggerComponent
---@field Camera UCameraComponent
local ABPMediumTankBase_C = {}

---@param IsOn boolean
function ABPMediumTankBase_C:BPOnVehicleOn(IsOn) end
---@param EntryPoint int32
function ABPMediumTankBase_C:ExecuteUbergraph_BPMediumTankBase(EntryPoint) end


