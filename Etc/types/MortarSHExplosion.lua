---@meta

---@class AMortarSHExplosion_C : AWarExplosionEffect
---@field UberGraphFrame FPointerToUberGraphFrame
---@field Audio UAudioComponent
---@field RadialForce URadialForceComponent
local AMortarSHExplosion_C = {}

function AMortarSHExplosion_C:ReceiveBeginPlay() end
function AMortarSHExplosion_C:BPTelegraph() end
---@param EntryPoint int32
function AMortarSHExplosion_C:ExecuteUbergraph_MortarSHExplosion(EntryPoint) end


