#include "BasicStudyEditor.h"
#include "Commands.h"
#include "BasicStudyCommands.h"

void FBasicStudyCommands::RegisterCommands()
{
#define LOCTEXT_NAMESPACE ""
	UI_COMMAND(MyButton, "BasicStudy", "Basic Study Toolbar Command", EUserInterfaceActionType::Button, FInputGesture());
#undef LOCTEXT_NAMESPACE
}