#pragma once
#include "CoreMinimal.h"
#include "Actor.h"
#include "LevelBounds.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class ALevelBounds : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoUpdateBounds;
    
    ALevelBounds(const FObjectInitializer& ObjectInitializer);

};

