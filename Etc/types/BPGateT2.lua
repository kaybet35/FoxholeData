---@meta

---@class ABPGateT2_C : AGate
---@field UberGraphFrame FPointerToUberGraphFrame
---@field RightLowerBuildFootprint UBPBuildFootprintBoxComponent_C
---@field LeftLowerBuildFootprint UBPBuildFootprintBoxComponent_C
---@field LowerBuildFootprint UBPBuildFootprintBoxComponent_C
---@field LandscapeBuildFootprint UBPBuildFootprintBoxComponent_C
---@field DamageBoxRight UBoxComponent
---@field DamageBoxLeft UBoxComponent
---@field MultiplexedSkeletalMesh UMultiplexedSkeletalMeshComponent
---@field PillarRight UStaticMeshComponent
---@field PillarLeft UStaticMeshComponent
---@field LeftSocket UBuildSocketComponent
---@field RightSocket UBuildSocketComponent
---@field Decal UDecalComponent
---@field FlagMesh UStaticMeshComponent
ABPGateT2_C = {}

---@param VisualTeamId int32
function ABPGateT2_C:BPSetTeamVisuals(VisualTeamId) end
---@param EntryPoint int32
function ABPGateT2_C:ExecuteUbergraph_BPGateT2(EntryPoint) end


