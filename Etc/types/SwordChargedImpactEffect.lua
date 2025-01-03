---@meta

---@class ASwordChargedImpactEffect_C : AImpactEffect
---@field UberGraphFrame FPointerToUberGraphFrame
---@field RadialForce URadialForceComponent
---@field DefaultSceneRoot USceneComponent
ASwordChargedImpactEffect_C = {}

function ASwordChargedImpactEffect_C:ReceiveBeginPlay() end
---@param EntryPoint int32
function ASwordChargedImpactEffect_C:ExecuteUbergraph_SwordChargedImpactEffect(EntryPoint) end


