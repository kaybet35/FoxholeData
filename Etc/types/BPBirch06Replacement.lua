---@meta

---@class ABPBirch06Replacement_C : AClientFoliageReplacement
---@field UberGraphFrame FPointerToUberGraphFrame
---@field Fire UAudioComponent
---@field NoMansLandTreeFire UParticleSystemComponent
---@field NoMansLandSplinter UParticleSystemComponent
---@field Splinter UAudioComponent
---@field NewVar_0 EClientFoliageReplacementState
local ABPBirch06Replacement_C = {}

---@param State EClientFoliageReplacementState
function ABPBirch06Replacement_C:OnStateChanged(State) end
---@param EntryPoint int32
function ABPBirch06Replacement_C:ExecuteUbergraph_BPBirch06Replacement(EntryPoint) end


