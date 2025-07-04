---@meta

---@class ABPArmoredCarBaseC_C : ABPArmoredCarBase_C
---@field UberGraphFrame FPointerToUberGraphFrame
---@field GunnerSeat1 UVehicleSeatComponent
---@field DriverSeat0 UVehicleSeatComponent
---@field LightRear_L UStaticMeshComponent
---@field SpotLight_Turret USpotLightComponent
---@field Light_Turret UStaticMeshComponent
---@field SpotLight_R USpotLightComponent
---@field LightRear_R UStaticMeshComponent
---@field LightRear UPointLightComponent
---@field Exhaust UParticleSystemComponent
---@field Light_L UStaticMeshComponent
---@field SpotLight_L USpotLightComponent
---@field Light_R UStaticMeshComponent
local ABPArmoredCarBaseC_C = {}

---@param IsOn boolean
function ABPArmoredCarBaseC_C:BPOnVehicleOn(IsOn) end
---@param EntryPoint int32
function ABPArmoredCarBaseC_C:ExecuteUbergraph_BPArmoredCarBaseC(EntryPoint) end


