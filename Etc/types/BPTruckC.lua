---@meta

---@class ABPTruckC_C : ABPTruckBaseC_C
---@field UberGraphFrame FPointerToUberGraphFrame
---@field LightRear_R UPointLightComponent
---@field LightRear_L UPointLightComponent
---@field RearLight_R UStaticMeshComponent
---@field RearLight_L UStaticMeshComponent
---@field TowHitchUse UTowHitchUseComponent
local ABPTruckC_C = {}

---@param IsOn boolean
function ABPTruckC_C:BPOnVehicleOn(IsOn) end
---@param EntryPoint int32
function ABPTruckC_C:ExecuteUbergraph_BPTruckC(EntryPoint) end


