---@meta

---@class UABP_EmplacementMortar_C : UAnimInstance
---@field UberGraphFrame FPointerToUberGraphFrame
---@field AnimGraphNode_Root_9EA9C1534ED8CAAC30194CBC28570ACB FAnimNode_Root
---@field AnimGraphNode_TransitionResult_D01A3E694F0CBA181F40009323872EAB FAnimNode_TransitionResult
---@field AnimGraphNode_TransitionResult_D95C8780487E68B324FAD1B73AA73797 FAnimNode_TransitionResult
---@field AnimGraphNode_SequencePlayer_1E5D19BB419F767F865A76B4BFFC25D8 FAnimNode_SequencePlayer
---@field AnimGraphNode_StateResult_1F1BB747484E8071B9BC62A46E09DB15 FAnimNode_StateResult
---@field AnimGraphNode_StateResult_6F516D664848085F5BDA2297798CF9B4 FAnimNode_StateResult
---@field AnimGraphNode_StateMachine_27FFCBB24B143B9C92BD31B6C60A2BBD FAnimNode_StateMachine
---@field AnimGraphNode_BlendSpacePlayer_BC199F2A4A9EE8B4B37CE3AFC8A3892C FAnimNode_BlendSpacePlayer
---@field AnimGraphNode_BlendSpacePlayer_F6C9EEE5482F02B46B55B2947B56BB8A FAnimNode_BlendSpacePlayer
---@field AnimGraphNode_LayeredBoneBlend_7DE253EA4385328A6E06FCBB1C26DB68 FAnimNode_LayeredBoneBlend
---@field isCannonCrankMoving boolean
---@field CannonYaw float
---@field CannonPitch float
UABP_EmplacementMortar_C = {}

---@param AnimGraph FPoseLink
function UABP_EmplacementMortar_C:AnimGraph(AnimGraph) end
---@param DeltaTimeX float
function UABP_EmplacementMortar_C:BlueprintUpdateAnimation(DeltaTimeX) end
---@param EntryPoint int32
function UABP_EmplacementMortar_C:ExecuteUbergraph_ABP_EmplacementMortar(EntryPoint) end


