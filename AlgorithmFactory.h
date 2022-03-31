#pragma once
#include "Context.h"
#include "ChooseFactory.h"
#include "Review.h"
#include "Kill.h"
#include "Show.h"
#include "Change.h"
#include "Memery.h"
#include "Search.h"
#include "ModifyFactory.h"

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
			context = new Context(new ChooseFactory());
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
		case 6:
			context = new Context(new Memery());
			break;
		case 7:
			context = new Context(new ModifyFactory());
			break;
		case 8:
			context = new Context(new Search());
			break;
		default:
			break;
		}
		return context;
	}
};

