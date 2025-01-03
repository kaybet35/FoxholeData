---@meta

---@class ABPPine03DeadReplacement_C : AClientFoliageReplacement
---@field UberGraphFrame FPointerToUberGraphFrame
---@field Fire UAudioComponent
---@field NoMansLandTreeFire UParticleSystemComponent
---@field NoMansLandSplinter UParticleSystemComponent
---@field Splinter UAudioComponent
---@field NewVar_0 EClientFoliageReplacementState
ABPPine03DeadReplacement_C = {}

---@param State EClientFoliageReplacementState
function ABPPine03DeadReplacement_C:OnStateChanged(State) end
---@param EntryPoint int32
function ABPPine03DeadReplacement_C:ExecuteUbergraph_BPPine03DeadReplacement(EntryPoint) end


