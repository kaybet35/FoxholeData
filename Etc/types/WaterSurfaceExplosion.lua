---@meta

---@class AWaterSurfaceExplosion_C : AWarExplosionEffect
---@field UberGraphFrame FPointerToUberGraphFrame
---@field RadialForce URadialForceComponent
AWaterSurfaceExplosion_C = {}

function AWaterSurfaceExplosion_C:ReceiveBeginPlay() end
---@param EntryPoint int32
function AWaterSurfaceExplosion_C:ExecuteUbergraph_WaterSurfaceExplosion(EntryPoint) end


