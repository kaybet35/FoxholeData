#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=NetViewer -FallbackName=NetViewer
//CROSS-MODULE INCLUDE V2: -ModuleName=ReplicationGraph -ObjectName=ReplicationGraphDebugActor -FallbackName=ReplicationGraphDebugActor
#include "WarReplicationGraphActorDebugInfo.h"
#include "WarReplicationGraphDebugActor.generated.h"

UCLASS(Blueprintable, NonTransient)
class AWarReplicationGraphDebugActor : public AReplicationGraphDebugActor {
    GENERATED_BODY()
public:
    AWarReplicationGraphDebugActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerViewTargets(float Delay);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerActorInfo(const FString& MatchString);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientViewTargets(const FNetViewer NetViewer);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientActorInfo(const TArray<FWarReplicationGraphActorDebugInfo>& DebugInfo, const FVector& ViewLocation);
    
};

