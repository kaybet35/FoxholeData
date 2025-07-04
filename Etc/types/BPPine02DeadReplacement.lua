---@meta

---@class ABPPine02DeadReplacement_C : AClientFoliageReplacement
---@field UberGraphFrame FPointerToUberGraphFrame
---@field Fire UAudioComponent
---@field NoMansLandTreeFire UParticleSystemComponent
---@field NoMansLandSplinter UParticleSystemComponent
---@field Splinter UAudioComponent
---@field NewVar_0 EClientFoliageReplacementState
local ABPPine02DeadReplacement_C = {}

---@param State EClientFoliageReplacementState
function ABPPine02DeadReplacement_C:OnStateChanged(State) end
---@param EntryPoint int32
function ABPPine02DeadReplacement_C:ExecuteUbergraph_BPPine02DeadReplacement(EntryPoint) end


