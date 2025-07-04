---@meta

---@class AMaceImpactEffect_C : AImpactEffect
---@field UberGraphFrame FPointerToUberGraphFrame
---@field RadialForce URadialForceComponent
---@field DefaultSceneRoot USceneComponent
local AMaceImpactEffect_C = {}

function AMaceImpactEffect_C:ReceiveBeginPlay() end
---@param EntryPoint int32
function AMaceImpactEffect_C:ExecuteUbergraph_MaceImpactEffect(EntryPoint) end


