---@meta

---@class ABPMechWRocketExplosion_C : AWarExplosionEffect
---@field UberGraphFrame FPointerToUberGraphFrame
---@field RadialForce URadialForceComponent
local ABPMechWRocketExplosion_C = {}

function ABPMechWRocketExplosion_C:ReceiveBeginPlay() end
---@param EntryPoint int32
function ABPMechWRocketExplosion_C:ExecuteUbergraph_BPMechWRocketExplosion(EntryPoint) end


