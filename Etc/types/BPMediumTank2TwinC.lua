---@meta

---@class ABPMediumTank2TwinC_C : ABPMediumTank2BaseC_C
---@field UberGraphFrame FPointerToUberGraphFrame
---@field SpotLightTurret USpotLightComponent
---@field LightBodyTurret UStaticMeshComponent
---@field PayloadStaticMesh3 UPayloadStaticMeshComponent
---@field PayloadStaticMesh2 UPayloadStaticMeshComponent
---@field PayloadStaticMesh1 UPayloadStaticMeshComponent
---@field PayloadStaticMesh0 UPayloadStaticMeshComponent
---@field SpotLightBodyLeft USpotLightComponent
---@field LightBodyLeft UStaticMeshComponent
---@field GunnerSeat2 UVehicleSeatComponent
ABPMediumTank2TwinC_C = {}

---@param IsOn boolean
function ABPMediumTank2TwinC_C:BPOnVehicleOn(IsOn) end
---@param EntryPoint int32
function ABPMediumTank2TwinC_C:ExecuteUbergraph_BPMediumTank2TwinC(EntryPoint) end


