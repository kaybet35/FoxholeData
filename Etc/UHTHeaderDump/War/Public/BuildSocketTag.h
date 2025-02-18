#pragma once
#include "CoreMinimal.h"
#include "EBuildSocketTagRule.h"
#include "BuildSocketTag.generated.h"

USTRUCT(BlueprintType)
struct FBuildSocketTag {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 SocketTypeMask;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 SocketTypeCategory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Tag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ShowsTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ShowsTagBoth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ShowsTagHigher;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName HidesTagBoth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName HidesTagHigher;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxZOffset;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EBuildSocketTagRule ApplicationRule;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ConnectorAttachmentTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIgnoreHidesTag;
    
    WAR_API FBuildSocketTag();
};

