---@meta

---@class AMortarSHExplosionDirectFire_C : AWarExplosionEffect
---@field UberGraphFrame FPointerToUberGraphFrame
---@field RadialForce URadialForceComponent
AMortarSHExplosionDirectFire_C = {}

function AMortarSHExplosionDirectFire_C:ReceiveBeginPlay() end
---@param EntryPoint int32
function AMortarSHExplosionDirectFire_C:ExecuteUbergraph_MortarSHExplosionDirectFire(EntryPoint) end


