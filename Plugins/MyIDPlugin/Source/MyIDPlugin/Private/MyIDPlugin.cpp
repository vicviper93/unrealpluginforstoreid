#include "MyIDPlugin.h"
#include "Modules/ModuleManager.h"

void FMyIDPluginModule::StartupModule()
{
    // 모듈 시작 시 실행할 코드 (필요 시 추가)
}

void FMyIDPluginModule::ShutdownModule()
{
    // 모듈 종료 시 실행할 코드 (필요 시 추가)
}

IMPLEMENT_MODULE(FMyIDPluginModule, MyIDPlugin)