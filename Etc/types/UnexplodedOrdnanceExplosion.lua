---@meta

---@class AUnexplodedOrdnanceExplosion_C : AWarExplosionEffect
---@field UberGraphFrame FPointerToUberGraphFrame
---@field RadialForce URadialForceComponent
local AUnexplodedOrdnanceExplosion_C = {}

function AUnexplodedOrdnanceExplosion_C:ReceiveBeginPlay() end
---@param EntryPoint int32
function AUnexplodedOrdnanceExplosion_C:ExecuteUbergraph_UnexplodedOrdnanceExplosion(EntryPoint) end


