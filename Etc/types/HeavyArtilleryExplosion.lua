---@meta

---@class AHeavyArtilleryExplosion_C : AWarExplosionEffect
---@field UberGraphFrame FPointerToUberGraphFrame
---@field Audio UAudioComponent
---@field RadialForce URadialForceComponent
local AHeavyArtilleryExplosion_C = {}

function AHeavyArtilleryExplosion_C:ReceiveBeginPlay() end
function AHeavyArtilleryExplosion_C:BPTelegraph() end
---@param EntryPoint int32
function AHeavyArtilleryExplosion_C:ExecuteUbergraph_HeavyArtilleryExplosion(EntryPoint) end


