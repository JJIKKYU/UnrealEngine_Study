
#include "Wearable.h"
#include "BasicStudy.h"


int32 IWearable::GetStrengthRequirement_Implementation()
{
	return 0;
}

bool IWearable::CanEquip_Implementation(APawn* Wearer)
{
	return true;
}


void IWearable::OnEquip_Implementation(APawn* Wearer)
{

}