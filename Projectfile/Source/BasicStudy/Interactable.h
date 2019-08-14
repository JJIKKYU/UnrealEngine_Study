#pragma once

#include "Interactable.generated.h"

UINTERFACE()
class BASICSTUDY_API UInteractable : public UInterface
{
	GENERATED_BODY()
};

class BASICSTUDY_API IInteractable
{
	GENERATED_BODY()

public:

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Interactable")
	bool CanInteract();

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Interactable")
	void PerformInteract();

};