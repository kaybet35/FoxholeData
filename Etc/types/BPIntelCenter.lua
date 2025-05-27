---@meta

---@class ABPIntelCenter_C : AIntelCenter
---@field UberGraphFrame FPointerToUberGraphFrame
---@field LargeFortCommon UTemplateComponent
---@field OccupiableTrigger USeatTriggerComponent
---@field OccupiableComponent UStructureSeatComponent
---@field MultiplexedStaticMesh UMultiplexedStaticMeshComponent
---@field RoofBaseMesh UStaticMeshComponent
---@field Flag2 UStaticMeshComponent
---@field Flag UStaticMeshComponent
---@field RoofMesh UStaticMeshComponent
---@field FloorMesh UStaticMeshComponent
---@field FrontFortSocket UBuildSocketComponent
---@field RightFortSocket UBuildSocketComponent
---@field BackFortSocket UBuildSocketComponent
---@field LeftFortSocket UBuildSocketComponent
---@field MultiplexedSkeletalMesh UMultiplexedSkeletalMeshComponent
ABPIntelCenter_C = {}

---@param VisualTeamId int32
function ABPIntelCenter_C:BPSetTeamVisuals(VisualTeamId) end
---@param EntryPoint int32
function ABPIntelCenter_C:ExecuteUbergraph_BPIntelCenter(EntryPoint) end


