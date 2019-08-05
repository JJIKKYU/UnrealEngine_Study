#pragma once

#include "BasicStudy.h"
#include "ColoredTexture.generated.h"

UStruct()
struct BasicStudy_API FColoredTexture
{
	GENERATED_USTRUCT_BODY()

public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = HUD)
	UTextrue* Texture;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = HUD)
	FLinearColor Color;
}
