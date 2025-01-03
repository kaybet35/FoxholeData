#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "Variant.generated.h"

class AActor;
class UVariantObjectBinding;

UCLASS(Blueprintable, DefaultToInstanced)
class VARIANTMANAGERCONTENT_API UVariant : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DisplayText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UVariantObjectBinding*> ObjectBindings;
    
public:
    UVariant();

    UFUNCTION(BlueprintCallable)
    void SwitchOn();
    
    UFUNCTION(BlueprintCallable)
    void SetDisplayText(const FText& NewDisplayText);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumActors();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetDisplayText() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetActor(int32 ActorIndex);
    
};

