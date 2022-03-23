#pragma once
#include "Context.h"
#include "Choose.h"
#include "Review.h"
#include "Kill.h"
#include "Show.h"
#include "Change.h"
class AlgorithmFactory
{
public:
	static Context* CreateContext(int strategy)
	{
		//¾²Ì¬·½·¨
		Context* context = nullptr;
		switch (strategy)
		{
		case 1:
			context = new Context(new Choose());
			break;
		case 2:
			context = new Context(new Review());
			break;
		case 3:
			context = new Context(new Kill());
			break;
		case 4:
			context = new Context(new Show());
			break;
		case 5:
			context = new Context(new Change());
			break;
		default:
			break;
		}
		return context;
	}
};

