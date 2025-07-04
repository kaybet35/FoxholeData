---@meta

---@class ALRAExplosion_C : AWarExplosionEffect
---@field UberGraphFrame FPointerToUberGraphFrame
---@field Audio UAudioComponent
---@field RadialForce URadialForceComponent
local ALRAExplosion_C = {}

function ALRAExplosion_C:BPDetonate() end
function ALRAExplosion_C:BPTelegraph() end
---@param EntryPoint int32
function ALRAExplosion_C:ExecuteUbergraph_LRAExplosion(EntryPoint) end


