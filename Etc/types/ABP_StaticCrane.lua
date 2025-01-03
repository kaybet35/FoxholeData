---@meta

---@class UABP_StaticCrane_C : UCraneComponentAnimInstance
---@field UberGraphFrame FPointerToUberGraphFrame
---@field AnimGraphNode_Root_4FEE286F468A9B2956175D8EBF4AD1DF FAnimNode_Root
---@field AnimGraphNode_RotationOffsetBlendSpace_8F5EFB6D4DF9AF3C58F9D0A0C483911B FAnimNode_RotationOffsetBlendSpace
---@field AnimGraphNode_BlendSpacePlayer_EE86026A4C7CC55C5ACC30B7AFFBA765 FAnimNode_BlendSpacePlayer
---@field AnimGraphNode_BlendSpacePlayer_4E0BEC474351C353D7169CB099B544B1 FAnimNode_BlendSpacePlayer
---@field AnimGraphNode_LayeredBoneBlend_41AC4689434A62577CE9B5B2F5D0E8EB FAnimNode_LayeredBoneBlend
---@field AnimGraphNode_RotationOffsetBlendSpace_F1C685FF4971380ECF2FA3A7B1EE90BC FAnimNode_RotationOffsetBlendSpace
UABP_StaticCrane_C = {}

---@param AnimGraph FPoseLink
function UABP_StaticCrane_C:AnimGraph(AnimGraph) end
---@param EntryPoint int32
function UABP_StaticCrane_C:ExecuteUbergraph_ABP_StaticCrane(EntryPoint) end


