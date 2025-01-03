---@meta

---@class ABPWeatherStation_C : AWeatherStation
---@field UberGraphFrame FPointerToUberGraphFrame
---@field RoofBaseMesh UStaticMeshComponent
---@field OccupiableComponent UStructureSeatComponent
---@field StaticMesh UStaticMeshComponent
---@field OccupiableTrigger USeatTriggerComponent
---@field UnderModSlot UBPFortUnderModSlot_C
---@field BPWaterStencilComponent UBPWaterStencilComponent_C
---@field LandscapeHole UBoxComponent
---@field BoatHull UBoatHullComponent
---@field Flag UStaticMeshComponent
---@field RoofMesh UStaticMeshComponent
---@field FloorMesh UStaticMeshComponent
---@field FrontFortSocket UBuildSocketComponent
---@field RightFortSocket UBuildSocketComponent
---@field BackFortSocket UBuildSocketComponent
---@field LeftFortSocket UBuildSocketComponent
---@field MultiplexedSkeletalMesh UMultiplexedSkeletalMeshComponent
ABPWeatherStation_C = {}

---@param VisualTeamId int32
function ABPWeatherStation_C:BPSetTeamVisuals(VisualTeamId) end
---@param EntryPoint int32
function ABPWeatherStation_C:ExecuteUbergraph_BPWeatherStation(EntryPoint) end


