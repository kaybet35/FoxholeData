#include "DatasmithContentBlueprintLibrary.h"

UDatasmithContentBlueprintLibrary::UDatasmithContentBlueprintLibrary() {
}

FString UDatasmithContentBlueprintLibrary::GetDatasmithUserDataValueForKey(UObject* Object, FName Key) {
    return TEXT("");
}

void UDatasmithContentBlueprintLibrary::GetDatasmithUserDataKeysAndValuesForValue(UObject* Object, const FString& StringToMatch, TArray<FName>& OutKeys, TArray<FString>& OutValues) {
}

UDatasmithAssetUserData* UDatasmithContentBlueprintLibrary::GetDatasmithUserData(UObject* Object) {
    return NULL;
}


