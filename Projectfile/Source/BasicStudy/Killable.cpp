#include "Killable.h"
#include "BasicStudy.h"
#include "Engine/Engine.h"

bool IKillable::IsDead()
{
	return false;
}

void IKillable::Die()
{
	GEngine->AddOnScreenDebugMessage(-1, 1, FColor::Red, "Arrrgh");
	AActor* Me = Cast<AActor>(this);
	if (Me)
	{
		Me->Destroy();
	}
}