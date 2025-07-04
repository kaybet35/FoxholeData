---@meta

---@class ABPTruckMultiC_C : ATransportTruck
---@field UberGraphFrame FPointerToUberGraphFrame
---@field TruckIdle UAudioComponent
---@field Exhaust UParticleSystemComponent
---@field Light_L UStaticMeshComponent
---@field Light_R UStaticMeshComponent
---@field SpotLight_L USpotLightComponent
---@field SpotLight_R USpotLightComponent
---@field LightRear_L UPointLightComponent
---@field LightRear_R UPointLightComponent
---@field RearLight_L UStaticMeshComponent
---@field RearLight_R UStaticMeshComponent
---@field PayloadInstancedStaticMesh UPayloadInstancedStaticMeshComponent
---@field Camera UCameraComponent
---@field PassengerTrigger USeatTriggerComponent
---@field PassengerExit USeatExitComponent
---@field DriverTrigger USeatTriggerComponent
---@field DriverExit0 USeatExitComponent
---@field DriverSeat0 UVehicleSeatComponent
---@field PassengerSeat1 UVehicleSeatComponent
local ABPTruckMultiC_C = {}

---@param IsOn boolean
function ABPTruckMultiC_C:BPOnVehicleOn(IsOn) end
---@param EntryPoint int32
function ABPTruckMultiC_C:ExecuteUbergraph_BPTruckMultiC(EntryPoint) end


