---@meta

---@class ABPAspenTree02Replacement_C : AClientFoliageReplacement
---@field UberGraphFrame FPointerToUberGraphFrame
---@field Splinter UAudioComponent
---@field NoMansLandTreeFire UParticleSystemComponent
---@field Fire UAudioComponent
---@field NoMansLandSplinter UParticleSystemComponent
---@field NewVar_0 EClientFoliageReplacementState
ABPAspenTree02Replacement_C = {}

---@param State EClientFoliageReplacementState
function ABPAspenTree02Replacement_C:OnStateChanged(State) end
---@param EntryPoint int32
function ABPAspenTree02Replacement_C:ExecuteUbergraph_BPAspenTree02Replacement(EntryPoint) end


