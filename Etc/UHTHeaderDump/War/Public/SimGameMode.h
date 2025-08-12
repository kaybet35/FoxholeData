#pragma once
#include "CoreMinimal.h"
#include "SavedCharacter.h"
#include "Templates/SubclassOf.h"
#include "WarGameMode.h"
#include "WarReporter.h"
#include "SimGameMode.generated.h"

class AActor;
class AOfflineCharacter;
class APawn;
class UPlayerProfileManager;
class UResourceMapping;

UCLASS(Blueprintable, NonTransient)
class WAR_API ASimGameMode : public AWarGameMode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefaultAutoSavePeriod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DefaultAutoSaveSlot;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<APawn> DefaultBotClass;
    
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<uint32, AActor*> AssignableSpawnPoints;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 CurrentVehicleID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, AOfflineCharacter*> OfflineCharacterMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AOfflineCharacter> OfflineCharacterClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FSavedCharacter> SavedCharacterMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPlayerProfileManager* PlayerProfileManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWarReporter WarReporter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UResourceMapping* ResourceMapping;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<AActor*> DecayPreventers;
    
    ASimGameMode(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, Exec)
    void HeadlessServerCommand(const FString& Command);
    
    UFUNCTION(BlueprintCallable, Exec)
    void HeadlessCommand(const FString& Command);
    
};

