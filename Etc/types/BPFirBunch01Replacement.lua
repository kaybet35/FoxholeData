---@meta

---@class ABPFirBunch01Replacement_C : AClientFoliageReplacement
---@field UberGraphFrame FPointerToUberGraphFrame
---@field Fire UAudioComponent
---@field NoMansLandTreeFire UParticleSystemComponent
---@field NoMansLandSplinter UParticleSystemComponent
---@field Splinter UAudioComponent
---@field NewVar_0 EClientFoliageReplacementState
local ABPFirBunch01Replacement_C = {}

---@param State EClientFoliageReplacementState
function ABPFirBunch01Replacement_C:OnStateChanged(State) end
---@param EntryPoint int32
function ABPFirBunch01Replacement_C:ExecuteUbergraph_BPFirBunch01Replacement(EntryPoint) end


