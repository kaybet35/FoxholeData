#pragma once
#include "CoreMinimal.h"
#include "InterpTrackInst.h"
#include "InterpTrackInstProperty.generated.h"

class UObject;
class UProperty;

UCLASS(Blueprintable)
class UInterpTrackInstProperty : public UInterpTrackInst {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UProperty* InterpProperty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* PropertyOuterObjectInst;
    
    UInterpTrackInstProperty();

};

