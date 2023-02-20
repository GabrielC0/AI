#include "stdafx.h"
#include "BankGold.h"
#include "MiningForGold.h"

BankGold::BankGold()
{
}


BankGold::~BankGold()
{
}

void BankGold::Execute(Miner* miner)
{
	cout << "Gold is in Bank BROS !!" << endl;
	miner->m_BankedGold += miner->m_Gold;
	miner->m_Gold = 0;
	miner->ChangeState(new MiningForGold());
}
