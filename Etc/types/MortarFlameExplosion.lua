---@meta

---@class AMortarFlameExplosion_C : AWarExplosionEffect
---@field UberGraphFrame FPointerToUberGraphFrame
---@field Audio UAudioComponent
---@field RadialForce URadialForceComponent
AMortarFlameExplosion_C = {}

function AMortarFlameExplosion_C:ReceiveBeginPlay() end
function AMortarFlameExplosion_C:BPTelegraph() end
---@param EntryPoint int32
function AMortarFlameExplosion_C:ExecuteUbergraph_MortarFlameExplosion(EntryPoint) end


