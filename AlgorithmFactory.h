#pragma once
#include "Context.h"
#include "Choose.h"
#include "Review.h"
#include "Kill.h"
class AlgorithmFactory
{
	static Context* CreateContext(char strategy)
	{
		Context* context = nullptr;
		switch (strategy)
		{
		case 'C':
			context = new Context(new Choose());
		case 'R':
			context = new Context(new Review());
		case 'K':
			context = new Context(new Kill());
		default:
			break;
		}
		return context;
	}
};

