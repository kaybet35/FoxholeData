---@meta

---@class ABPHarvester_C : AHarvester
---@field UberGraphFrame FPointerToUberGraphFrame
---@field Node10 UStaticMeshComponent
---@field Node09 UStaticMeshComponent
---@field Node08 UStaticMeshComponent
---@field Node07 UStaticMeshComponent
---@field Node06 UStaticMeshComponent
---@field Node05 UStaticMeshComponent
---@field Node04 UStaticMeshComponent
---@field Node03 UStaticMeshComponent
---@field Node02 UStaticMeshComponent
---@field Node01 UStaticMeshComponent
---@field Node00 UStaticMeshComponent
---@field BPResourceGroupRenderComponent UBPResourceGroupRenderComponent_C
---@field PassengerSeat1 UVehicleSeatComponent
---@field DriverSeat0 UVehicleSeatComponent
---@field PassengerExit USeatExitComponent
---@field DriverExit0 USeatExitComponent
---@field PassengerTrigger USeatTriggerComponent
---@field DriverTrigger USeatTriggerComponent
---@field SpotLight_R USpotLightComponent
---@field SpotLight_L USpotLightComponent
---@field Light_R UStaticMeshComponent
---@field Light_L UStaticMeshComponent
---@field Exhaust UParticleSystemComponent
---@field VehicleIdle UAudioComponent
---@field Camera UCameraComponent
local ABPHarvester_C = {}

---@param IsOn boolean
function ABPHarvester_C:BPOnVehicleOn(IsOn) end
---@param EntryPoint int32
function ABPHarvester_C:ExecuteUbergraph_BPHarvester(EntryPoint) end


