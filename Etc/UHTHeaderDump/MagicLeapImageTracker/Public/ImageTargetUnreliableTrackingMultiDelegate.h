#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "ImageTargetUnreliableTrackingMultiDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FImageTargetUnreliableTrackingMulti, const FVector&, LastTrackedLocation, const FRotator&, LastTrackedRotation, const FVector&, NewUnreliableLocation, const FRotator&, NewUnreliableRotation);

