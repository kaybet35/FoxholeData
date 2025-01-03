---@meta

---@class ABPScoutVehicleBaseC_C : ABPScoutVehicleBase_C
---@field UberGraphFrame FPointerToUberGraphFrame
---@field BackExit USeatExitComponent
---@field BackTrigger USeatTriggerComponent
---@field Cabin USkeletalMeshComponent
---@field Base UStaticMeshComponent
---@field SpotLight_R USpotLightComponent
---@field Light_R UStaticMeshComponent
---@field Light_L UStaticMeshComponent
---@field SpotLight_L USpotLightComponent
ABPScoutVehicleBaseC_C = {}

---@param IsOn boolean
function ABPScoutVehicleBaseC_C:BPOnVehicleOn(IsOn) end
---@param EntryPoint int32
function ABPScoutVehicleBaseC_C:ExecuteUbergraph_BPScoutVehicleBaseC(EntryPoint) end


