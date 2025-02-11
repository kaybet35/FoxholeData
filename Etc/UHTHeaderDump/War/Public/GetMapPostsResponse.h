#pragma once
#include "CoreMinimal.h"
#include "RepMapPost.h"
#include "GetMapPostsResponse.generated.h"

USTRUCT(BlueprintType)
struct FGetMapPostsResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRepMapPost> MapPosts;
    
    WAR_API FGetMapPostsResponse();
};

