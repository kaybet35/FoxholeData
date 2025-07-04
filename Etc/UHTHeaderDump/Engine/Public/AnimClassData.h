#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "AnimBlueprintFunction.h"
#include "AnimClassInterface.h"
#include "AnimGraphBlendOptions.h"
#include "AnimNotifyEvent.h"
#include "BakedAnimationStateMachine.h"
#include "CachedPoseIndices.h"
#include "ExposedValueHandler.h"
#include "GraphAssetPlayerInformation.h"
#include "AnimClassData.generated.h"

class USkeleton;
class UStructProperty;

UCLASS(Blueprintable)
class ENGINE_API UAnimClassData : public UObject, public IAnimClassInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBakedAnimationStateMachine> BakedStateMachines;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkeleton* TargetSkeleton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAnimNotifyEvent> AnimNotifies;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FCachedPoseIndices> OrderedSavedPoseIndicesMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAnimBlueprintFunction> AnimBlueprintFunctions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UStructProperty*> AnimNodeProperties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UStructProperty*> LinkedAnimGraphNodeProperties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UStructProperty*> LinkedAnimLayerNodeProperties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UStructProperty*> PreUpdateNodeProperties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UStructProperty*> DynamicResetNodeProperties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UStructProperty*> StateMachineNodeProperties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UStructProperty*> InitializationNodeProperties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FGraphAssetPlayerInformation> GraphNameAssetPlayers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> SyncGroupNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FExposedValueHandler> EvaluateGraphExposedInputs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FAnimGraphBlendOptions> GraphBlendOptions;
    
    UAnimClassData();


    // Fix for true pure virtual functions not being implemented
};

