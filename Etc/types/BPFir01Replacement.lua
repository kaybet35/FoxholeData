---@meta

---@class ABPFir01Replacement_C : AClientFoliageReplacement
---@field UberGraphFrame FPointerToUberGraphFrame
---@field Fire UAudioComponent
---@field NoMansLandTreeFire UParticleSystemComponent
---@field NoMansLandSplinter UParticleSystemComponent
---@field Splinter UAudioComponent
---@field NewVar_0 EClientFoliageReplacementState
local ABPFir01Replacement_C = {}

---@param State EClientFoliageReplacementState
function ABPFir01Replacement_C:OnStateChanged(State) end
---@param EntryPoint int32
function ABPFir01Replacement_C:ExecuteUbergraph_BPFir01Replacement(EntryPoint) end


