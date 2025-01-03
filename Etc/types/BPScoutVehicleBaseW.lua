---@meta

---@class ABPScoutVehicleBaseW_C : ABPScoutVehicleBase_C
---@field UberGraphFrame FPointerToUberGraphFrame
---@field Cabin USkeletalMeshComponent
---@field Base UStaticMeshComponent
---@field SpotLight_R USpotLightComponent
---@field Light_R UStaticMeshComponent
ABPScoutVehicleBaseW_C = {}

---@param IsOn boolean
function ABPScoutVehicleBaseW_C:BPOnVehicleOn(IsOn) end
---@param EntryPoint int32
function ABPScoutVehicleBaseW_C:ExecuteUbergraph_BPScoutVehicleBaseW(EntryPoint) end


