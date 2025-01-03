---@meta

---@class ADepthChargeExplosion_C : AWarExplosionEffect
---@field UberGraphFrame FPointerToUberGraphFrame
---@field RadialForce URadialForceComponent
ADepthChargeExplosion_C = {}

function ADepthChargeExplosion_C:ReceiveBeginPlay() end
---@param EntryPoint int32
function ADepthChargeExplosion_C:ExecuteUbergraph_DepthChargeExplosion(EntryPoint) end


