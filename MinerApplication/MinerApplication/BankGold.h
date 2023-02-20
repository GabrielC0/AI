#pragma once
#include "State.h"

//Mining for gold state
class BankGold :
	public State
{
public:
	BankGold();
	~BankGold();

	void Execute(Miner* miner);
};