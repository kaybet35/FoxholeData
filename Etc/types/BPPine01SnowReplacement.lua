---@meta

---@class ABPPine01SnowReplacement_C : AClientFoliageReplacement
---@field UberGraphFrame FPointerToUberGraphFrame
---@field Fire UAudioComponent
---@field NoMansLandTreeFire UParticleSystemComponent
---@field NoMansLandSplinter UParticleSystemComponent
---@field Splinter UAudioComponent
---@field NewVar_0 EClientFoliageReplacementState
ABPPine01SnowReplacement_C = {}

---@param State EClientFoliageReplacementState
function ABPPine01SnowReplacement_C:OnStateChanged(State) end
---@param EntryPoint int32
function ABPPine01SnowReplacement_C:ExecuteUbergraph_BPPine01SnowReplacement(EntryPoint) end


