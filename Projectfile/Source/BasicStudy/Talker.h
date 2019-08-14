#pragma once

#include "Talker.generated.h"

UINTERFACE()
class BASICSTUDY_API UTalker : public UInterface
{
	GENERATED_BODY()
};

class BASICSTUDY_API ITalker
{
	GENERATED_BODY()

public:

	UFUNCTION(BlueprintNativeEvent, Category = "Talk")
	void StartTalking();
	virtual void StartTalking_Implementation();

};