#pragma once
#include "Context.h"
#include "Choose.h"
#include "Review.h"
#include "Kill.h"
#include "Show.h"
class AlgorithmFactory
{
public:
	static Context* CreateContext(int strategy)
	{
		Context* context = nullptr;
		switch (strategy)
		{
		case 1:
			context = new Context(new Choose());
		case 2:
			context = new Context(new Review());
		case 3:
			context = new Context(new Kill());
		case 4:
			context = new Context(new Show());
		default:
			break;
		}
		return context;
	}
};

