#pragma once

#include "Openable.generated.h"

UINTERFACE()
class BASICSTUDY_API UOpenable : public UInterface
{
	GENERATED_BODY()
};

class BASICSTUDY_API IOpenable
{
	GENERATED_BODY()

public:

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Openable")
	void Open();
};