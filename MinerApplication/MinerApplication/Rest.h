#pragma once	
#include "State.h"

class Rest :
public State
{
public:
	Rest();
	~Rest();
	void Execute(Miner* miner);
};
