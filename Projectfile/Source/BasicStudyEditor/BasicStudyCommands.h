#pragma once
#include "Commands.h"
#include "EditorStyleSet.h"

class FBasicStudyCommands : public TCommands<FBasicStudyCommands>
{
public:
	FBasicStudyCommands() : TCommands(FName(TEXT("Basic_Study")),
		FText::FromString("BasicStudy Commands"), NAME_None, FEditorStyle::GetStyleSetName()) {

		};

	virtual void RegisterCommands() override;
	TSharedPtr<FUICommandInfo> MyButton;

};