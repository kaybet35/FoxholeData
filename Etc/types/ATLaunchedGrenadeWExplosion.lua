---@meta

---@class AATLaunchedGrenadeWExplosion_C : AWarExplosionEffect
---@field UberGraphFrame FPointerToUberGraphFrame
---@field RadialForce URadialForceComponent
local AATLaunchedGrenadeWExplosion_C = {}

function AATLaunchedGrenadeWExplosion_C:ReceiveBeginPlay() end
---@param EntryPoint int32
function AATLaunchedGrenadeWExplosion_C:ExecuteUbergraph_ATLaunchedGrenadeWExplosion(EntryPoint) end


