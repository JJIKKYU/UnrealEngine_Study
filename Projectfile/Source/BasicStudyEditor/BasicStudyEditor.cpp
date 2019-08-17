#include "BasicStudyEditor.h"
#include "Modules/ModuleManager.h"
#include "Modules/ModuleInterface.h"
#include "BasicStudyCommands.h"
#include "LevelEditor.h"
#include "SlateBasics.h"
#include "MultiBoxExtender.h"

IMPLEMENT_GAME_MODULE(FBasicStudyEditorModule, BasicStudyEditor);

void FBasicStudyEditorModule::StartupModule()
{
	FBasicStudyCommands::Register();
	TSharedPtr<FUICommandList> CommandList = MakeShareable(new FUICommandList());
	CommandList->MapAction(FBasicStudyCommands::Get().MyButton, FExecuteAction::CreateRaw(this, &FBasicStudyEditorModule::MyButton_Clicked), FCanExecuteAction());
	ToolbarExtender = MakeShareable(new FExtender());

	// 8-14
	
	// Extension = ToolbarExtender->AddToolBarExtension("Compile", EExtensionHook::Before, CommandList, FToolBarExtensionDelegate::CreateRaw(this, &FBasicStudyEditorModule::AddToolbarExtension));
	//FLevelEditorModule& LevelEditorModule = FModuleManager::LoadModuleChecked<FLevelEditorModule>("LevelEditor");
	// LevelEditorModule.GetToolBarExtensibilityManager()->AddExtender(ToolbarExtender);
	

	// 8-15
	ToolbarExtender->AddMenuExtension("LevelEditor", EExtensionHook::Before, CommandList, FMenuExtensionDelegate::CreateRaw(this, &FBasicStudyEditorModule::AddMenuExtension));
	FLevelEditorModule& LevelEditorModule = FModuleManager::LoadModuleChecked<FLevelEditorModule>("LevelEditor");
	LevelEditorModule.GetMenuExtensibilityManager()->AddExtender(ToolbarExtender);
}

void FBasicStudyEditorModule::ShutdownModule()
{
	ToolbarExtender->RemoveExtension(Extension.ToSharedRef());
	Extension.Reset();
	ToolbarExtender.Reset();
}