#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "LargeItemComponent.h"
#include "WoundedCarriedItemComponent.generated.h"

class ASimCharacter;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class WAR_API UWoundedCarriedItemComponent : public ULargeItemComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASimCharacter* CarriedCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector CapsuleOffset;
    
    UWoundedCarriedItemComponent(const FObjectInitializer& ObjectInitializer);

};

