---@meta

---@class ABPRelicAPC_C : ARelicAPC
---@field UberGraphFrame FPointerToUberGraphFrame
---@field PassengerSeat7 UVehicleSeatComponent
---@field PassengerSeat6 UVehicleSeatComponent
---@field PassengerSeat5 UVehicleSeatComponent
---@field PassengerSeat4 UVehicleSeatComponent
---@field GunnerSeat2 UVehicleSeatComponent
---@field GunnerSeat1 UVehicleSeatComponent
---@field CommanderSeat3 UVehicleSeatComponent
---@field DriverSeat0 UVehicleSeatComponent
---@field BackExit USeatExitComponent
---@field DriverExit0 USeatExitComponent
---@field BackTrigger USeatTriggerComponent
---@field RightTrigger USeatTriggerComponent
---@field LeftTrigger USeatTriggerComponent
---@field DriverTrigger USeatTriggerComponent
---@field Exhaust UParticleSystemComponent
---@field DriveIdle UAudioComponent
---@field SpotLight1 USpotLightComponent
---@field StaticMesh1 UStaticMeshComponent
---@field StaticMesh UStaticMeshComponent
---@field SpotLight USpotLightComponent
---@field TestMesh UStaticMeshComponent
---@field Camera UCameraComponent
ABPRelicAPC_C = {}

---@param IsOn boolean
function ABPRelicAPC_C:BPOnVehicleOn(IsOn) end
---@param EntryPoint int32
function ABPRelicAPC_C:ExecuteUbergraph_BPRelicAPC(EntryPoint) end


