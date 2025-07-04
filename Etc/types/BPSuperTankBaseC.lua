---@meta

---@class ABPSuperTankBaseC_C : ABPSuperTankBase_C
---@field UberGraphFrame FPointerToUberGraphFrame
---@field SpotLightBody USpotLightComponent
---@field LightBody UStaticMeshComponent
---@field chassis USkeletalMeshComponent
---@field ExhaustR UParticleSystemComponent
---@field LightBodyR UStaticMeshComponent
---@field SpotLightBodyR USpotLightComponent
local ABPSuperTankBaseC_C = {}

---@param IsOn boolean
function ABPSuperTankBaseC_C:BPOnVehicleOn(IsOn) end
---@param EntryPoint int32
function ABPSuperTankBaseC_C:ExecuteUbergraph_BPSuperTankBaseC(EntryPoint) end


