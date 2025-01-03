#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "ImageTargetUnreliableTrackingDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_FourParams(FImageTargetUnreliableTracking, const FVector&, LastTrackedLocation, const FRotator&, LastTrackedRotation, const FVector&, NewUnreliableLocation, const FRotator&, NewUnreliableRotation);

