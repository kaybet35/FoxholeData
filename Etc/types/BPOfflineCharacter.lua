---@meta

---@class ABPOfflineCharacter_C : AOfflineCharacter
---@field UberGraphFrame FPointerToUberGraphFrame
---@field Particle UParticleSystemComponent
ABPOfflineCharacter_C = {}

function ABPOfflineCharacter_C:UserConstructionScript() end
function ABPOfflineCharacter_C:BPApplyFatalHit() end
---@param EntryPoint int32
function ABPOfflineCharacter_C:ExecuteUbergraph_BPOfflineCharacter(EntryPoint) end


