---@meta

---@class ABPTruckLiquidC_C : AOilTanker
---@field UberGraphFrame FPointerToUberGraphFrame
---@field PassengerSeat1 UVehicleSeatComponent
---@field DriverSeat0 UVehicleSeatComponent
---@field PassengerExit USeatExitComponent
---@field DriverExit0 USeatExitComponent
---@field PassengerTrigger USeatTriggerComponent
---@field DriverTrigger USeatTriggerComponent
---@field LightRear_L UPointLightComponent
---@field LightRear_R UPointLightComponent
---@field RearLight_L UStaticMeshComponent
---@field RearLight_R UStaticMeshComponent
---@field Light_L UStaticMeshComponent
---@field Light_R UStaticMeshComponent
---@field SpotLight2 USpotLightComponent
---@field SpotLight USpotLightComponent
---@field TruckIdle UAudioComponent
---@field Exhaust UParticleSystemComponent
---@field destroyedps UParticleSystemComponent
---@field Camera UCameraComponent
local ABPTruckLiquidC_C = {}

---@param IsOn boolean
function ABPTruckLiquidC_C:BPOnVehicleOn(IsOn) end
---@param EntryPoint int32
function ABPTruckLiquidC_C:ExecuteUbergraph_BPTruckLiquidC(EntryPoint) end


