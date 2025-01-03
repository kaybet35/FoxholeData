---@meta

---@class AMortarExplosion_C : AWarExplosionEffect
---@field UberGraphFrame FPointerToUberGraphFrame
---@field Audio UAudioComponent
---@field RadialForce URadialForceComponent
AMortarExplosion_C = {}

function AMortarExplosion_C:ReceiveBeginPlay() end
function AMortarExplosion_C:BPTelegraph() end
---@param EntryPoint int32
function AMortarExplosion_C:ExecuteUbergraph_MortarExplosion(EntryPoint) end


