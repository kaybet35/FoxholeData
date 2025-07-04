#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FrameRate -FallbackName=FrameRate
#include "TimecodeProvider.h"
#include "SystemTimeTimecodeProvider.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ENGINE_API USystemTimeTimecodeProvider : public UTimecodeProvider {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFrameRate FrameRate;
    
public:
    USystemTimeTimecodeProvider();

    UFUNCTION(BlueprintCallable)
    void SetFrameRate(const FFrameRate& InFrameRate);
    
};

