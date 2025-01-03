#ifndef UE4SS_SDK_ABP_TrainBridgeLever_HPP
#define UE4SS_SDK_ABP_TrainBridgeLever_HPP

class UABP_TrainBridgeLever_C : public UDrawbridgeAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0270 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root_F026448745CA5DAD59109B82A3CBD888;               // 0x0278 (size: 0x30)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_C6A302DD4B6AD30BAF9A16ADD1B2CBE7; // 0x02A8 (size: 0xE0)

    void AnimGraph(FPoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_TrainBridgeLever_AnimGraphNode_BlendSpacePlayer_C6A302DD4B6AD30BAF9A16ADD1B2CBE7();
    void ExecuteUbergraph_ABP_TrainBridgeLever(int32 EntryPoint);
}; // Size: 0x388

#endif
