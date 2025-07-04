---@meta

---@class ABPLRArtillery_C : ALongRangeArtillery
---@field UberGraphFrame FPointerToUberGraphFrame
---@field LargeFortCommon UTemplateComponent
---@field OccupiableTrigger USeatTriggerComponent
---@field OccupiableComponent UStructureSeatComponent
---@field Flag2 UStaticMeshComponent
---@field Flag UStaticMeshComponent
---@field RoofMesh UStaticMeshComponent
---@field FloorMesh UStaticMeshComponent
---@field FrontFortSocket UBuildSocketComponent
---@field RightFortSocket UBuildSocketComponent
---@field BackFortSocket UBuildSocketComponent
---@field LeftFortSocket UBuildSocketComponent
---@field MultiplexedSkeletalMesh UMultiplexedSkeletalMeshComponent
local ABPLRArtillery_C = {}

---@param VisualTeamId int32
function ABPLRArtillery_C:BPSetTeamVisuals(VisualTeamId) end
---@param EntryPoint int32
function ABPLRArtillery_C:ExecuteUbergraph_BPLRArtillery(EntryPoint) end


