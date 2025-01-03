---@meta

---@class ABPCypressTree01Replacement_C : AClientFoliageReplacement
---@field UberGraphFrame FPointerToUberGraphFrame
---@field Splinter UAudioComponent
---@field NoMansLandTreeFire UParticleSystemComponent
---@field Fire UAudioComponent
---@field NoMansLandSplinter UParticleSystemComponent
---@field NewVar_0 EClientFoliageReplacementState
ABPCypressTree01Replacement_C = {}

---@param State EClientFoliageReplacementState
function ABPCypressTree01Replacement_C:OnStateChanged(State) end
---@param EntryPoint int32
function ABPCypressTree01Replacement_C:ExecuteUbergraph_BPCypressTree01Replacement(EntryPoint) end


