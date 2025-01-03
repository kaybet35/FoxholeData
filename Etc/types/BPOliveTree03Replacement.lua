---@meta

---@class ABPOliveTree03Replacement_C : AClientFoliageReplacement
---@field UberGraphFrame FPointerToUberGraphFrame
---@field Splinter UAudioComponent
---@field NoMansLandTreeFire UParticleSystemComponent
---@field Fire UAudioComponent
---@field NoMansLandSplinter UParticleSystemComponent
---@field NewVar_0 EClientFoliageReplacementState
ABPOliveTree03Replacement_C = {}

---@param State EClientFoliageReplacementState
function ABPOliveTree03Replacement_C:OnStateChanged(State) end
---@param EntryPoint int32
function ABPOliveTree03Replacement_C:ExecuteUbergraph_BPOliveTree03Replacement(EntryPoint) end


