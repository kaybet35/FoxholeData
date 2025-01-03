---@meta

---@class ATankImpactExplosion_C : AWarExplosionEffect
---@field UberGraphFrame FPointerToUberGraphFrame
---@field RadialForce URadialForceComponent
ATankImpactExplosion_C = {}

function ATankImpactExplosion_C:ReceiveBeginPlay() end
---@param EntryPoint int32
function ATankImpactExplosion_C:ExecuteUbergraph_TankImpactExplosion(EntryPoint) end


