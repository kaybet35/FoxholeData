---@meta

---@class AGrenadeExplosion_C : AWarExplosionEffect
---@field UberGraphFrame FPointerToUberGraphFrame
---@field RadialForce URadialForceComponent
AGrenadeExplosion_C = {}

function AGrenadeExplosion_C:ReceiveBeginPlay() end
---@param EntryPoint int32
function AGrenadeExplosion_C:ExecuteUbergraph_GrenadeExplosion(EntryPoint) end


