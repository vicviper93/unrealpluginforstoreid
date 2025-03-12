#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "MyIDPluginBPLibrary.generated.h"

UCLASS(Blueprintable)
class MYIDPLUGIN_API UMyIDPluginBPLibrary : public UGameInstanceSubsystem
{
    GENERATED_BODY()

public:
    virtual void Initialize(FSubsystemCollectionBase& Collection) override;

    UFUNCTION(BlueprintCallable, Category = "ID Management")
    void SetUserID(const FString& NewID);

    UFUNCTION(BlueprintCallable, Category = "ID Management")
    FString GetUserID() const;

private:
    UPROPERTY()
    FString UserID;
};