---@meta

---@class AMortarExplosionDirectFire_C : AWarExplosionEffect
---@field UberGraphFrame FPointerToUberGraphFrame
---@field RadialForce URadialForceComponent
AMortarExplosionDirectFire_C = {}

function AMortarExplosionDirectFire_C:ReceiveBeginPlay() end
---@param EntryPoint int32
function AMortarExplosionDirectFire_C:ExecuteUbergraph_MortarExplosionDirectFire(EntryPoint) end


