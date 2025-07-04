---@meta

---@class AMeleeImpactEffect_C : AImpactEffect
---@field UberGraphFrame FPointerToUberGraphFrame
---@field RadialForce URadialForceComponent
---@field DefaultSceneRoot USceneComponent
local AMeleeImpactEffect_C = {}

function AMeleeImpactEffect_C:ReceiveBeginPlay() end
---@param EntryPoint int32
function AMeleeImpactEffect_C:ExecuteUbergraph_MeleeImpactEffect(EntryPoint) end


