#pragma once
#include "Engine.h"
#include "Modules/ModuleInterface.h"
#include "Modules/ModuleManager.h"
#include "UnrealEd.h"
#include "ModuleInterface.h"
#include "ModuleManager.h"
#include "Interfaces/IMainFrameModule.h"
#include "BasicStudyCommands.h"


class FBasicStudyEditorModule : public IModuleInterface
{
public:
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;

	TSharedPtr<FExtender> ToolbarExtender;
	TSharedPtr<const FExtensionBase> Extension;

	void MyButton_Clicked()
	{
		TSharedRef<SWindow> BasicStudyWindow = SNew(SWindow).Title(FText::FromString(TEXT("BasicStduy Window"))).ClientSize(FVector2D(800, 400)).SupportsMaximize(false).SupportsMinimize(false);

		IMainFrameModule& MainFrameModule = FModuleManager::LoadModuleChecked<IMainFrameModule>(TEXT("MainFrame"));

		if (MainFrameModule.GetParentWindow().IsValid())
		{
			FSlateApplication::Get().AddWindowAsNativeChild(BasicStudyWindow, MainFrameModule.GetParentWindow().ToSharedRef());
		}
		else
		{
			FSlateApplication::Get().AddWindow(BasicStudyWindow);
		}
	};

	void AddToolbarExtension(FToolBarBuilder& builder)
	{
		FSlateIcon IconBrush = FSlateIcon(FEditorStyle::GetStyleSetName(), "LevelEditor.ViewOptions", "LevelEditor.ViewOptions.Small");

		builder.AddToolBarButton(FBasicStudyCommands::Get().MyButton, NAME_None, FText::FromString("My Button"), FText::FromString("Click me to display a message"), IconBrush, NAME_None);
	};

	void AddMenuExtension(FMenuBuilder& builder)
	{
		FSlateIcon IconBrush = FSlateIcon(FEditorStyle::GetStyleSetName(), "LevelEditor.ViewOptions", "LevelEditor.ViewOptions.Small");
		builder.AddMenuEntry(FBasicStudyCommands::Get().MyButton);
	};
};