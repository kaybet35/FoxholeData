---@meta

---@class ABPBirch03Replacement_C : AClientFoliageReplacement
---@field UberGraphFrame FPointerToUberGraphFrame
---@field NoMansLandSplinter UParticleSystemComponent
---@field Fire UAudioComponent
---@field Splinter UAudioComponent
---@field NoMansLandTreeFire UParticleSystemComponent
---@field NewVar_0 EClientFoliageReplacementState
ABPBirch03Replacement_C = {}

---@param State EClientFoliageReplacementState
function ABPBirch03Replacement_C:OnStateChanged(State) end
---@param EntryPoint int32
function ABPBirch03Replacement_C:ExecuteUbergraph_BPBirch03Replacement(EntryPoint) end


