#pragma once

#include "MyInterface.generated.h"

UINTERFACE()
class BASICSTUDY_API UMyInterface : public UInterface
{
	GENERATED_BODY()
};

class BASICSTUDY_API IMyInterface
{
	GENERATED_BODY()

public:
	virtual FString GetTestName();
};