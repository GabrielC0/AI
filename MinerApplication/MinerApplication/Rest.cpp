#include "stdafx.h"
#include "MiningForGold.h"
#include "Rest.h"

Rest::Rest()
{
}


Rest::~Rest()
{
}

void Rest::Execute(Miner* miner)
{
	cout << "Having a Rest !!" << endl;
	miner->ChangeState(new MiningForGold());

}
