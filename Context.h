#pragma once
#include "Strategy.h"
class Context
{
public:
	Strategy* m_strategy;
	Context(Strategy* strategy) :m_strategy(strategy) {}
	void ContextInterface()
	{
		m_strategy->AlgorithmInterface();
	}
};

