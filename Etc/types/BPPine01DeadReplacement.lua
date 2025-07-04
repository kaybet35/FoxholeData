---@meta

---@class ABPPine01DeadReplacement_C : AClientFoliageReplacement
---@field UberGraphFrame FPointerToUberGraphFrame
---@field Fire UAudioComponent
---@field NoMansLandTreeFire UParticleSystemComponent
---@field NoMansLandSplinter UParticleSystemComponent
---@field Splinter UAudioComponent
---@field NewVar_0 EClientFoliageReplacementState
local ABPPine01DeadReplacement_C = {}

---@param State EClientFoliageReplacementState
function ABPPine01DeadReplacement_C:OnStateChanged(State) end
---@param EntryPoint int32
function ABPPine01DeadReplacement_C:ExecuteUbergraph_BPPine01DeadReplacement(EntryPoint) end


