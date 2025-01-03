---@meta

---@class ABPTruckMobilityC_C : ABPTruckBaseC_C
---@field UberGraphFrame FPointerToUberGraphFrame
---@field LightRear_L UPointLightComponent
---@field RearLight_L UStaticMeshComponent
---@field LightRear_R UPointLightComponent
---@field RearLight_R UStaticMeshComponent
---@field TowHitchUse UTowHitchUseComponent
ABPTruckMobilityC_C = {}

---@param IsOn boolean
function ABPTruckMobilityC_C:BPOnVehicleOn(IsOn) end
---@param EntryPoint int32
function ABPTruckMobilityC_C:ExecuteUbergraph_BPTruckMobilityC(EntryPoint) end


