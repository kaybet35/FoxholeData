---@meta

---@class ABPCypressTree02Replacement_C : AClientFoliageReplacement
---@field UberGraphFrame FPointerToUberGraphFrame
---@field Splinter UAudioComponent
---@field NoMansLandTreeFire UParticleSystemComponent
---@field Fire UAudioComponent
---@field NoMansLandSplinter UParticleSystemComponent
---@field NewVar_0 EClientFoliageReplacementState
ABPCypressTree02Replacement_C = {}

---@param State EClientFoliageReplacementState
function ABPCypressTree02Replacement_C:OnStateChanged(State) end
---@param EntryPoint int32
function ABPCypressTree02Replacement_C:ExecuteUbergraph_BPCypressTree02Replacement(EntryPoint) end


