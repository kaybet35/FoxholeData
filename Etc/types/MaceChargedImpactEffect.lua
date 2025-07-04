---@meta

---@class AMaceChargedImpactEffect_C : AImpactEffect
---@field UberGraphFrame FPointerToUberGraphFrame
---@field RadialForce URadialForceComponent
---@field DefaultSceneRoot USceneComponent
local AMaceChargedImpactEffect_C = {}

function AMaceChargedImpactEffect_C:ReceiveBeginPlay() end
---@param EntryPoint int32
function AMaceChargedImpactEffect_C:ExecuteUbergraph_MaceChargedImpactEffect(EntryPoint) end


