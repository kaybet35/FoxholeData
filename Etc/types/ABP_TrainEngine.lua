---@meta

---@class UABP_TrainEngine_C : URailVehicleAnimInstance
---@field UberGraphFrame FPointerToUberGraphFrame
---@field AnimGraphNode_Root_60B7E3AF470F3EAEE1AD9298BEAA23D3 FAnimNode_Root
---@field AnimGraphNode_SequencePlayer_18501A304A855546AF131D9F64946F70 FAnimNode_SequencePlayer
---@field AnimGraphNode_RotationOffsetBlendSpace_51E3A4014A3A665D12443F8C6A3166A7 FAnimNode_RotationOffsetBlendSpace
---@field AnimGraphNode_BlendListByBool_E728639640A658DF92E77F92E2181AAD FAnimNode_BlendListByBool
---@field AnimGraphNode_SequencePlayer_F91C2BB942516193F9D6B5B69E0C881B FAnimNode_SequencePlayer
UABP_TrainEngine_C = {}

---@param AnimGraph FPoseLink
function UABP_TrainEngine_C:AnimGraph(AnimGraph) end
---@param EntryPoint int32
function UABP_TrainEngine_C:ExecuteUbergraph_ABP_TrainEngine(EntryPoint) end


