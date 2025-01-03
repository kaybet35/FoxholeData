---@meta

---@class AExplosiveLightCExplosion_C : AWarExplosionEffect
---@field UberGraphFrame FPointerToUberGraphFrame
---@field RadialForce URadialForceComponent
AExplosiveLightCExplosion_C = {}

function AExplosiveLightCExplosion_C:ReceiveBeginPlay() end
---@param EntryPoint int32
function AExplosiveLightCExplosion_C:ExecuteUbergraph_ExplosiveLightCExplosion(EntryPoint) end


