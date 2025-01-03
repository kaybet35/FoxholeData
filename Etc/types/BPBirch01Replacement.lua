---@meta

---@class ABPBirch01Replacement_C : AClientFoliageReplacement
---@field UberGraphFrame FPointerToUberGraphFrame
---@field Splinter UAudioComponent
---@field NoMansLandTreeFire UParticleSystemComponent
---@field Fire UAudioComponent
---@field NoMansLandSplinter UParticleSystemComponent
---@field NewVar_0 EClientFoliageReplacementState
ABPBirch01Replacement_C = {}

---@param State EClientFoliageReplacementState
function ABPBirch01Replacement_C:OnStateChanged(State) end
---@param EntryPoint int32
function ABPBirch01Replacement_C:ExecuteUbergraph_BPBirch01Replacement(EntryPoint) end


