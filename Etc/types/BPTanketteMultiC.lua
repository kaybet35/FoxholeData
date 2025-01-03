---@meta

---@class ABPTanketteMultiC_C : AArmoredCar
---@field UberGraphFrame FPointerToUberGraphFrame
---@field Exhaust UParticleSystemComponent
---@field Light_R UStaticMeshComponent
---@field SpotLight_R USpotLightComponent
---@field Light_L UStaticMeshComponent
---@field SpotLight_L USpotLightComponent
---@field DriverExit USeatExitComponent
---@field DriverTrigger USeatTriggerComponent
---@field Camera1 UCameraComponent
---@field DriverSeat0 UVehicleSeatComponent
---@field PayloadInstancedStaticMesh2 UPayloadInstancedStaticMeshComponent
---@field PayloadInstancedStaticMesh1 UPayloadInstancedStaticMeshComponent
---@field PayloadInstancedStaticMesh0 UPayloadInstancedStaticMeshComponent
---@field CommanderSeat1 UVehicleSeatComponent
---@field CommanderExit USeatExitComponent
---@field CommanderTrigger USeatTriggerComponent
---@field chassis USkeletalMeshComponent
ABPTanketteMultiC_C = {}

---@param IsOn boolean
function ABPTanketteMultiC_C:BPOnVehicleOn(IsOn) end
---@param EntryPoint int32
function ABPTanketteMultiC_C:ExecuteUbergraph_BPTanketteMultiC(EntryPoint) end


