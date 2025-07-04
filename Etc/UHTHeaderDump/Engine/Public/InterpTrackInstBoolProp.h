#pragma once
#include "CoreMinimal.h"
#include "InterpTrackInstProperty.h"
#include "InterpTrackInstBoolProp.generated.h"

class UBoolProperty;

UCLASS(Blueprintable)
class UInterpTrackInstBoolProp : public UInterpTrackInstProperty {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UBoolProperty* BoolProperty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ResetBool;
    
    UInterpTrackInstBoolProp();

};

