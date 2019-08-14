#pragma once

#include "Wearable.generated.h"

UINTERFACE()
class BASICSTUDY_API UWearable : public UInterface
{
	GENERATED_BODY()
};

class BASICSTUDY_API IWearable
{
	GENERATED_BODY()

public:

	UFUNCTION(BlueprintNativeEvent, Category = "Wearable")
	int32 GetStrengthRequirement();
	virtual int32 GetStrengthRequirement_Implementation();

	UFUNCTION(BlueprintNativeEvent, Category = "Wearable")
	bool CanEquip(APawn* Wearer);
	virtual bool CanEquip_Implementation(APawn* Wearer);

	UFUNCTION(BlueprintNativeEvent, Category = "Wearable")
	void OnEquip(APawn* Wearer);
	virtual void OnEquip_Implementation(APawn* Wearer);

};