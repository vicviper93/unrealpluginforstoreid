#include "MyIDPluginBPLibrary.h"

void UMyIDPluginBPLibrary::Initialize(FSubsystemCollectionBase& Collection)
{
    Super::Initialize(Collection);
    UserID = TEXT("");
}

void UMyIDPluginBPLibrary::SetUserID(const FString& NewID)
{
    UserID = NewID;
}

FString UMyIDPluginBPLibrary::GetUserID() const
{
    return UserID;
}