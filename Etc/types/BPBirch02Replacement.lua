---@meta

---@class ABPBirch02Replacement_C : AClientFoliageReplacement
---@field UberGraphFrame FPointerToUberGraphFrame
---@field Fire UAudioComponent
---@field Splinter UAudioComponent
---@field NoMansLandSplinter UParticleSystemComponent
---@field NoMansLandTreeFire UParticleSystemComponent
---@field NewVar_0 EClientFoliageReplacementState
ABPBirch02Replacement_C = {}

---@param State EClientFoliageReplacementState
function ABPBirch02Replacement_C:OnStateChanged(State) end
---@param EntryPoint int32
function ABPBirch02Replacement_C:ExecuteUbergraph_BPBirch02Replacement(EntryPoint) end


