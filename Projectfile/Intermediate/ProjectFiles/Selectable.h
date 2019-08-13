#pragma once

#include "Selectable.generated.h"

UINTERFACE()
class BASICSTUDY_API USelectable : public UInterface
{
	GENERATED_BODY()
};

class BASICSTUDY_API ISelectable
{
	GENERATED_BODY()

public:

	virtual bool IsSelectable();
	virtual bool TrySelect();
	virtual void Deselect();
};