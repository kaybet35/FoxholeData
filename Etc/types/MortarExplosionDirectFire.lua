---@meta

---@class AMortarExplosionDirectFire_C : AWarExplosionEffect
---@field UberGraphFrame FPointerToUberGraphFrame
---@field RadialForce URadialForceComponent
local AMortarExplosionDirectFire_C = {}

function AMortarExplosionDirectFire_C:ReceiveBeginPlay() end
---@param EntryPoint int32
function AMortarExplosionDirectFire_C:ExecuteUbergraph_MortarExplosionDirectFire(EntryPoint) end


