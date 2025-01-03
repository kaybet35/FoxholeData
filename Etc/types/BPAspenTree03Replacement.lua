---@meta

---@class ABPAspenTree03Replacement_C : AClientFoliageReplacement
---@field UberGraphFrame FPointerToUberGraphFrame
---@field Splinter UAudioComponent
---@field NoMansLandTreeFire UParticleSystemComponent
---@field Fire UAudioComponent
---@field NoMansLandSplinter UParticleSystemComponent
---@field NewVar_0 EClientFoliageReplacementState
ABPAspenTree03Replacement_C = {}

---@param State EClientFoliageReplacementState
function ABPAspenTree03Replacement_C:OnStateChanged(State) end
---@param EntryPoint int32
function ABPAspenTree03Replacement_C:ExecuteUbergraph_BPAspenTree03Replacement(EntryPoint) end


