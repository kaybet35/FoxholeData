---@meta

---@class ABPWeatherStation_C : AWeatherStation
---@field UberGraphFrame FPointerToUberGraphFrame
---@field LargeFortCommon UTemplateComponent
---@field RoofBaseMesh UStaticMeshComponent
---@field OccupiableComponent UStructureSeatComponent
---@field StaticMesh UStaticMeshComponent
---@field OccupiableTrigger USeatTriggerComponent
---@field Flag UStaticMeshComponent
---@field RoofMesh UStaticMeshComponent
---@field FloorMesh UStaticMeshComponent
---@field FrontFortSocket UBuildSocketComponent
---@field RightFortSocket UBuildSocketComponent
---@field BackFortSocket UBuildSocketComponent
---@field LeftFortSocket UBuildSocketComponent
---@field MultiplexedSkeletalMesh UMultiplexedSkeletalMeshComponent
local ABPWeatherStation_C = {}

---@param VisualTeamId int32
function ABPWeatherStation_C:BPSetTeamVisuals(VisualTeamId) end
---@param EntryPoint int32
function ABPWeatherStation_C:ExecuteUbergraph_BPWeatherStation(EntryPoint) end


