#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "VariantSet.generated.h"

class UVariant;

UCLASS(Blueprintable)
class VARIANTMANAGERCONTENT_API UVariantSet : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DisplayText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bExpanded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UVariant*> Variants;
    
public:
    UVariantSet();

    UFUNCTION(BlueprintCallable)
    void SetDisplayText(const FText& NewDisplayText);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UVariant* GetVariantByName(const FString& VariantName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UVariant* GetVariant(int32 VariantIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumVariants();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetDisplayText() const;
    
};

