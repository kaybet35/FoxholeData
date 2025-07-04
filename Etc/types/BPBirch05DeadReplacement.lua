---@meta

---@class ABPBirch05DeadReplacement_C : AClientFoliageReplacement
---@field UberGraphFrame FPointerToUberGraphFrame
---@field Fire UAudioComponent
---@field NoMansLandTreeFire UParticleSystemComponent
---@field NoMansLandSplinter UParticleSystemComponent
---@field Splinter UAudioComponent
---@field NewVar_0 EClientFoliageReplacementState
local ABPBirch05DeadReplacement_C = {}

---@param State EClientFoliageReplacementState
function ABPBirch05DeadReplacement_C:OnStateChanged(State) end
---@param EntryPoint int32
function ABPBirch05DeadReplacement_C:ExecuteUbergraph_BPBirch05DeadReplacement(EntryPoint) end


