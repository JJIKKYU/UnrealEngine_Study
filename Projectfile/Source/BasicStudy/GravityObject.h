#pragma once

#include "GravityObject.generated.h"

UINTERFACE()
class BASICSTUDY_API UGravityObject : public UInterface
{
	GENERATED_BODY()
};

class BASICSTUDY_API IGravityObject
{
	GENERATED_BODY()

public:

	virtual void DisableGravity();
	virtual void EnableGravity();
};