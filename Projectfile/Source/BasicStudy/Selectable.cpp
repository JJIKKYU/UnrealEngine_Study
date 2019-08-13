#include "BasicStudy.h"
#include "Selectable.h"
#include "Engine/Engine.h"

bool ISelectable::IsSelectable()
{
	GEngine->AddOnScreenDebugMessage(-1, 1, FColor::Red, "Selectable");
	return true;
}

bool ISelectable::TrySelect()
{
	GEngine->AddOnScreenDebugMessage(-1, 1, FColor::Red, "Accepting Selection");
	return true;
}

void ISelectable::Deselect()
{
	unimplemented();
}