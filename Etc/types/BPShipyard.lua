---@meta

---@class ABPShipyard_C : AVehicleFactory
---@field UberGraphFrame FPointerToUberGraphFrame
---@field KillVolume1 UBoxComponent
---@field TemperatureModifierBox1 UTemperatureModifierBoxComponent
---@field TemperatureModifierBox UTemperatureModifierBoxComponent
---@field Flag UStaticMeshComponent
---@field Audio UAudioComponent
---@field PointLight4 UPointLightComponent
---@field MultiplexedStaticMesh UMultiplexedStaticMeshComponent
---@field DockingVolume UDockComponent
---@field Factory UStaticMeshComponent
local ABPShipyard_C = {}

---@param VisualTeamId int32
function ABPShipyard_C:BPSetTeamVisuals(VisualTeamId) end
---@param EntryPoint int32
function ABPShipyard_C:ExecuteUbergraph_BPShipyard(EntryPoint) end


