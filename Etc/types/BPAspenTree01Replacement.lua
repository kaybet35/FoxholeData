---@meta

---@class ABPAspenTree01Replacement_C : AClientFoliageReplacement
---@field UberGraphFrame FPointerToUberGraphFrame
---@field Splinter UAudioComponent
---@field NoMansLandTreeFire UParticleSystemComponent
---@field Fire UAudioComponent
---@field NoMansLandSplinter UParticleSystemComponent
---@field NewVar_0 EClientFoliageReplacementState
ABPAspenTree01Replacement_C = {}

---@param State EClientFoliageReplacementState
function ABPAspenTree01Replacement_C:OnStateChanged(State) end
---@param EntryPoint int32
function ABPAspenTree01Replacement_C:ExecuteUbergraph_BPAspenTree01Replacement(EntryPoint) end


