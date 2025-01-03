---@meta

---@class UABP_ComponentMine_C : UAnimInstance
---@field UberGraphFrame FPointerToUberGraphFrame
---@field AnimGraphNode_Root_A12E61744451328260B5659D08700247 FAnimNode_Root
---@field AnimGraphNode_SequencePlayer_42C492DE423C52AA79574B98D5876339 FAnimNode_SequencePlayer
---@field AnimGraphNode_BlendListByBool_E5F6FAB5454F06A5CC5ED9B25201A2CA FAnimNode_BlendListByBool
---@field IsActive boolean
UABP_ComponentMine_C = {}

---@param AnimGraph FPoseLink
function UABP_ComponentMine_C:AnimGraph(AnimGraph) end
---@param EntryPoint int32
function UABP_ComponentMine_C:ExecuteUbergraph_ABP_ComponentMine(EntryPoint) end


