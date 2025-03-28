#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "SwitchActor.generated.h"

class USceneComponent;

UCLASS(Blueprintable)
class VARIANTMANAGERCONTENT_API ASwitchActor : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* SceneComponent;
    
public:
    ASwitchActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SelectOption(int32 OptionIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSelectedOption() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AActor*> GetOptions() const;
    
};

