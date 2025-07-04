---@meta

---@class ABPTruckOffensiveC_C : ABPTruckBaseC_C
---@field UberGraphFrame FPointerToUberGraphFrame
---@field LightRear_L UPointLightComponent
---@field RearLight_L UStaticMeshComponent
---@field LightRear_R UPointLightComponent
---@field RearLight_R UStaticMeshComponent
---@field TowHitchUse UTowHitchUseComponent
---@field LMGMount USkeletalMeshComponent
local ABPTruckOffensiveC_C = {}

---@param IsOn boolean
function ABPTruckOffensiveC_C:BPOnVehicleOn(IsOn) end
---@param EntryPoint int32
function ABPTruckOffensiveC_C:ExecuteUbergraph_BPTruckOffensiveC(EntryPoint) end


