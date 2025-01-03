#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
#include "ImageTargetFoundMultiDelegate.h"
#include "ImageTargetLostMultiDelegate.h"
#include "ImageTargetUnreliableTrackingMultiDelegate.h"
#include "SetImageTargetFailedMultiDelegate.h"
#include "SetImageTargetSucceededMultiDelegate.h"
#include "MagicLeapImageTrackerComponent.generated.h"

class UTexture2D;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAGICLEAPIMAGETRACKER_API UMagicLeapImageTrackerComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* TargetImageTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LongerDimension;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsStationary;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseUnreliablePose;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSetImageTargetSucceededMulti OnSetImageTargetSucceeded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSetImageTargetFailedMulti OnSetImageTargetFailed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FImageTargetFoundMulti OnImageTargetFound;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FImageTargetLostMulti OnImageTargetLost;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FImageTargetUnreliableTrackingMulti OnImageTargetUnreliableTracking;
    
    UMagicLeapImageTrackerComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    bool SetTargetAsync(UTexture2D* ImageTarget);
    
    UFUNCTION(BlueprintCallable)
    bool RemoveTargetAsync();
    
};

