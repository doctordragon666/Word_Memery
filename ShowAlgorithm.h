#pragma once
#include "Show.h"
class ShowAlgorithm
{
public:
	Show* Create(int way)
	{
		Show* s = nullptr;
		switch (way)
		{
		case 1:
			s = new Show();
			break;
		default:
			break;
		}
		return s;
	}
};

