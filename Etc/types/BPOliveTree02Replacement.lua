---@meta

---@class ABPOliveTree02Replacement_C : AClientFoliageReplacement
---@field UberGraphFrame FPointerToUberGraphFrame
---@field Splinter UAudioComponent
---@field NoMansLandTreeFire UParticleSystemComponent
---@field Fire UAudioComponent
---@field NoMansLandSplinter UParticleSystemComponent
---@field NewVar_0 EClientFoliageReplacementState
ABPOliveTree02Replacement_C = {}

---@param State EClientFoliageReplacementState
function ABPOliveTree02Replacement_C:OnStateChanged(State) end
---@param EntryPoint int32
function ABPOliveTree02Replacement_C:ExecuteUbergraph_BPOliveTree02Replacement(EntryPoint) end


