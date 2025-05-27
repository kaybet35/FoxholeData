---@meta

---@class ABPArmoredCarBaseW_C : ABPArmoredCarBase_C
---@field UberGraphFrame FPointerToUberGraphFrame
---@field DriverSeat0 UVehicleSeatComponent
---@field GunnerSeat1 UVehicleSeatComponent
---@field Exhaust_R UParticleSystemComponent
---@field Exhaust_L UParticleSystemComponent
---@field Light_L UStaticMeshComponent
---@field SpotLight_L USpotLightComponent
ABPArmoredCarBaseW_C = {}

---@param IsOn boolean
function ABPArmoredCarBaseW_C:BPOnVehicleOn(IsOn) end
---@param EntryPoint int32
function ABPArmoredCarBaseW_C:ExecuteUbergraph_BPArmoredCarBaseW(EntryPoint) end


