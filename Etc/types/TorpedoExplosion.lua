---@meta

---@class ATorpedoExplosion_C : AWarExplosionEffect
---@field UberGraphFrame FPointerToUberGraphFrame
---@field RadialForce URadialForceComponent
ATorpedoExplosion_C = {}

function ATorpedoExplosion_C:ReceiveBeginPlay() end
---@param EntryPoint int32
function ATorpedoExplosion_C:ExecuteUbergraph_TorpedoExplosion(EntryPoint) end


