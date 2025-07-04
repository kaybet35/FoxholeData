#pragma once
#include "CoreMinimal.h"
#include "AnimNode_Base.h"
#include "AnimNode_CustomProperty.generated.h"

class UObject;
class UProperty;

USTRUCT(BlueprintType)
struct ENGINE_API FAnimNode_CustomProperty : public FAnimNode_Base {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> SourcePropertyNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> DestPropertyNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UObject* TargetInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UProperty*> SourceProperties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UProperty*> DestProperties;
    
public:
    FAnimNode_CustomProperty();
};

