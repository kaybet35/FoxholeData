#pragma once
#include "CoreMinimal.h"
#include "ESceneCapturePrimitiveRenderMode.h"
#include "ESceneCaptureSource.h"
#include "EngineShowFlagsSetting.h"
#include "SceneComponent.h"
#include "SceneCaptureComponent.generated.h"

class AActor;
class UPrimitiveComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ENGINE_API USceneCaptureComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESceneCapturePrimitiveRenderMode PrimitiveRenderMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ESceneCaptureSource> CaptureSource;
    
    UPROPERTY(EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<UPrimitiveComponent>> HiddenComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> HiddenActors;
    
    UPROPERTY(EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<UPrimitiveComponent>> ShowOnlyComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> ShowOnlyActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCaptureEveryFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCaptureOnMovement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAlwaysPersistRenderingState;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LODDistanceFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxViewDistanceOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CaptureSortPriority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    TArray<FEngineShowFlagsSetting> ShowFlagSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FString ProfilingEventName;
    
    USceneCaptureComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void ShowOnlyComponent(UPrimitiveComponent* InComponent);
    
    UFUNCTION(BlueprintCallable)
    void ShowOnlyActorComponents(AActor* InActor);
    
    UFUNCTION(BlueprintCallable)
    void SetCaptureSortPriority(int32 NewCaptureSortPriority);
    
    UFUNCTION(BlueprintCallable)
    void RemoveShowOnlyComponent(UPrimitiveComponent* InComponent);
    
    UFUNCTION(BlueprintCallable)
    void RemoveShowOnlyActorComponents(AActor* InActor);
    
    UFUNCTION(BlueprintCallable)
    void HideComponent(UPrimitiveComponent* InComponent);
    
    UFUNCTION(BlueprintCallable)
    void HideActorComponents(AActor* InActor);
    
    UFUNCTION(BlueprintCallable)
    void ClearShowOnlyComponents();
    
    UFUNCTION(BlueprintCallable)
    void ClearHiddenComponents();
    
};

