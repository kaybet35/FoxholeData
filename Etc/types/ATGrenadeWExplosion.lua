---@meta

---@class AATGrenadeWExplosion_C : AWarExplosionEffect
---@field UberGraphFrame FPointerToUberGraphFrame
---@field RadialForce URadialForceComponent
local AATGrenadeWExplosion_C = {}

function AATGrenadeWExplosion_C:ReceiveBeginPlay() end
---@param EntryPoint int32
function AATGrenadeWExplosion_C:ExecuteUbergraph_ATGrenadeWExplosion(EntryPoint) end


