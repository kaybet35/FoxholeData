---@meta

---@class ABPTruckBaseW_C : ABPTruckBase_C
---@field UberGraphFrame FPointerToUberGraphFrame
---@field SpotLight_R USpotLightComponent
---@field Light_Rear UPointLightComponent
---@field RearLight UStaticMeshComponent
---@field Light_R UStaticMeshComponent
ABPTruckBaseW_C = {}

---@param IsOn boolean
function ABPTruckBaseW_C:BPOnVehicleOn(IsOn) end
---@param EntryPoint int32
function ABPTruckBaseW_C:ExecuteUbergraph_BPTruckBaseW(EntryPoint) end


