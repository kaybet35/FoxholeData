---@meta

---@class ABayonetChargedImpact_C : AImpactEffect
---@field UberGraphFrame FPointerToUberGraphFrame
---@field RadialForce URadialForceComponent
---@field DefaultSceneRoot USceneComponent
ABayonetChargedImpact_C = {}

function ABayonetChargedImpact_C:ReceiveBeginPlay() end
---@param EntryPoint int32
function ABayonetChargedImpact_C:ExecuteUbergraph_BayonetChargedImpact(EntryPoint) end


