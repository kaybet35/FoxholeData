#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "PersistentActor.h"
#include "ListeningArea.generated.h"

class UListeningAreaComponent;

UCLASS(Blueprintable)
class WAR_API AListeningArea : public AActor, public IPersistentActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    float LifeSpanRemaining;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, SaveGame, meta=(AllowPrivateAccess=true))
    UListeningAreaComponent* ListeningComponent;
    
public:
    AListeningArea(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

