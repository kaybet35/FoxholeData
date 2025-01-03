#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "EMagicLeapPlaneQueryFlags.h"
#include "MagicLeapPlaneResult.h"
#include "MagicLeapPlanesQuery.h"
#include "MagicLeapPlanesResultDelegateDelegate.h"
#include "MagicLeapPlanesFunctionLibrary.generated.h"

class AActor;

UCLASS(Blueprintable)
class MAGICLEAPPLANES_API UMagicLeapPlanesFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UMagicLeapPlanesFunctionLibrary();

    UFUNCTION(BlueprintCallable)
    static void ReorderPlaneFlags(const TArray<EMagicLeapPlaneQueryFlags>& InPriority, const TArray<EMagicLeapPlaneQueryFlags>& InFlagsToReorder, TArray<EMagicLeapPlaneQueryFlags>& OutReorderedFlags);
    
    UFUNCTION(BlueprintCallable)
    static void RemoveFlagsNotInQuery(const TArray<EMagicLeapPlaneQueryFlags>& InQueryFlags, const TArray<EMagicLeapPlaneQueryFlags>& InResultFlags, TArray<EMagicLeapPlaneQueryFlags>& OutFlags);
    
    UFUNCTION(BlueprintCallable)
    static bool PlanesQueryBeginAsync(const FMagicLeapPlanesQuery& Query, const FMagicLeapPlanesResultDelegate& ResultDelegate);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsTrackerValid();
    
    UFUNCTION(BlueprintCallable)
    static FTransform GetContentScale(const AActor* ContentActor, const FMagicLeapPlaneResult& PlaneResult);
    
    UFUNCTION(BlueprintCallable)
    static bool DestroyTracker();
    
    UFUNCTION(BlueprintCallable)
    static bool CreateTracker();
    
};

