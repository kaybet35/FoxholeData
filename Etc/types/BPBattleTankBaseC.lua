---@meta

---@class ABPBattleTankBaseC_C : ABattleTankBase_C
---@field UberGraphFrame FPointerToUberGraphFrame
---@field mainBody USkeletalMeshComponent
---@field ExhaustRight UParticleSystemComponent
---@field ExhaustLeft UParticleSystemComponent
---@field TurretLightHeadlight UStaticMeshComponent
---@field FrontLightLeftHeadlight UStaticMeshComponent
---@field FrontLightRightHeadlight UStaticMeshComponent
---@field TurretLight USpotLightComponent
---@field FrontLightLeft USpotLightComponent
---@field FrontLightRight USpotLightComponent
local ABPBattleTankBaseC_C = {}

---@param IsOn boolean
function ABPBattleTankBaseC_C:BPOnVehicleOn(IsOn) end
---@param EntryPoint int32
function ABPBattleTankBaseC_C:ExecuteUbergraph_BPBattleTankBaseC(EntryPoint) end


