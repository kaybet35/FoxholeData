---@meta

---@class UABP_ScrapMine_C : UAnimInstance
---@field UberGraphFrame FPointerToUberGraphFrame
---@field AnimGraphNode_Root_BBD5DB684FD6B4690E7981B0D668E3E5 FAnimNode_Root
---@field AnimGraphNode_SequencePlayer_C06E7E8F4875B7340777039E056B1422 FAnimNode_SequencePlayer
---@field AnimGraphNode_SequencePlayer_24EFE54D43FC8360DEF53A835A16D9D9 FAnimNode_SequencePlayer
---@field AnimGraphNode_BlendListByBool_95EFE262413AA28C4705FF9317797BA4 FAnimNode_BlendListByBool
---@field IsActive boolean
UABP_ScrapMine_C = {}

---@param AnimGraph FPoseLink
function UABP_ScrapMine_C:AnimGraph(AnimGraph) end
---@param DeltaTimeX float
function UABP_ScrapMine_C:BlueprintUpdateAnimation(DeltaTimeX) end
---@param EntryPoint int32
function UABP_ScrapMine_C:ExecuteUbergraph_ABP_ScrapMine(EntryPoint) end


