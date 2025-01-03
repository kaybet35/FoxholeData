---@meta

---@class UABP_Rocket_C : UAnimInstance
---@field UberGraphFrame FPointerToUberGraphFrame
---@field AnimGraphNode_Root_90E824104DC6503F8AB67C93D20EE1D9 FAnimNode_Root
---@field AnimGraphNode_TransitionResult_C5C3CEF0433E2D750603B0BC300C096C FAnimNode_TransitionResult
---@field AnimGraphNode_TransitionResult_7EA682CE451A2EFD4A1F37980E6CFFF2 FAnimNode_TransitionResult
---@field AnimGraphNode_SequencePlayer_1B99656145BD857B455618A84389CDB3 FAnimNode_SequencePlayer
---@field AnimGraphNode_StateResult_5D9C734D4EBB32245E61B386838756BB FAnimNode_StateResult
---@field AnimGraphNode_StateResult_61B9A37A4B4D5243B20E44A4CBE01722 FAnimNode_StateResult
---@field AnimGraphNode_StateMachine_C8DDA712416562CC3C3AAB8D96EF35CE FAnimNode_StateMachine
---@field rocketIsLaunched boolean
UABP_Rocket_C = {}

---@param AnimGraph FPoseLink
function UABP_Rocket_C:AnimGraph(AnimGraph) end
---@param EntryPoint int32
function UABP_Rocket_C:ExecuteUbergraph_ABP_Rocket(EntryPoint) end


