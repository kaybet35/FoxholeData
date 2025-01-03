---@meta

---@class ABPHalftrackMultiW_C : AHalfTrack
---@field UberGraphFrame FPointerToUberGraphFrame
---@field Exhaust UParticleSystemComponent
---@field SpotLight_R USpotLightComponent
---@field Light_R UStaticMeshComponent
---@field PayloadInstancedStaticMesh2 UPayloadInstancedStaticMeshComponent
---@field PayloadInstancedStaticMesh1 UPayloadInstancedStaticMeshComponent
---@field chassis USkeletalMeshComponent
---@field PayloadInstancedStaticMesh0 UPayloadInstancedStaticMeshComponent
---@field Camera UCameraComponent
---@field PassengerTrigger USeatTriggerComponent
---@field PassengerExit USeatExitComponent
---@field DriverTrigger USeatTriggerComponent
---@field DriverExit0 USeatExitComponent
---@field DriverSeat0 UVehicleSeatComponent
---@field PassengerSeat1 UVehicleSeatComponent
ABPHalftrackMultiW_C = {}

---@param IsOn boolean
function ABPHalftrackMultiW_C:BPOnVehicleOn(IsOn) end
---@param EntryPoint int32
function ABPHalftrackMultiW_C:ExecuteUbergraph_BPHalftrackMultiW(EntryPoint) end


