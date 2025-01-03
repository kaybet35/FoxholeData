---@meta

---@class ABPPine04DeadReplacement_C : AClientFoliageReplacement
---@field UberGraphFrame FPointerToUberGraphFrame
---@field Fire UAudioComponent
---@field NoMansLandTreeFire UParticleSystemComponent
---@field NoMansLandSplinter UParticleSystemComponent
---@field Splinter UAudioComponent
---@field NewVar_0 EClientFoliageReplacementState
ABPPine04DeadReplacement_C = {}

---@param State EClientFoliageReplacementState
function ABPPine04DeadReplacement_C:OnStateChanged(State) end
---@param EntryPoint int32
function ABPPine04DeadReplacement_C:ExecuteUbergraph_BPPine04DeadReplacement(EntryPoint) end


