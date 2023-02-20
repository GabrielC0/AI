#include "stdafx.h"
#include "BankGold.h"
#include "MiningForGold.h"
#include "Rest.h"

MiningForGold::MiningForGold()
{
}

MiningForGold::~MiningForGold()
{
}

void MiningForGold::Execute(Miner *miner)
{
	cout << "Mining gold !!" << endl;

	miner->m_Gold++;
	miner->m_energy--;

	if (miner->m_energy == 0) {
		miner->ChangeState(new Rest());
		miner->m_energy = 7;
	}

	if (miner->m_Gold == 5) {
		miner->ChangeState(new BankGold());
	}


}
