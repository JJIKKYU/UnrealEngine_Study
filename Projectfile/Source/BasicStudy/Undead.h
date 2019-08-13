#pragma once

#include "Killable.h"
#include "Undead.generated.h"

UINTERFACE()
class BASICSTUDY_API UUndead : public UKillable
{
	GENERATED_BODY()
};

class BASICSTUDY_API IUndead : public IKillable
{
	GENERATED_BODY()

public:

	virtual bool IsDead() override;
	virtual void Die() override;
	virtual void Turn();
	virtual void Banish();
};