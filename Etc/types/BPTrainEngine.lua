---@meta

---@class ABPTrainEngine_C : AEngineRailVehicle
---@field UberGraphFrame FPointerToUberGraphFrame
---@field FiremanTrigger USeatTriggerComponent
---@field FiremanExit USeatExitComponent
---@field FiremanSeat UVehicleSeatComponent
---@field Exhaust03 UParticleSystemComponent
---@field Exhaust02 UParticleSystemComponent
---@field SparksDrive04 UParticleSystemComponent
---@field SparksDrive03 UParticleSystemComponent
---@field SparksDrive02 UParticleSystemComponent
---@field SparksDrive01 UParticleSystemComponent
---@field BrakeSparksL UParticleSystemComponent
---@field BrakeSparksR UParticleSystemComponent
---@field Exhaust01 UParticleSystemComponent
---@field Camera UCameraComponent
---@field DriverSeat UVehicleSeatComponent
---@field DriverExit USeatExitComponent
---@field DriverTrigger USeatTriggerComponent
ABPTrainEngine_C = {}

---@param IsOn boolean
function ABPTrainEngine_C:BPOnVehicleOn(IsOn) end
---@param EntryPoint int32
function ABPTrainEngine_C:ExecuteUbergraph_BPTrainEngine(EntryPoint) end


