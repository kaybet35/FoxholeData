#pragma once
#include "CoreMinimal.h"
#include "BuildableStructure.h"
#include "FieldPier.generated.h"

UCLASS(Blueprintable)
class WAR_API AFieldPier : public ABuildableStructure {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ShippableZOffset;
    
public:
    AFieldPier(const FObjectInitializer& ObjectInitializer);

};

