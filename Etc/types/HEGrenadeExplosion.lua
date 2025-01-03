---@meta

---@class AHEGrenadeExplosion_C : AWarExplosionEffect
---@field UberGraphFrame FPointerToUberGraphFrame
---@field RadialForce URadialForceComponent
AHEGrenadeExplosion_C = {}

function AHEGrenadeExplosion_C:ReceiveBeginPlay() end
---@param EntryPoint int32
function AHEGrenadeExplosion_C:ExecuteUbergraph_HEGrenadeExplosion(EntryPoint) end


