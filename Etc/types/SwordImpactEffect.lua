---@meta

---@class ASwordImpactEffect_C : AImpactEffect
---@field UberGraphFrame FPointerToUberGraphFrame
---@field RadialForce URadialForceComponent
---@field DefaultSceneRoot USceneComponent
ASwordImpactEffect_C = {}

function ASwordImpactEffect_C:ReceiveBeginPlay() end
---@param EntryPoint int32
function ASwordImpactEffect_C:ExecuteUbergraph_SwordImpactEffect(EntryPoint) end


