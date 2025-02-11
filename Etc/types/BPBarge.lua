---@meta

---@class ABPBarge_C : ABarge
---@field UberGraphFrame FPointerToUberGraphFrame
---@field BPEnterVehicleUseComponent UBPEnterVehicleUseComponent_C
---@field BPShippableUseComponent UBPShippableUseComponent_C
---@field DriverExit0 USeatExitComponent
---@field DriverTrigger USeatTriggerComponent
---@field DriverSeat0 UVehicleSeatComponent
---@field SpotLight2 USpotLightComponent
---@field Light3 UStaticMeshComponent
---@field Light2 UStaticMeshComponent
---@field SpotLight1 USpotLightComponent
---@field SpotLight USpotLightComponent
---@field Light1 UStaticMeshComponent
---@field ['Ramp End (Editor Only)'] USceneComponent
---@field ['Ramp Start (Editor Only)'] USceneComponent
---@field idle UAudioComponent
---@field Camera UCameraComponent
ABPBarge_C = {}

---@param IsOn boolean
function ABPBarge_C:BPOnVehicleOn(IsOn) end
---@param EntryPoint int32
function ABPBarge_C:ExecuteUbergraph_BPBarge(EntryPoint) end


