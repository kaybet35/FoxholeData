---@meta

---@class AWaterSurfaceTorpedoHitExplosion_C : AWarExplosionEffect
---@field UberGraphFrame FPointerToUberGraphFrame
---@field RadialForce URadialForceComponent
AWaterSurfaceTorpedoHitExplosion_C = {}

function AWaterSurfaceTorpedoHitExplosion_C:ReceiveBeginPlay() end
---@param EntryPoint int32
function AWaterSurfaceTorpedoHitExplosion_C:ExecuteUbergraph_WaterSurfaceTorpedoHitExplosion(EntryPoint) end


