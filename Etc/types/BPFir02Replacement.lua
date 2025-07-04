---@meta

---@class ABPFir02Replacement_C : AClientFoliageReplacement
---@field UberGraphFrame FPointerToUberGraphFrame
---@field Fire UAudioComponent
---@field NoMansLandTreeFire UParticleSystemComponent
---@field NoMansLandSplinter UParticleSystemComponent
---@field Splinter UAudioComponent
---@field NewVar_0 EClientFoliageReplacementState
local ABPFir02Replacement_C = {}

---@param State EClientFoliageReplacementState
function ABPFir02Replacement_C:OnStateChanged(State) end
---@param EntryPoint int32
function ABPFir02Replacement_C:ExecuteUbergraph_BPFir02Replacement(EntryPoint) end


