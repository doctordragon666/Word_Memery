#include "Context.h"

Context::Context(Strategy* strategy)
{
	m_strategy = strategy;
	global_b = nullptr;
}

void Context::setbase(Bookbase* b)
{
	global_b = b;
}

Context::~Context()
{
	delete m_strategy;
	delete global_b;
	m_strategy = nullptr;
	global_b = nullptr;
}