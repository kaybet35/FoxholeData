---@meta

---@class ABPSmallTrainEngine_C : AEngineRailVehicle
---@field UberGraphFrame FPointerToUberGraphFrame
---@field SparksDrive02 UParticleSystemComponent
---@field SparksDrive01 UParticleSystemComponent
---@field BrakeSparksR UParticleSystemComponent
---@field BrakeSparksL UParticleSystemComponent
---@field Exhaust02 UParticleSystemComponent
---@field Exhaust01 UParticleSystemComponent
---@field Camera UCameraComponent
---@field DriverSeat UVehicleSeatComponent
---@field DriverExit USeatExitComponent
---@field DriverTrigger USeatTriggerComponent
ABPSmallTrainEngine_C = {}

---@param IsOn boolean
function ABPSmallTrainEngine_C:BPOnVehicleOn(IsOn) end
---@param EntryPoint int32
function ABPSmallTrainEngine_C:ExecuteUbergraph_BPSmallTrainEngine(EntryPoint) end


