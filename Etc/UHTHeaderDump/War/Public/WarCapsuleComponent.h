#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=CapsuleComponent -FallbackName=CapsuleComponent
#include "WarCapsuleComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class WAR_API UWarCapsuleComponent : public UCapsuleComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 MovementIgnoreFlags;
    
    UWarCapsuleComponent(const FObjectInitializer& ObjectInitializer);

};

