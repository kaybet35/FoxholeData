---@meta

---@class AMortarFlameExplosionDirectFire_C : AWarExplosionEffect
---@field UberGraphFrame FPointerToUberGraphFrame
---@field RadialForce URadialForceComponent
local AMortarFlameExplosionDirectFire_C = {}

function AMortarFlameExplosionDirectFire_C:ReceiveBeginPlay() end
---@param EntryPoint int32
function AMortarFlameExplosionDirectFire_C:ExecuteUbergraph_MortarFlameExplosionDirectFire(EntryPoint) end


